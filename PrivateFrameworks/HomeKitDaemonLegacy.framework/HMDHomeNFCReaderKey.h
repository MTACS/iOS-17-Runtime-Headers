
@interface HMDHomeNFCReaderKey : HMFObject <NSCopying, NSSecureCoding> {
    NSData * _identifier;
    NSData * _privateKey;
    NSData * _publicKeyExternalRepresentation;
}

@property (readonly, copy) NSData *externalRepresentation;
@property (readonly, copy) NSData *identifier;
@property (readonly, copy) NSData *privateKey;
@property (readonly, copy) NSData *publicKey;
@property (readonly, copy) NSData *publicKeyExternalRepresentation;

+ (id)createRandomKey;
+ (id)createWithExternalRepresentation:(id)arg1;
+ (id)createWithKeychainItem:(id)arg1;
+ (id)identifierForKey:(id)arg1;
+ (id)keychainItemAccountAttributeValueWithHome:(id)arg1 keyIdentifier:(id)arg2;
+ (id)publicKeyWithPublicKeyExternalRepresentation:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createKeychainItemForHome:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)externalRepresentation;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 privateKey:(id)arg2 publicKeyExternalRepresentation:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)privateKey;
- (id)publicKey;
- (id)publicKeyExternalRepresentation;

@end
