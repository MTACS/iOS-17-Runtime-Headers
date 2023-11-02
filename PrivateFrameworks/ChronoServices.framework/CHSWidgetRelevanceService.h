
@interface CHSWidgetRelevanceService : NSObject <BSInvalidatable, CHSChronoServiceClient> {
    CHSChronoServicesConnection * _connection;
    NSObject<OS_dispatch_queue> * _queue;
    <BSInvalidatable> * _queue_assertion;
    NSDictionary * _queue_entries;
    bool  _queue_invalidated;
    NSHashTable * _queue_observers;
}

@property (nonatomic, readonly) NSDictionary *cachedRelevanceEntries;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_notifyObservers;
- (void)_queue_notifyObservers;
- (void)_queue_subscribe;
- (void)_queue_unsubscribe;
- (void)_syncOnInternalQueue;
- (id)cachedRelevanceEntries;
- (void)dealloc;
- (id)init;
- (id)initWithConnection:(id)arg1;
- (void)invalidate;
- (void)registerObserver:(id)arg1;
- (void)unregisterObserver:(id)arg1;
- (void)widgetRelevanceEntriesDidChange:(id)arg1;

@end
