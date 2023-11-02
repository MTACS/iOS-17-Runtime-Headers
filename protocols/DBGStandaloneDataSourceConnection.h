
@protocol DBGStandaloneDataSourceConnection <DBGDataSourceConnection>

@required

- (NSObject<OS_dispatch_queue> *)captureQueue;
- (void)setCaptureQueue:(NSObject<OS_dispatch_queue> *)arg1;

@end
