
@protocol SBSRemoteAlertHandleServiceClientInterface

@required

- (oneway void)remoteAlertHandleWithID:(NSString *)arg1 didInvalidateWithError:(NSError *)arg2;
- (oneway void)remoteAlertHandleWithIDDidActivate:(NSString *)arg1;
- (oneway void)remoteAlertHandleWithIDDidDeactivate:(NSString *)arg1;

@end
