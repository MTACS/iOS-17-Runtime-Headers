
@interface TPSEventsHistoryController : NSObject {
    NSMutableDictionary * _contextualEventIdentifierToContextualEventMap;
    NSDictionary * _contextualEventsForIdentifiers;
    NSObject<OS_dispatch_queue> * _eventQueue;
    TPSTipStatusController * _tipStatusController;
}

@property (nonatomic, retain) NSMutableDictionary *contextualEventIdentifierToContextualEventMap;
@property (nonatomic, copy) NSDictionary *contextualEventsForIdentifiers;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *eventQueue;
@property (nonatomic, retain) TPSTipStatusController *tipStatusController;

+ (void)removeEventHistoryCache;

- (void).cxx_destruct;
- (void)_addEvents:(id)arg1 contentIdentifier:(id)arg2 eventSinceDate:(id)arg3 minObservationCount:(unsigned long long)arg4;
- (id)_contextualEventForIdentifier:(id)arg1;
- (void)_persistUserInfo:(id)arg1 forObserverIdentifiers:(id)arg2;
- (void)_setContextualEvent:(id)arg1 forIdentifier:(id)arg2;
- (void)addEventsFromTriggerEvents:(id)arg1 desiredOutcomeEvents:(id)arg2 contentIdentifier:(id)arg3 eventSinceDate:(id)arg4;
- (id)allContextualEvents;
- (id)contextualEventIdentifierToContextualEventMap;
- (id)contextualEventsBySourceMap;
- (id)contextualEventsForIdentifiers;
- (id)contextualEventsForIdentifiers:(id)arg1;
- (id)debugDescription;
- (id)eventQueue;
- (id)initWithTipStatusController:(id)arg1;
- (void)processEventProviderQueryResults:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeCacheData;
- (void)removeObserverIdentifiers:(id)arg1;
- (void)removeObserverIdentifiers:(id)arg1 fromEventIdentifiers:(id)arg2;
- (void)restartTrackingForEventIdentifiers:(id)arg1 date:(id)arg2;
- (void)setContextualEventIdentifierToContextualEventMap:(id)arg1;
- (void)setContextualEventsForIdentifiers:(id)arg1;
- (void)setEventQueue:(id)arg1;
- (void)setTipStatusController:(id)arg1;
- (id)tipStatusController;
- (void)updateCacheData;

@end
