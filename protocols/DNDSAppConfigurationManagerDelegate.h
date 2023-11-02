
@protocol DNDSAppConfigurationManagerDelegate <NSObject>

@optional

- (void)appConfigurationManager:(DNDSAppConfigurationManager *)arg1 didClearActionWithIdentifier:(NSString *)arg2 forApplicationIdentifier:(DNDApplicationIdentifier *)arg3 modeIdentifier:(NSString *)arg4;
- (void)appConfigurationManager:(DNDSAppConfigurationManager *)arg1 didClearActionsForAppsInModeIdentifiers:(NSDictionary *)arg2;
- (void)appConfigurationManager:(DNDSAppConfigurationManager *)arg1 didClearSystemAction:(DNDSystemAction *)arg2 modeIdentifier:(NSString *)arg3;
- (void)appConfigurationManager:(DNDSAppConfigurationManager *)arg1 didClearSystemActionsInModeIdentifiers:(NSDictionary *)arg2;
- (void)appConfigurationManager:(DNDSAppConfigurationManager *)arg1 didSetAction:(DNDAppAction *)arg2 forApplicationIdentifier:(DNDApplicationIdentifier *)arg3 modeIdentifier:(NSString *)arg4;
- (void)appConfigurationManager:(DNDSAppConfigurationManager *)arg1 didSetSystemAction:(DNDSystemAction *)arg2 modeIdentifier:(NSString *)arg3;

@end
