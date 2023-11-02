
@interface ASTAuthInfoResult : ASTSealablePayload {
    NSData * _attestation;
    NSData * _cert;
    long long  _error;
    long long  _type;
}

@property (nonatomic, retain) NSData *attestation;
@property (nonatomic, retain) NSData *cert;
@property (nonatomic) long long error;
@property (nonatomic) long long type;

+ (id)authInfoResultWithAttestation:(id)arg1;
+ (id)authInfoResultWithAttestation:(id)arg1 certificate:(id)arg2 type:(long long)arg3 error:(long long)arg4;
+ (id)sealedAuthInfoResultWithPayload:(id)arg1 signature:(id)arg2;

- (void).cxx_destruct;
- (id)attestation;
- (id)cert;
- (long long)error;
- (id)generatePayload;
- (void)setAttestation:(id)arg1;
- (void)setCert:(id)arg1;
- (void)setError:(long long)arg1;
- (void)setType:(long long)arg1;
- (long long)type;

@end
