
@protocol DNDSAppFocusConfigurationCoordinatorDelegate <NSObject>

@required

- (DNDState *)currentStateForAppFocusConfigurationCoordinator:(DNDSAppFocusConfigurationCoordinator *)arg1;

@optional

- (void)appFocusConfigurationCoordinator:(DNDSAppFocusConfigurationCoordinator *)arg1 didUpdateAppConfigurationContextForModeIdentifier:(NSString *)arg2;

@end
