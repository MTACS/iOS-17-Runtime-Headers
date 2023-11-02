
@protocol OspreyDeviceAuthenticating <NSObject>

@required

- (unsigned long long)authenticationStrategyVersion;
- (void)signData:(void *)arg1 success:(void *)arg2 failure:(void *)arg3; // needs 3 arg types, found 14: NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSDate *, void*, id /* block */, void*, void, id /* block */, NSError *, void*

@end
