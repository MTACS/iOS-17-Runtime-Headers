
@interface _SRSTCallServer : NSObject {
    void stateMachine;
    void stateMachineObserver;
}

@property (nonatomic, readonly) _SRSTCallState *currentState;

- (void).cxx_destruct;
- (id)currentState;
- (void)dealloc;
- (id)init;

@end
