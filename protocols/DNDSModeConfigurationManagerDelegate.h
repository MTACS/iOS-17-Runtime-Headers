
@protocol DNDSModeConfigurationManagerDelegate <NSObject>

@required

- (void)modeConfigurationManager:(DNDSModeConfigurationManager *)arg1 didModifyExceptionsForContacts:(NSDictionary *)arg2 forModeConfiguration:(DNDModeConfiguration *)arg3;
- (void)modeConfigurationManager:(DNDSModeConfigurationManager *)arg1 didUpdateAvailableModes:(NSArray *)arg2;

@optional

- (void)modeConfigurationManager:(DNDSModeConfigurationManager *)arg1 didModifyAvailableMode:(DNDMode *)arg2;

@end
