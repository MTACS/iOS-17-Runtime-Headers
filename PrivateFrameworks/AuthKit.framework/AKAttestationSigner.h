
@interface AKAttestationSigner : NSObject {
    NSObject<OS_dispatch_queue> * _attestationQueue;
}

+ (id)sharedSigner;

- (void).cxx_destruct;
- (id)_attestationWithCertificates:(id)arg1 error:(id*)arg2;
- (void)_baaSignatureForData:(id)arg1 completion:(id /* block */)arg2;
- (void)_baaSignaturesForData:(id)arg1 completion:(id /* block */)arg2;
- (id)_signatureForData:(id)arg1 withReferenceKey:(struct __SecKey { }*)arg2 error:(id*)arg3;
- (id)init;
- (void)signatureForData:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (void)signaturesForData:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;

@end
