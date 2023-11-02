
@interface BCSNFCReaderConnection : NSObject {
    BCSNotificationServiceConnection * _notificationServiceConnection;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (bool)_enableNFC;
- (long long)_hardwareSupportState;
- (bool)_isNFCEnabled;
- (bool)_needsRadioEnabledCheck;
- (void)checkHardwareSupportStateWithCompletionHandler:(id /* block */)arg1;
- (void)checkNFCEnabledWithCompletionHandler:(id /* block */)arg1;
- (void)disconnect;
- (void)enableNFCWithCompletionHandler:(id /* block */)arg1;
- (id)init;
- (void)startReaderWithDelegate:(id)arg1 errorHandler:(id /* block */)arg2 interruptionHandler:(id /* block */)arg3;
- (void)stopReaderWithErrorHandler:(id /* block */)arg1;

@end
