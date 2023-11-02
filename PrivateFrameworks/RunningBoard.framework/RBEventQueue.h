
@interface RBEventQueue : NSObject {
    bool  _dirtyDuringModify;
    NSMutableArray * _eventQueue;
    bool  _inModifyBlock;
    bool  _isProcessingEvents;
    double  _nextFireTime;
    <RBTimeProvidingEvent> * _pendingEvent;
    NSObject<OS_dispatch_queue> * _queue;
    <RBTimeProviding> * _timeProvider;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) NSArray *events;
@property (nonatomic, readonly) RBEventQueueEvent *nextEvent;

- (void).cxx_destruct;
- (void)addEvent:(id)arg1;
- (void)addEvents:(id)arg1;
- (void)batchModify:(id /* block */)arg1;
- (unsigned long long)count;
- (id)description;
- (id)events;
- (id)initWithQueue:(id)arg1 timeProvider:(id)arg2;
- (id)nextEvent;
- (void)removeEvent:(id)arg1;
- (void)removeEvents:(id)arg1;

@end
