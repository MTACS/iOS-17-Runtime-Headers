
@interface WBSHashGenerator : NSObject <NSCopying, NSSecureCoding> {
    NSData * _key;
    NSData * _keyID;
}

@property (nonatomic, readonly, copy) NSData *key;
@property (nonatomic, readonly, copy) NSData *keyID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_createEncryptionKeyData;
- (id)_createEncryptionKeyIDDataUsingKey:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)generateHashStringWithComponents:(id)arg1;
- (id)generateHashWithComponents:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithKey:(id)arg1 keyID:(id)arg2;
- (id)key;
- (id)keyID;

@end
