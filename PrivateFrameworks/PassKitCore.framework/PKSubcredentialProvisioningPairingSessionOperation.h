
@interface PKSubcredentialProvisioningPairingSessionOperation : PKSubcredentialProvisioningSessionOperation <PKAppletSubcredentialPairingSessionDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)appletSubcredentialPairingSession:(id)arg1 didEndPairingWithError:(id)arg2;
- (void)appletSubcredentialPairingSession:(id)arg1 didEndPairingWithSubcredential:(id)arg2 registrationData:(id)arg3;
- (void)appletSubcredentialPairingSession:(id)arg1 didFinishPreWarmWithResult:(id)arg2;
- (void)appletSubcredentialPairingSession:(id)arg1 didFinishProbingTerminalWithError:(id)arg2 brandCode:(unsigned long long)arg3;
- (void)appletSubcredentialPairingSessionDidBeginPairing:(id)arg1;
- (void)appletSubcredentialPairingSessionDidFirstTransaction:(id)arg1 withError:(id)arg2;
- (id)initWithConfiguration:(id)arg1 context:(id)arg2 delegate:(id)arg3;
- (id)pairingSession;

@end
