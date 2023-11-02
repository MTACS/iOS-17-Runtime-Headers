
@interface DCBAASigner : NSObject

+ (id)sharedSigner;

- (id)_attestationWithCertificates:(id)arg1 error:(id*)arg2;
- (id)_signatureForData:(id)arg1 withReferenceKey:(struct __SecKey { }*)arg2 error:(id*)arg3;
- (void)signatureForData:(id)arg1 completion:(id /* block */)arg2;
- (void)signaturesForData:(id)arg1 completion:(id /* block */)arg2;

@end
