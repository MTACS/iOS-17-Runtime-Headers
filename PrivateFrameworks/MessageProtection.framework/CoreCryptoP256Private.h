
@interface CoreCryptoP256Private : NSObject <P256PrivateKeyProtocol> {
    struct ccec_full_ctx { struct ccec_cp {} *x1; struct ccec_projective_point { unsigned long long x_2_1_1[1]; } x2[0]; } * _full_key;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property struct ccec_full_ctx { struct ccec_cp {} *x1; struct ccec_projective_point { unsigned long long x_2_1_1[1]; } x2[0]; }*full_key;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)generate;

- (void)dealloc;
- (struct ccec_full_ctx { struct ccec_cp {} *x1; struct ccec_projective_point { unsigned long long x_2_1_1[1]; } x2[0]; }*)full_key;
- (id)initWithData:(id)arg1 error:(id*)arg2;
- (id)initWithKey:(struct ccec_full_ctx { struct ccec_cp {} *x1; struct ccec_projective_point { unsigned long long x_2_1_1[1]; } x2[0]; }*)arg1;
- (id)keyAgreement:(id)arg1 error:(id*)arg2;
- (id)keychainData;
- (id)publicKey;
- (void)setFull_key:(struct ccec_full_ctx { struct ccec_cp {} *x1; struct ccec_projective_point { unsigned long long x_2_1_1[1]; } x2[0]; }*)arg1;
- (id)signData:(id)arg1 error:(id*)arg2;

@end
