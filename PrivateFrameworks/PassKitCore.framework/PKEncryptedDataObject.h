
@interface PKEncryptedDataObject : NSObject <NSSecureCoding> {
    NSData * _data;
    NSData * _ephemeralPublicKey;
    NSData * _publicKeyHash;
    unsigned long long  _version;
}

@property (nonatomic, copy) NSData *data;
@property (nonatomic, copy) NSData *ephemeralPublicKey;
@property (nonatomic, copy) NSData *publicKeyHash;
@property (nonatomic) unsigned long long version;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)asWebServiceDictionary;
- (id)data;
- (void)encodeWithCoder:(id)arg1;
- (id)ephemeralPublicKey;
- (id)initWithCoder:(id)arg1;
- (id)initWithWebServiceDictionary:(id)arg1;
- (id)publicKeyHash;
- (void)setData:(id)arg1;
- (void)setEphemeralPublicKey:(id)arg1;
- (void)setPublicKeyHash:(id)arg1;
- (void)setVersion:(unsigned long long)arg1;
- (unsigned long long)version;

@end
