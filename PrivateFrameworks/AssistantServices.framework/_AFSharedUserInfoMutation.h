
@interface _AFSharedUserInfoMutation : NSObject <AFSharedUserInfoMutating> {
    AFSharedUserInfo * _base;
    AFCompanionDeviceInfo * _companionDeviceInfo;
    bool  _companionLinkReady;
    NSString * _homeUserId;
    NSString * _iCloudAltDSID;
    NSString * _loggableSharedUserId;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasSharedUserId : 1; 
        unsigned int hasLoggableSharedUserId : 1; 
        unsigned int hasCompanionDeviceInfo : 1; 
        unsigned int hasPersonalRequestsEnabled : 1; 
        unsigned int hasCompanionLinkReady : 1; 
        unsigned int hasHomeUserId : 1; 
        unsigned int hasICloudAltDSID : 1; 
    }  _mutationFlags;
    bool  _personalRequestsEnabled;
    NSString * _sharedUserId;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)getCompanionDeviceInfo;
- (bool)getCompanionLinkReady;
- (id)getHomeUserId;
- (id)getICloudAltDSID;
- (id)getLoggableSharedUserId;
- (bool)getPersonalRequestsEnabled;
- (id)getSharedUserId;
- (id)initWithBase:(id)arg1;
- (bool)isDirty;
- (void)setCompanionDeviceInfo:(id)arg1;
- (void)setCompanionLinkReady:(bool)arg1;
- (void)setHomeUserId:(id)arg1;
- (void)setICloudAltDSID:(id)arg1;
- (void)setLoggableSharedUserId:(id)arg1;
- (void)setPersonalRequestsEnabled:(bool)arg1;
- (void)setSharedUserId:(id)arg1;

@end
