
@protocol DNDSRemoteServiceProviderGlobalConfigurationDelegate <NSObject>

@required

- (void)remoteServiceProvider:(DNDSRemoteServiceProvider *)arg1 didChangeFocusStatusSharingSettingForApplicationIdentifier:(NSString *)arg2;
- (DNDAccountFeatureSupport *)remoteServiceProvider:(DNDSRemoteServiceProvider *)arg1 getAccountFeatureSupportWithError:(id*)arg2;
- (unsigned long long)remoteServiceProvider:(DNDSRemoteServiceProvider *)arg1 getCloudSyncStateReturningError:(id*)arg2;
- (bool)remoteServiceProvider:(DNDSRemoteServiceProvider *)arg1 getModesCanImpactAvailabilityReturningError:(id*)arg2;
- (unsigned long long)remoteServiceProvider:(DNDSRemoteServiceProvider *)arg1 getPairSyncStateReturningError:(id*)arg2;
- (bool)remoteServiceProvider:(DNDSRemoteServiceProvider *)arg1 getPreventAutoReplyReturningError:(id*)arg2;
- (bool)remoteServiceProvider:(DNDSRemoteServiceProvider *)arg1 setCloudSyncPreferenceEnabled:(bool)arg2 withError:(id*)arg3;
- (bool)remoteServiceProvider:(DNDSRemoteServiceProvider *)arg1 setModesCanImpactAvailability:(bool)arg2 withError:(id*)arg3;
- (bool)remoteServiceProvider:(DNDSRemoteServiceProvider *)arg1 setPairSyncPreferenceEnabled:(bool)arg2 withError:(id*)arg3;
- (bool)remoteServiceProvider:(DNDSRemoteServiceProvider *)arg1 setPreventAutoReply:(bool)arg2 withError:(id*)arg3;

@end
