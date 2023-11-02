
@interface HKStateMachine : NSObject {
    HKStateMachineState * _currentState;
    <HKStateMachineDelegate> * _delegate;
    bool  _isProcessingEvent;
    NSString * _name;
    NSMutableArray * _pendingEvents;
    NSMutableDictionary * _statesByIndex;
    NSMutableArray * _transitions;
}

@property (nonatomic, readonly) HKStateMachineState *currentState;
@property (nonatomic) <HKStateMachineDelegate> *delegate;
@property (nonatomic, readonly, copy) NSString *name;

+ (id)nameForOwner:(id)arg1 UUID:(id)arg2 tag:(id)arg3;

- (void).cxx_destruct;
- (void)_dequeueEvent;
- (void)_handleEvent:(long long)arg1 date:(id)arg2 error:(id)arg3 completion:(id /* block */)arg4;
- (id)addStateTransitionFrom:(id)arg1 to:(id)arg2 event:(long long)arg3 label:(id)arg4;
- (id)addStateWithIndex:(long long)arg1 label:(id)arg2;
- (id)currentState;
- (id)delegate;
- (void)enqueueEvent:(long long)arg1 date:(id)arg2 error:(id)arg3 completion:(id /* block */)arg4;
- (void)enterAtState:(long long)arg1;
- (id)graphDescription;
- (id)init;
- (id)initWithName:(id)arg1;
- (id)name;
- (void)setDelegate:(id)arg1;
- (id)stateWithIndex:(long long)arg1;

@end
