
@protocol DDSTrialManagerDataSource <NSObject>

@required

- (<DDSTrialClient> *)createTrialClientWithWorkQueue:(NSObject<OS_dispatch_queue> *)arg1 query:(DDSTrialQuery *)arg2;
- (bool)isEnabled;

@end
