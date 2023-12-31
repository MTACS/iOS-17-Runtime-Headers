
@interface CRKGenerateIdentityResultObject : CATTaskResultObject {
    NSData * _certificateData;
    NSData * _privateKeyData;
}

@property (nonatomic, copy) NSData *certificateData;
@property (nonatomic, copy) NSData *privateKeyData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)certificateData;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)privateKeyData;
- (void)setCertificateData:(id)arg1;
- (void)setPrivateKeyData:(id)arg1;

@end
