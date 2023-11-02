
@interface STSHandler : NSObject {
    STSCredential * _activeSTSCredential;
    NSData * _handoffToken;
    STSHardwareManagerWrapper * _nfHwManager;
    <NFSession> * _startedNFSession;
}

@property (nonatomic, readonly) STSCredential *activeSTSCredential;
@property (nonatomic, retain) NSData *handoffToken;
@property (nonatomic, retain) STSHardwareManagerWrapper *nfHwManager;
@property (nonatomic, retain) <NFSession> *startedNFSession;
@property (nonatomic, readonly) unsigned char supportedCredentialType;

- (void).cxx_destruct;
- (void)_tearDown;
- (bool)activateChildSessionOnSetActiveCredential;
- (id)activateWithHandoffToken:(id)arg1;
- (id)activeSTSCredential;
- (id)handoffToken;
- (id)nfHardwareManager;
- (id)nfHwManager;
- (id)setActiveCredential:(id)arg1;
- (void)setHandoffToken:(id)arg1;
- (void)setNfHwManager:(id)arg1;
- (void)setStartedNFSession:(id)arg1;
- (id)startNFSessionWithCompletion:(id /* block */)arg1;
- (id)startedNFSession;
- (unsigned char)supportedCredentialType;
- (void)tearDownWithCompletion:(id /* block */)arg1;

@end
