
@interface HDCurrentActivityCacheDemoQueryServer : HDCurrentActivityCacheQueryServer

- (void)_queue_start;
- (bool)_shouldExecuteWhenProtectedDataIsUnavailable;
- (bool)shouldObserveActivityCache;

@end
