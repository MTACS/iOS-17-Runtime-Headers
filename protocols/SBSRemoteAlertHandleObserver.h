
@protocol SBSRemoteAlertHandleObserver <NSObject>

@optional

- (void)remoteAlertHandle:(SBSRemoteAlertHandle *)arg1 didInvalidateWithError:(NSError *)arg2;
- (void)remoteAlertHandleDidActivate:(SBSRemoteAlertHandle *)arg1;
- (void)remoteAlertHandleDidDeactivate:(SBSRemoteAlertHandle *)arg1;

@end
