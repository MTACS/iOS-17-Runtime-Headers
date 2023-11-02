
@interface SKStateMachine : NSObject {
    NSString * _event;
    NSString * _state;
    SKStateTransitionTable * _table;
}

@property (nonatomic, retain) NSString *event;
@property (nonatomic, retain) NSString *state;
@property (nonatomic, retain) SKStateTransitionTable *table;

+ (id)machineWithStateTransitionTable:(id)arg1 startState:(id)arg2 startEvent:(id)arg3;

- (void).cxx_destruct;
- (id)event;
- (bool)finished;
- (bool)nextWithError:(id*)arg1;
- (bool)runWithError:(id*)arg1;
- (void)setEvent:(id)arg1;
- (void)setState:(id)arg1;
- (void)setTable:(id)arg1;
- (id)state;
- (id)table;

@end
