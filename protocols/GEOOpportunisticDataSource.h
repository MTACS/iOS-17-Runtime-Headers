
@protocol GEOOpportunisticDataSource <NSObject>

@required

+ (unsigned long long)policy;

- (unsigned long long)bytesDownloaded;
- (void)cancel;
- (<GEOOpportunisticDataSourceDelegate> *)delegate;
- (NSObject<OS_dispatch_queue> *)delegateQueue;
- (void)pause;
- (void)resume;
- (void)setDelegate:(id <GEOOpportunisticDataSourceDelegate>)arg1;
- (void)setDelegateQueue:(NSObject<OS_dispatch_queue> *)arg1;

@end
