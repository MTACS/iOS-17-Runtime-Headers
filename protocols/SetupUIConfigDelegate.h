
@protocol SetupUIConfigDelegate

@required

- (void)setupUIConfigConnectionStatusUpdated:(int)arg1 status:(int)arg2 paramDict:(NSDictionary *)arg3 forController:(AUSetupController *)arg4;
- (void)setupUIConfigPrompt:(int)arg1 paramDict:(NSDictionary *)arg2 forController:(AUSetupController *)arg3;

@end
