
@protocol SUCoreConnectClientProxyProtocol <NSObject>

@optional

- (void)executeGenericBlock:(id)arg1;
- (void)executeGenericBlock:(id)arg1 disableVerboseLogging:(bool)arg2;
- (void)executeProgressBlock:(SUCoreProgress *)arg1;
- (void)executeProgressBlock:(SUCoreProgress *)arg1 disableVerboseLogging:(bool)arg2;

@end
