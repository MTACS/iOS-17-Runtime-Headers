
@interface ATAssetLinkPowerLogger : NSObject {
    NSMutableDictionary * _aggregation;
    NSObject<OS_dispatch_source> * _flushTimer;
    NSObject<OS_dispatch_queue> * _loggerQueue;
}

@property (nonatomic, retain) NSMutableDictionary *aggregation;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *flushTimer;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *loggerQueue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_aggregatesForKey:(id)arg1 createIfNotExistsWithTimestamp:(id)arg2;
- (void)_flushMessagesToPowerlog;
- (void)_incrementCountForAggregates:(id)arg1 key:(id)arg2;
- (void)_scheduleFlushTimer;
- (id)aggregation;
- (id)flushTimer;
- (id)init;
- (void)logAssetLinkOfType:(long long)arg1 didBeginDownloadingAsset:(id)arg2;
- (void)logAssetLinkOfType:(long long)arg1 didFinishAsset:(id)arg2 withError:(id)arg3;
- (id)loggerQueue;
- (void)setAggregation:(id)arg1;
- (void)setFlushTimer:(id)arg1;
- (void)setLoggerQueue:(id)arg1;

@end
