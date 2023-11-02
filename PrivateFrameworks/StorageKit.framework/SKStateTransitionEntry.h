
@interface SKStateTransitionEntry : NSObject {
    id /* block */  _action;
    NSString * _event;
    NSString * _nextState;
    SEL  _selector;
    NSString * _state;
}

@property (nonatomic, copy) id /* block */ action;
@property (nonatomic, retain) NSString *event;
@property (nonatomic, retain) NSString *nextState;
@property (nonatomic) SEL selector;
@property (nonatomic, retain) NSString *state;

+ (id)entryWithState:(id)arg1 event:(id)arg2;
+ (id)entryWithState:(id)arg1 event:(id)arg2 action:(id /* block */)arg3;
+ (id)entryWithState:(id)arg1 event:(id)arg2 action:(id /* block */)arg3 nextState:(id)arg4;
+ (id)entryWithState:(id)arg1 event:(id)arg2 selector:(SEL)arg3;
+ (id)entryWithState:(id)arg1 event:(id)arg2 selector:(SEL)arg3 nextState:(id)arg4;

- (void).cxx_destruct;
- (id /* block */)action;
- (id)event;
- (id)nextState;
- (SEL)selector;
- (void)setAction:(id /* block */)arg1;
- (void)setEvent:(id)arg1;
- (void)setNextState:(id)arg1;
- (void)setSelector:(SEL)arg1;
- (void)setState:(id)arg1;
- (id)state;

@end
