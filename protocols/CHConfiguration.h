
@protocol CHConfiguration <NSObject>

@required

- (void)addDelegate:(id <CHConfigurationDelegate>)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2;
- (bool)isCloudKitEnabled;
- (void)removeDelegate:(id <CHConfigurationDelegate>)arg1;

@end
