
@protocol UNSSettingsGatewayObserver <NSObject>

@optional

- (void)settingsGateway:(UNSSettingsGateway *)arg1 didUpdateGlobalSettings:(BBGlobalSettings *)arg2;
- (void)settingsGateway:(UNSSettingsGateway *)arg1 didUpdateSectionInfoForSectionIDs:(NSSet *)arg2;

@end
