
@interface ICEncryptionObject : NSObject <NSCopying, NSSecureCoding> {
    NSData * _encryptedData;
    ICEncryptionMetadata * _metadata;
    NSData * _wrappedEncryptionKey;
}

@property (nonatomic, readonly) NSData *encryptedData;
@property (nonatomic, readonly) ICEncryptionMetadata *metadata;
@property (nonatomic, readonly) NSData *wrappedEncryptionKey;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)encryptedData;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithMetadata:(id)arg1 wrappedEncryptionKey:(id)arg2 encryptedData:(id)arg3;
- (id)initWithSerializedData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)metadata;
- (id)serialized;
- (bool)validate;
- (id)wrappedEncryptionKey;

@end
