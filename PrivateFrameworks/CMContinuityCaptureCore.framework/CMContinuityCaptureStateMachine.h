
@interface CMContinuityCaptureStateMachine : NSObject {
    <CMContinuityCaptureStateMachineActionDelegate> * _actionDelegate;
    CMContinuityCaptureState * _currentState;
    NSMutableArray * _deferredEvents;
    NSMutableArray * _eventQueue;
    NSMutableDictionary * _events;
    NSMutableArray * _previousStates;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableArray * _transactions;
}

@property (nonatomic, retain) CMContinuityCaptureState *currentState;
@property (nonatomic, retain) NSMutableArray *deferredEvents;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (void)_enqueueEventWithNameToPost:(id)arg1 data:(id)arg2;
- (void)_notifyCompletion:(id)arg1;
- (void)addEvents:(id)arg1;
- (void)addStateTransitions:(id)arg1;
- (void)aggregateEvents;
- (id)currentState;
- (id)deferredEvents;
- (id)description;
- (void)enqueueEventWithNameToPost:(id)arg1 data:(id)arg2;
- (void)enqueueEventWithNameToPostOnCurrentQueue:(id)arg1 data:(id)arg2;
- (id)eventForName:(id)arg1;
- (id)getDeferredEventsToPostForState:(id)arg1;
- (id)getNewStateAfterPostingDeferredEvents:(id)arg1 deferredEventsToPost:(id*)arg2;
- (id)initWithActionDelegate:(id)arg1 queue:(id)arg2;
- (void)notifyCompletion:(id)arg1;
- (bool)postEventWithName:(id)arg1 data:(id)arg2;
- (bool)postSameStateAction:(id)arg1 transition:(id)arg2 event:(id)arg3;
- (bool)postStateChangeAction:(id)arg1 transition:(id)arg2 event:(id)arg3;
- (id)queue;
- (void)setCurrentState:(id)arg1;
- (void)setDeferredEvents:(id)arg1;
- (void)setQueue:(id)arg1;

@end
