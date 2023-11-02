
@interface AMSMetricsMemoryDataSource : NSObject <AMSMetricsDataSource> {
    NSMutableDictionary * _batches;
}

@property (nonatomic, retain) NSMutableDictionary *batches;

+ (id)batchesFromEvents:(id)arg1;

- (void).cxx_destruct;
- (id)batches;
- (void)cancel;
- (void)didFinishBatching;
- (void)enumerateSortedEventsForTopic:(id)arg1 block:(id /* block */)arg2;
- (id)initWithEvents:(id)arg1;
- (bool)removeEvents:(id)arg1 error:(id*)arg2;
- (void)setBatches:(id)arg1;
- (bool)skipEvents:(id)arg1 error:(id*)arg2;
- (bool)willStartBatchingWithLogKey:(id)arg1 error:(id*)arg2;

@end
