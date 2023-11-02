
@interface HAP2AccessoryServerPairingDriverPairSetupWorkItem : HAP2AccessoryServerPairingDriverWorkItem <HAPPairSetupSessionClientDelegate> {
    double  _backoffInterval;
    NSError * _cancelError;
    <HAP2AccessoryServerPairingDriverDelegate> * _delegate;
    bool  _invalidSetupCode;
    unsigned long long  _pairSetupType;
    HAPPairSetupSession * _pairingSession;
    <HAP2AccessoryServerTransport> * _transport;
}

@property (nonatomic) double backoffInterval;
@property (nonatomic, retain) NSError *cancelError;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <HAP2AccessoryServerPairingDriverDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isInvalidSetupCode, nonatomic) bool invalidSetupCode;
@property (nonatomic, readonly) unsigned long long pairSetupType;
@property (nonatomic, retain) HAPPairSetupSession *pairingSession;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <HAP2AccessoryServerTransport> *transport;

+ (id)pairSetupWithType:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_pairingStoppedWithError:(id)arg1;
- (void)_resetPairingState;
- (double)backoffInterval;
- (id)cancelError;
- (void)cancelWithError:(id)arg1;
- (id)delegate;
- (id)description;
- (id)initWithPairSetupType:(unsigned long long)arg1;
- (bool)isInvalidSetupCode;
- (bool)pairSetupSession:(id)arg1 didPairWithPeer:(id)arg2 error:(id*)arg3;
- (bool)pairSetupSession:(id)arg1 didReceiveBackoffRequestWithTimeInterval:(double)arg2;
- (id)pairSetupSession:(id)arg1 didReceiveLocalPairingIdentityRequestWithError:(id*)arg2;
- (void)pairSetupSession:(id)arg1 didReceiveProductData:(id)arg2;
- (void)pairSetupSession:(id)arg1 didReceiveSetupCodeRequestWithCompletionHandler:(id /* block */)arg2;
- (void)pairSetupSession:(id)arg1 didReceiveSetupExchangeData:(id)arg2;
- (void)pairSetupSession:(id)arg1 didStopWithError:(id)arg2;
- (void)pairSetupSessionDidReceiveInvalidSetupCode:(id)arg1;
- (void)pairSetupSessionDidStart:(id)arg1;
- (unsigned long long)pairSetupType;
- (id)pairingSession;
- (void)runForPairingDriver:(id)arg1;
- (void)setBackoffInterval:(double)arg1;
- (void)setCancelError:(id)arg1;
- (void)setInvalidSetupCode:(bool)arg1;
- (void)setPairingSession:(id)arg1;
- (id)transport;

@end
