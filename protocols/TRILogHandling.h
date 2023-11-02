
@protocol TRILogHandling <NSObject>

@required

- (void)logEvent:(TRILogEvent *)arg1 subgroupName:(NSString *)arg2 queue:(NSObject<OS_dispatch_queue> *)arg3;

@end
