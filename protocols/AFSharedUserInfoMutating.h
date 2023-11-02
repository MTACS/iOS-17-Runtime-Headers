
@protocol AFSharedUserInfoMutating <NSObject>

@required

- (void)setCompanionDeviceInfo:(AFCompanionDeviceInfo *)arg1;
- (void)setCompanionLinkReady:(bool)arg1;
- (void)setHomeUserId:(NSString *)arg1;
- (void)setICloudAltDSID:(NSString *)arg1;
- (void)setLoggableSharedUserId:(NSString *)arg1;
- (void)setPersonalRequestsEnabled:(bool)arg1;
- (void)setSharedUserId:(NSString *)arg1;

@end
