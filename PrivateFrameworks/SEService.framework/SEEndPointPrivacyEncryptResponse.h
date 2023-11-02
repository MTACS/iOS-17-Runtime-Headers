
@interface SEEndPointPrivacyEncryptResponse : NSObject <NSSecureCoding, SEEndPointPrivacyEncryptResponse> {
    NSData * _cipherText;
    NSData * _ephemeralPublicKeydata;
    NSData * _receiverPublicKeyHash;
    NSString * _version;
}

@property (nonatomic, retain) NSData *cipherText;
@property (nonatomic, retain) NSData *ephemeralPublicKeydata;
@property (nonatomic, retain) NSData *receiverPublicKeyHash;
@property (nonatomic, retain) NSString *version;

+ (id)responseWithCipherText:(id)arg1 ephemeralPublicKeyData:(id)arg2 receiverPublicKeyHash:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cipherText;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)ephemeralPublicKeydata;
- (id)initWithCoder:(id)arg1;
- (id)receiverPublicKeyHash;
- (void)setCipherText:(id)arg1;
- (void)setEphemeralPublicKeydata:(id)arg1;
- (void)setReceiverPublicKeyHash:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)version;

@end
