
@interface RPNearFieldPassiveClient : RPNearFieldClient {
    id /* block */  _alwaysOnHandler;
}

@property (nonatomic, copy) id /* block */ alwaysOnHandler;

- (void).cxx_destruct;
- (id /* block */)alwaysOnHandler;
- (void)receivedAlwaysOnEventWithSuggestedRole:(unsigned int)arg1;
- (void)setAlwaysOnHandler:(id /* block */)arg1;
- (void)startDiscoveryWithApplicationLabels:(id)arg1 completion:(id /* block */)arg2;

@end
