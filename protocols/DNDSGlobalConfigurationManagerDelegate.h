
@protocol DNDSGlobalConfigurationManagerDelegate <NSObject>

@required

- (void)globalConfigurationManager:(DNDSGlobalConfigurationManager *)arg1 didUpdateModesCanImpactAvailabilitySetting:(bool)arg2;
- (void)globalConfigurationManager:(DNDSGlobalConfigurationManager *)arg1 didUpdatePhoneCallBypassSettings:(DNDBypassSettings *)arg2;
- (void)globalConfigurationManager:(DNDSGlobalConfigurationManager *)arg1 didUpdatePreventAutoReplySetting:(bool)arg2;

@end
