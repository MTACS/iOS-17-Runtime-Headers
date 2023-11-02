
@interface DDUIEndpointPairingListener : NSObject {
    <DDUIEndpointPairingListeningTransport> * _transport;
}

@property (nonatomic, retain) <DDUIEndpointPairingListeningTransport> *transport;

- (void).cxx_destruct;
- (void)beginListeningWithErrorHandler:(id /* block */)arg1 pairingHandler:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)checkIfUserNeedsReconfirmationForSession:(id)arg1 withServiceIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)createListenerMappingForSession:(id)arg1 withServiceIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (id)initWithTransport:(id)arg1;
- (void)invalidate;
- (void)setTransport:(id)arg1;
- (id)transport;

@end
