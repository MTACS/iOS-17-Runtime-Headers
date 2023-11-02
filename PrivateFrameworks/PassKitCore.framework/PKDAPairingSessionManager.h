
@interface PKDAPairingSessionManager : PKDASessionManager <PKAppletSubcredentialPairingSessionDelegate> {
    id /* block */  _prewarmCompletion;
    NSMutableArray * _probingCompletionBlocks;
    bool  _probingTerminalPairingStatus;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ prewarmCompletion;
@property (nonatomic, readonly) NSMutableArray *probingCompletionBlocks;
@property (getter=isProbingTerminalPairingStatus, nonatomic) bool probingTerminalPairingStatus;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)appletSubcredentialPairingSession:(id)arg1 didEndPairingWithError:(id)arg2;
- (void)appletSubcredentialPairingSession:(id)arg1 didEndPairingWithSubcredential:(id)arg2 registrationData:(id)arg3;
- (void)appletSubcredentialPairingSession:(id)arg1 didFinishPreWarmWithResult:(id)arg2;
- (void)appletSubcredentialPairingSession:(id)arg1 didFinishProbingTerminalWithError:(id)arg2 brandCode:(unsigned long long)arg3;
- (void)appletSubcredentialPairingSessionDidBeginPairing:(id)arg1;
- (void)appletSubcredentialPairingSessionDidFirstTransaction:(id)arg1 withError:(id)arg2;
- (id)initWithQueue:(id)arg1 sessionCreationBlock:(id /* block */)arg2;
- (bool)isProbingTerminalPairingStatus;
- (id /* block */)prewarmCompletion;
- (id)probingCompletionBlocks;
- (void)setPrewarmCompletion:(id /* block */)arg1;
- (void)setProbingTerminalPairingStatus:(bool)arg1;

@end
