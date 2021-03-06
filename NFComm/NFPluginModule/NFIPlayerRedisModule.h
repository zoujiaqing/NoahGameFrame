// -------------------------------------------------------------------------
//    @FileName         :    NFIPlayerRedisModule.h
//    @Author           :    LvSheng.Huang
//    @Date             :    2012-12-15
//    @Module           :    NFIPlayerRedisModule
//
// -------------------------------------------------------------------------

#ifndef NFI_PLAYER_REDIS_MODULE_H
#define NFI_PLAYER_REDIS_MODULE_H

#include "NFIModule.h"

class NFIPlayerRedisModule
    : public NFIModule
{

public:
	virtual int64_t GetPlayerCacheGameID(const NFGUID& self) = 0;
	virtual int64_t GetPlayerCacheProxyID(const NFGUID& self) = 0;

	virtual bool GetPlayerCacheGameID(const std::vector<std::string>& xList, std::vector<int64_t>& xResultList) = 0;
	virtual bool GetPlayerCacheProxyID(const std::vector<std::string>& xList, std::vector<int64_t>& xResultList) = 0;

	virtual NF_SHARE_PTR<NFIPropertyManager> GetPlayerCacheProperty(const NFGUID& self) = 0;
	virtual NF_SHARE_PTR<NFIRecordManager> GetPlayerCacheRecord(const NFGUID& self) = 0;

	virtual bool SetPlayerCacheProperty(const NFGUID& self, NF_SHARE_PTR<NFIPropertyManager> pPropertyManager) = 0;
	virtual bool SetPlayerCacheRecord(const NFGUID& self, NF_SHARE_PTR<NFIRecordManager> pRecordManager) = 0;

	virtual	bool GetAccountRoleID(const std::string& strAccount, NFGUID& xPlayerID) = 0;
	virtual bool SavePlayerDataToCatch(const NFGUID& self) = 0;

	virtual const NFGUID CreateRole(const std::string& strAccount, const std::string& strName) = 0;
	virtual const bool DeleteRole(const std::string& strAccount, const NFGUID xID) = 0;
};

#endif