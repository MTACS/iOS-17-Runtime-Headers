
@interface SRSTClient : NSObject <_SRSTClientDelegate> {
    <SRSTClientDelegate> * _delegate;
    _SRSTClient * _underlyingObject;
}

@property (nonatomic, readonly) SRSTState *currentState;
@property (nonatomic) <SRSTClientDelegate> *delegate;
@property (nonatomic, readonly, copy) NSString *mostRecentEventName;
@property (readonly) _SRSTClient *underlyingObject;

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
