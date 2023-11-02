
@interface AMSMetricsDatabaseDataSource : NSObject <AMSMetricsDataSource> {
    NSString * _containerIdentifier;
    NSString * _currentLockKey;
    AMSMetricsDatabase * _database;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) NSString *containerIdentifier;
@property (nonatomic, retain) NSString *currentLockKey;
@property (nonatomic, readonly) AMSMetricsDatabase *database;
@property (nonatomic, readonly) long long eventCount;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (void)cancel;
- (id)containerIdentifier;
- (id)currentLockKey;
- (id)database;
- (void)dealloc;
- (void)didFinishBatching;
- (id)enqueueEvents:(id)arg1;
- (void)enumerateSortedEventsForTopic:(id)arg1 block:(id /* block */)arg2;
- (long long)eventCount;
- (id)initWithContainerIdentifier:(id)arg1;
- (id)queue;
- (void)removeAllEvents;
- (bool)removeEvents:(id)arg1 error:(id*)arg2;
- (void)setCurrentLockKey:(id)arg1;
- (void)setQueue:(id)arg1;
- (bool)skipEvents:(id)arg1 error:(id*)arg2;
- (bool)willStartBatchingWithLogKey:(id)arg1 error:(id*)arg2;

@end
