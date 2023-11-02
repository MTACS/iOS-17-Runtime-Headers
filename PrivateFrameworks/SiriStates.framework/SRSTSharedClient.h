
@interface SRSTSharedClient : NSObject <_SRSTSharedClientDelegate> {
    <SRSTSharedClientDelegate> * _delegate;
    _SRSTSharedClient * _underlyingObject;
}

@property (nonatomic, readonly) SRSTSharedState *currentState;
@property (nonatomic) <SRSTSharedClientDelegate> *delegate;
@property (nonatomic, readonly, copy) NSString *mostRecentEventName;
@property (readonly) _SRSTSharedClient *underlyingObject;

- (void).cxx_destruct;
- (id)currentState;
- (id)delegate;
- (void)dispatchEvent:(long long)arg1;
- (id)init;
- (id)mostRecentEventName;
- (void)setDelegate:(id)arg1;
- (void)stateMachineWithClient:(id)arg1 didReceiveEvent:(long long)arg2;
- (void)stateMachineWithClient:(id)arg1 didTransitionToState:(id)arg2;
- (void)stopClient;
- (id)underlyingObject;

@end
