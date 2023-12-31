
@protocol ENGroupContextObserverMiddleware <ENGroupContextMiddleware>

@optional

- (void)groupContext:(ENGroupContext *)arg1 didCacheGroup:(ENGroup *)arg2;
- (void)groupContext:(ENGroupContext *)arg1 didCreateGroup:(ENGroup *)arg2;
- (void)groupContext:(ENGroupContext *)arg1 didReceiveDecryptionFailureForGroup:(ENGroup *)arg2;
- (void)groupContext:(ENGroupContext *)arg1 didUpdateGroup:(ENGroup *)arg2 withNewGroup:(ENGroup *)arg3;
- (void)groupContextDidReceiveRegistrationIdentityUpdate:(ENGroupContext *)arg1;

@end
