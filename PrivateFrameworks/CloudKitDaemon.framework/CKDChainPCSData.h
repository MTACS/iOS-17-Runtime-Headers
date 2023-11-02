
@interface CKDChainPCSData : CKDPCSData <NSSecureCoding> {
    CKEncryptedData * _encryptedChainPCSPrivateKey;
}

@property (nonatomic, retain) CKEncryptedData *encryptedChainPCSPrivateKey;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)encryptedChainPCSPrivateKey;
- (id)initWithCoder:(id)arg1;
- (id)initWithPCSData:(id)arg1 encryptedPrivateKey:(id)arg2;
- (void)setEncryptedChainPCSPrivateKey:(id)arg1;

@end
