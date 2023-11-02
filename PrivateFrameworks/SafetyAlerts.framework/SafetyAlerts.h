
@interface SafetyAlerts : NSObject {
    NSObject<OS_xpc_object> * _connection;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)sharedInterface;

- (void)fetchIsSafetyAlertsEnabledOnQueue:(id)arg1 withReply:(id /* block */)arg2;
- (bool)getIsSafetyAlertsEnabledFromReply:(id)arg1;
- (id)init;
- (bool)isSafetyAlertsEnabledSync;
- (void)onNetworkConnectivityChanged:(id)arg1;
- (void)onSignificantEventDetected:(id)arg1;
- (void)onTestMessage:(id)arg1;
- (void)onUserTappedOnWeaWithInfo:(id)arg1;
- (void)onWeaReceived:(id)arg1;

@end
