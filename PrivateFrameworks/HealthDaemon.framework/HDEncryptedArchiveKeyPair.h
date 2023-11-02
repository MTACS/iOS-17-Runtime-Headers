
@interface HDEncryptedArchiveKeyPair : NSObject <HDEncryptedArchiveKey> {
    struct __SecKey { } * _fullKey;
    struct __SecKey { } * _publicKey;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool symmetric;

+ (id)fetchFromKeychainForLabel:(id)arg1 includePrivate:(bool)arg2 error:(id*)arg3;
+ (id)randomKeyPairWithError:(id*)arg1;

- (bool)_deleteFromKeychainWithLabel:(id)arg1 public:(bool)arg2 error:(id*)arg3;
- (bool)addToKeychainWithLabel:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (bool)deleteFromKeychainWithLabel:(id)arg1 error:(id*)arg2;
- (id)initWithPublicSecKey:(struct __SecKey { }*)arg1;
- (id)initWithSecKey:(struct __SecKey { }*)arg1;
- (id)keyDataForDecryptionWithError:(id*)arg1;
- (id)keyDataForEncryptionWithError:(id*)arg1;
- (bool)symmetric;

@end
