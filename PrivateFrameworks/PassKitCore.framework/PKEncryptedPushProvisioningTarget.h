
@interface PKEncryptedPushProvisioningTarget : NSObject <NSCopying, NSSecureCoding> {
    NSData * _data;
    NSData * _ephemeralPublicKey;
    NSData * _publicKeyHash;
    NSString * _secondarySource;
    unsigned long long  _source;
    unsigned long long  _status;
    unsigned long long  _targetDevice;
    NSString * _verificationCode;
}

@property (nonatomic, copy) NSData *data;
@property (nonatomic, copy) NSData *ephemeralPublicKey;
@property (nonatomic, copy) NSData *publicKeyHash;
@property (nonatomic, retain) NSString *secondarySource;
@property (nonatomic) unsigned long long source;
@property (nonatomic) unsigned long long status;
@property (nonatomic) unsigned long long targetDevice;
@property (nonatomic, retain) NSString *verificationCode;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)asWebServiceDictionary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)ephemeralPublicKey;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToEncryptedProvisioningTarget:(id)arg1;
- (id)publicKeyHash;
- (id)secondarySource;
- (void)setData:(id)arg1;
- (void)setEphemeralPublicKey:(id)arg1;
- (void)setPublicKeyHash:(id)arg1;
- (void)setSecondarySource:(id)arg1;
- (void)setSource:(unsigned long long)arg1;
- (void)setStatus:(unsigned long long)arg1;
- (void)setTargetDevice:(unsigned long long)arg1;
- (void)setVerificationCode:(id)arg1;
- (unsigned long long)source;
- (unsigned long long)status;
- (unsigned long long)targetDevice;
- (id)verificationCode;

@end
