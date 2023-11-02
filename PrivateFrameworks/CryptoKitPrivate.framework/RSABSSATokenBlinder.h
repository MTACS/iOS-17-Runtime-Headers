
@interface RSABSSATokenBlinder : NSObject {
    const struct ccrsabssa_ciphersuite { } * _ciphersuite;
    unsigned long long  _ciphersuiteModulusByteCount;
    NSData * _keyId;
    struct ccrsa_pub_ctx { 
        unsigned long long pb_n; 
        unsigned long long pb_bitlen; 
        struct cczp_funcs {} *pb_funcs; 
        unsigned long long pb_ccn[0]; 
    }  _publicKey;
}

@property (nonatomic, readonly, retain) NSData *keyId;

+ (id)keyIDFromSPKI:(id)arg1;

- (void).cxx_destruct;
- (id)initWithPublicKey:(id)arg1 error:(id*)arg2;
- (id)keyId;
- (struct ccrsa_pub_ctx { unsigned long long x1; unsigned long long x2; struct cczp_funcs {} *x3; unsigned long long x4[0]; }*)publicKey;
- (bool)setParamsForSize:(unsigned long long)arg1 params:(id)arg2 error:(id*)arg3;
- (id)tokenWaitingActivationWithContent:(id)arg1 error:(id*)arg2;
- (bool)verifyFullyParsedASN1:(const char *)arg1 end:(const char *)arg2 error:(id*)arg3;

@end
