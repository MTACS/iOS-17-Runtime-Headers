
@interface HDEncryptedArchiveSymmetricKey : NSObject <HDEncryptedArchiveKey, NSCopying, NSSecureCoding> {
    NSData * _key;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool symmetric;

+ (id)fetchFromKeychainForLabel:(id)arg1 error:(id*)arg2;
+ (id)randomKeyWithError:(id*)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)addToKeychainWithLabel:(id)arg1 error:(id*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)deleteFromKeychainWithLabel:(id)arg1 error:(id*)arg2;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)keyDataForDecryptionWithError:(id*)arg1;
- (id)keyDataForEncryptionWithError:(id*)arg1;
- (bool)symmetric;

@end
