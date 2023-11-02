
@interface STKAlertSessionEventQueue : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableArray * _queue_eventQueue;
    NSMutableArray * _queue_haltingAssertions;
}

- (void).cxx_destruct;
- (void)_queue_dequeueEventsIfPossible;
- (void)_queue_enqueueEvent:(id /* block */)arg1;
- (id)acquireEventQueueHaltingAssertionForReason:(id)arg1;
- (void)enqueue:(id /* block */)arg1;
- (id)init;

@end
