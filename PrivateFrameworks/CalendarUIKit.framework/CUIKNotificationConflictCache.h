
@interface CUIKNotificationConflictCache : NSObject {
    NSCache * _cache;
    NSObject<OS_dispatch_queue> * _fetchQueue;
    EKEventStore * _store;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_eventForNotification:(id)arg1;
- (bool)_updateNotification:(id)arg1 withCacheObject:(id)arg2;
- (id)conflictsForNotification:(id)arg1;
- (id)init;
- (void)updateConflictsForNotification:(id)arg1 synchronously:(bool)arg2 withCompletion:(id /* block */)arg3;

@end
