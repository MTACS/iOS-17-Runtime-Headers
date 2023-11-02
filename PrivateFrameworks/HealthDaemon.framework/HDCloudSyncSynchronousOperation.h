
@interface HDCloudSyncSynchronousOperation : HDCloudSyncOperation

+ (bool)shouldLogAtOperationStart;
+ (bool)shouldProduceOperationAnalytics;

- (void)main;
- (bool)performWithError:(id*)arg1;

@end
