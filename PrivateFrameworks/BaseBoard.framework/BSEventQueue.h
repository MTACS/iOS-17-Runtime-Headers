
@interface BSEventQueue : NSObject <BSDescriptionProviding> {
    NSMutableArray * _eventQueue;
    NSHashTable * _eventQueueLocks;
    BSEventQueueEvent * _executingEvent;
    NSString * _name;
    bool  _processingEvents;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEmpty, nonatomic, readonly) bool empty;
@property (nonatomic, readonly) BSEventQueueEvent *executingEvent;
@property (readonly) unsigned long long hash;
@property (getter=isLocked, nonatomic, readonly) bool locked;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSArray *pendingEvents;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_noteQueueDidDrain;
- (void)_noteQueueDidLock;
- (void)_noteQueueDidUnlock;
- (void)_noteWillCancelEventsWithName:(id)arg1 count:(unsigned long long)arg2;
- (void)_noteWillExecuteEvent:(id)arg1;
- (void)_noteWillPendEvents:(id)arg1 atPosition:(int)arg2;
- (bool)_shouldProcessEvent:(id)arg1 enqueuedDuringExecutionOfEvent:(id)arg2;
- (id)acquireLockForReason:(id)arg1;
- (void)cancelEventsWithName:(id)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)executeOrInsertEvent:(id)arg1 atPosition:(int)arg2;
- (void)executeOrInsertEvents:(id)arg1 atPosition:(int)arg2;
- (id)executingEvent;
- (void)flushAllEvents;
- (void)flushEvents:(id)arg1;
- (void)flushPendingEvents;
- (bool)hasEventWithName:(id)arg1;
- (bool)hasEventWithPrefix:(id)arg1;
- (id)init;
- (id)initWithName:(id)arg1 onQueue:(id)arg2;
- (bool)isEmpty;
- (bool)isLocked;
- (id)name;
- (id)pendingEvents;
- (id)queue;
- (void)relinquishLock:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
