
@protocol AMSMetricsDataSource

@required

- (void)cancel;
- (void)didFinishBatching;
- (void)enumerateSortedEventsForTopic:(void *)arg1 block:(void *)arg2; // needs 2 arg types, found 10: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AMSMetricsEvent *, NSString *, NSError *, bool*, void*
- (bool)removeEvents:(NSArray *)arg1 error:(id*)arg2;
- (bool)skipEvents:(NSArray *)arg1 error:(id*)arg2;
- (bool)willStartBatchingWithLogKey:(NSString *)arg1 error:(id*)arg2;

@end
