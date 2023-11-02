
@interface MBSourceDeviceTransferTask : MBDeviceTransferTask <MBManagerDelegate>

- (void)_cancel;
- (void)_finishWithError:(id)arg1;
- (void)_shortenPrebuddyExpirationIfNeeded;
- (bool)_startWithError:(id*)arg1;
- (void)cancel;
- (id)initWithFileTransferSession:(id)arg1;
- (void)manager:(id)arg1 didFinishDeviceTransferKeychainTransfer:(id)arg2;
- (void)manager:(id)arg1 didFinishDeviceTransferPreflight:(id)arg2 error:(id)arg3;
- (void)manager:(id)arg1 didFinishDeviceTransferWithError:(id)arg2;
- (void)manager:(id)arg1 didUpdateDeviceTransferProgress:(id)arg2;
- (void)resume;
- (void)start;
- (long long)taskType;

@end
