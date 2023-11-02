
@interface _SRSTServer : NSObject {
    void stateMachine;
    void stateMachineObserver;
}

@property (nonatomic, readonly) _SRSTState *currentState;

- (void).cxx_destruct;
- (id)currentState;
- (void)dealloc;
- (id)init;

@end
