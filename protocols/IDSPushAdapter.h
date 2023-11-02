
@protocol IDSPushAdapter <NSObject>

@required

- (APSConnection *)apsConnectionWithEnvironmentName:(NSString *)arg1 namedDelegatePort:(NSString *)arg2 enablePushDuringSleep:(bool)arg3 queue:(NSObject<OS_dispatch_queue> *)arg4;
- (NSString *)placeholderMachPort;

@end
