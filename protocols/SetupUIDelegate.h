
@protocol SetupUIDelegate

@optional

- (void)setupCompleteWithResult:(int)arg1 baseStationInfo:(NSDictionary *)arg2 forController:(AUSetupController *)arg3;
- (void)setupMonitoredSettingChanged:(int)arg1 paramDict:(NSDictionary *)arg2 forController:(AUSetupController *)arg3;
- (void)setupMonitoringMessage:(int)arg1 paramDict:(NSDictionary *)arg2 forController:(AUSetupController *)arg3;
- (void)setupProgressUpdated:(int)arg1 status:(int)arg2 paramDict:(NSDictionary *)arg3 forController:(AUSetupController *)arg4;
- (void)setupRPCResponseWithResult:(int)arg1 rpcSelector:(int)arg2 responseDict:(NSDictionary *)arg3 forController:(AUSetupController *)arg4;
- (void)setupTaskResponseWithResult:(int)arg1 responseDict:(NSDictionary *)arg2 forController:(AUSetupController *)arg3;

@end