
@interface FCTaskScheduler : NSObject

+ (id)backgroundDownloadOperationQueue;
+ (void)disableOptionalPrefetching;
+ (void)enableBackgroundDownloadsInSpiteOfHighPriorityTasks;
+ (void)executeOptionalPrefetchBlock:(id /* block */)arg1;
+ (id)lowPriorityOperationQueue;
+ (id)lowPriorityQueue;
+ (void)popHighPriorityTaskInFlight;
+ (void)pushHighPriorityTaskInFlight;
+ (void)scheduleLowPriorityAsyncBlock:(id /* block */)arg1;
+ (void)scheduleLowPriorityBlock:(id /* block */)arg1;
+ (void)scheduleLowPriorityBlockForMainThread:(id /* block */)arg1;
+ (void)scheduleLowPriorityOperation:(id)arg1;
+ (void)scheduleOptionalPrefetchBlock:(id /* block */)arg1;

@end
