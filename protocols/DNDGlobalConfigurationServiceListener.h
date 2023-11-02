
@protocol DNDGlobalConfigurationServiceListener <NSObject>

@optional

- (void)globalConfigurationService:(DNDGlobalConfigurationService *)arg1 didEditCloudSyncPreference:(bool)arg2;
- (void)globalConfigurationService:(DNDGlobalConfigurationService *)arg1 didReceiveUpdatedPairSyncState:(unsigned long long)arg2;
- (void)globalConfigurationService:(DNDGlobalConfigurationService *)arg1 didReceiveUpdatedPhoneCallBypassSettings:(DNDBypassSettings *)arg2;
- (void)globalConfigurationService:(DNDGlobalConfigurationService *)arg1 didReceiveUpdatedPreventAutoReplySetting:(bool)arg2;

@end
