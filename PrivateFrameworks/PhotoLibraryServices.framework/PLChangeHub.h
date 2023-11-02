
@interface PLChangeHub : NSObject {
    PLChangeStore * _changeStore;
    bool  _didInitializeState;
    NSObject<OS_dispatch_queue> * _eventsSerializationQueue;
    NSObject<OS_dispatch_source> * _memoryPressureSource;
}

+ (unsigned long long)currentInMemoryEventIndex;
+ (void)setCurrentInMemoryEventIndex:(unsigned long long)arg1;
+ (id)sharedChangeHub;

- (void).cxx_destruct;
- (unsigned long long)_inq_currentEventIndex;
- (void)_inq_sendPendingEventsForRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_onEventsQueueAsyncWithTransaction:(id)arg1 perform:(id /* block */)arg2;
- (void)_startListeningToMemoryPressureEvents;
- (void)clearChangeStore:(id /* block */)arg1;
- (void)eventsSinceIndex:(unsigned long long)arg1 filteredBy:(id /* block */)arg2 onQueue:(id)arg3 withBlock:(id /* block */)arg4;
- (void)fetchCurrentEventIndexWithCompletionHandler:(id /* block */)arg1;
- (id)init;
- (void)sendPendingEventsForRequest:(id)arg1 completionHandler:(id /* block */)arg2;

@end
