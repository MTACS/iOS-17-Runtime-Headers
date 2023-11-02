
@interface SVXClientSessionStateService : NSObject <SVXClientServiceConsuming, SVXClientSessionStateServicing> {
    <SVXClientServiceProviding> * _clientServiceProvider;
    long long  _currentState;
    <SVXClientSessionStateServiceDelegate> * _delegate;
    <SVXPerforming> * _performer;
}

@property (nonatomic, readonly) long long currentState;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SVXClientSessionStateServiceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setCurrentState:(long long)arg1;
- (void)clientServiceDidChange:(bool)arg1;
- (long long)currentState;
- (id)delegate;
- (void)fetchStateWithCompletion:(id /* block */)arg1;
- (void)handleDidChangeSessionStateFrom:(long long)arg1 to:(long long)arg2;
- (void)handleWillChangeSessionStateFrom:(long long)arg1 to:(long long)arg2;
- (id)initWithClientServiceProvider:(id)arg1 analytics:(id)arg2 performer:(id)arg3;
- (void)setDelegate:(id)arg1;

@end
