
@protocol DNDModeConfigurationServiceListener <NSObject>

@optional

- (void)modeConfigurationService:(DNDModeConfigurationService *)arg1 didReceiveAppConfigurationContextUpdateForModeIdentifier:(NSString *)arg2;
- (void)modeConfigurationService:(DNDModeConfigurationService *)arg1 didReceiveAvailableModesUpdate:(NSArray *)arg2;

@end
