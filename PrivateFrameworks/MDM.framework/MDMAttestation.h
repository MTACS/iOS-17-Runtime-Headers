
@interface MDMAttestation : NSObject {
    NSArray * _certs;
    NSDate * _issued;
    struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; } * _key;
    NSData * _nonce;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_expirationForIssued:(id)arg1;
- (id)_requestAttestationCertChainAnonymous:(bool)arg1 nonce:(id)arg2 outError:(id*)arg3;
- (bool)_retrieveCerts:(id*)arg1 nonce:(id*)arg2 issued:(id*)arg3;
- (bool)_storeCerts:(id)arg1 nonce:(id)arg2 issued:(id)arg3 outError:(id*)arg4;
- (id)attestationCertificateChainAnonymous:(bool)arg1 nonce:(id)arg2 outError:(id*)arg3;
- (struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)attestationKey:(bool)arg1 outError:(id*)arg2;
- (id)initPrivate;
- (void)reset;

@end
