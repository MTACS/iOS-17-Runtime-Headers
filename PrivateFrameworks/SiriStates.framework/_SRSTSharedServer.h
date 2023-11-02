
@interface _SRSTSharedServer : NSObject {
    void stateMachine;
    void stateMachineObserver;
}

@property (nonatomic, readonly) _SRSTSharedState *currentState;

- (void).cxx_destruct;
- (id)currentState;
- (void)dealloc;
- (id)init;

@end
