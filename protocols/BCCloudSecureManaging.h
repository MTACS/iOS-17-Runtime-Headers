
@protocol BCCloudSecureManaging

@required

+ (<BCCloudSecureManaging> *)sharedManager;

- (<BDSSecureEngagementManaging> *)engagementManager;
- (void)setEnableCloudSync:(bool)arg1;
- (<BCCloudSecureUserDataManager> *)userDataManager;

@end
