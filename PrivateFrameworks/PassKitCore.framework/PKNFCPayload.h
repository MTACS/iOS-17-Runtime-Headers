
@interface PKNFCPayload : NSObject <NSCopying, NSSecureCoding> {
    NSData * _encryptionPublicKeyData;
    NSString * _message;
    unsigned long long  _payloadState;
    bool  _requiresAuthentication;
}

@property (nonatomic, copy) NSData *encryptionPublicKeyData;
@property (nonatomic, copy) NSString *message;
@property (nonatomic) unsigned long long payloadState;
@property (nonatomic) bool requiresAuthentication;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)encryptionPublicKeyData;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithNFCDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPKNFCPayload:(id)arg1;
- (id)message;
- (unsigned long long)payloadState;
- (bool)requiresAuthentication;
- (void)setEncryptionPublicKeyData:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setPayloadState:(unsigned long long)arg1;
- (void)setRequiresAuthentication:(bool)arg1;

@end
