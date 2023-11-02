
@interface CKUploadRequestManagerStateMachine : NSObject {
    id /* block */  _actionHandler;
    id /* block */  _enterStateHandler;
    CUStateEvent * _eventCausingTransition;
    id /* block */  _exitStateHandler;
    id /* block */  _internalActionHandler;
    CUStateMachine * _stateMachine;
}

@property (nonatomic, copy) id /* block */ actionHandler;
@property (nonatomic, copy) id /* block */ enterStateHandler;
@property (nonatomic, retain) CUStateEvent *eventCausingTransition;
@property (nonatomic, copy) id /* block */ exitStateHandler;
@property (nonatomic, copy) id /* block */ internalActionHandler;
@property (nonatomic, retain) CUStateMachine *stateMachine;

+ (id)nameFromFunction:(long long)arg1;
+ (id)nameFromResponseAction:(long long)arg1;
+ (id)nameFromState:(long long)arg1;
+ (id)nameFromStateEvent:(long long)arg1;

- (void).cxx_destruct;
- (id /* block */)actionHandler;
- (bool)canPerformFunction:(long long)arg1;
- (id)createStateMachine;
- (void)dealloc;
- (void)dispatchEvent:(long long)arg1;
- (void)dispatchEvent:(long long)arg1 userInfo:(id)arg2;
- (id /* block */)enterStateHandler;
- (id)eventCausingTransition;
- (id /* block */)eventHandlerForState:(id)arg1 withEnterBlock:(id /* block */)arg2 exitBlock:(id /* block */)arg3 eventBlock:(id /* block */)arg4;
- (id /* block */)exitStateHandler;
- (id)initWithActionHandler:(id /* block */)arg1;
- (id /* block */)internalActionHandler;
- (void)setActionHandler:(id /* block */)arg1;
- (void)setEnterStateHandler:(id /* block */)arg1;
- (void)setEventCausingTransition:(id)arg1;
- (void)setExitStateHandler:(id /* block */)arg1;
- (void)setInternalActionHandler:(id /* block */)arg1;
- (void)setStateMachine:(id)arg1;
- (void)start;
- (id)stateMachine;
- (void)transitionToState:(id)arg1 withEvent:(id)arg2;

@end
