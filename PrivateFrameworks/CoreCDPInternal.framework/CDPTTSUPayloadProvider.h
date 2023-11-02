
@interface CDPTTSUPayloadProvider : NSObject <CDPKeychainCircleProxy> {
    <CDPDCircleProxy> * _circleProxy;
    bool  _complete;
    KCPairingChannel * _pairingChannel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithCircleProxy:(id)arg1;
- (id)initiatingPayload:(id*)arg1;
- (bool)isComplete;
- (id)processIncomingPayload:(id)arg1 error:(id*)arg2;
- (bool)requiresInitialSync;
- (bool)supportsInteractiveAuth;

@end
