
@protocol HMDSBSRemoteAlertHandleObserver <NSObject>

@required

- (void)remoteAlertHandle:(id <HMDSBSRemoteAlertHandle>)arg1 didInvalidateWithError:(NSError *)arg2;
- (void)remoteAlertHandleDidActivate:(id <HMDSBSRemoteAlertHandle>)arg1;
- (void)remoteAlertHandleDidDeactivate:(id <HMDSBSRemoteAlertHandle>)arg1;

@end
