
@interface STSDiffieHellmanParameter : NSObject <NSSecureCoding> {
    NSData * _publicKey;
    unsigned long long  _publicKeyGroup;
}

@property (nonatomic, retain) NSData *publicKey;
@property (nonatomic) unsigned long long publicKeyGroup;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)asData;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeyGroup:(unsigned long long)arg1 key:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)publicKey;
- (unsigned long long)publicKeyGroup;
- (void)setPublicKey:(id)arg1;
- (void)setPublicKeyGroup:(unsigned long long)arg1;

@end
