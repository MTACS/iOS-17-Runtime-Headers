
@interface SGMailClientUtil : NSObject {
    ECDKIMVerifier * _dkimVerifier;
    EMDaemonInterface * _emailDaemon;
}

@property (nonatomic, readonly) ECDKIMVerifier *dkimVerifier;
@property (nonatomic, readonly) EMDaemonInterface *emailDaemon;

+ (id)convertLineEndingsToNetwork:(id)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_init;
- (id)allVIPEmailAddresses;
- (id)dataForMessageWithIdentifier:(id)arg1 error:(id*)arg2;
- (id)dkimVerifier;
- (id)emailDaemon;
- (bool)isMessageAvailable:(id)arg1;
- (id)messageWithIdentifier:(id)arg1 error:(id*)arg2;
- (id)signaturesToRemoveForDKIMVerificationContext:(id)arg1 withFromHeaderDomain:(id)arg2;
- (long long)verifyDKIMSignatureForMailWithData:(id)arg1 error:(id*)arg2;
- (long long)verifyDKIMSignatureForMailWithData:(id)arg1 options:(long long)arg2 error:(id*)arg3;
- (long long)verifyDKIMSignatureForMailWithIdentifier:(id)arg1 error:(id*)arg2;
- (long long)verifyDKIMSignatureForPipelineEntity:(id)arg1 error:(id*)arg2;
- (long long)verifyDKIMSignatureForStorageEvent:(id)arg1 error:(id*)arg2;

@end
