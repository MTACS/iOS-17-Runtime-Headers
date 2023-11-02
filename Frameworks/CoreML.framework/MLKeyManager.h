
@interface MLKeyManager : NSObject

+ (id)createPersistentKeyBlobForKeyID:(id)arg1 usesCodeSigningIdentityForEncryption:(bool)arg2 error:(id*)arg3;
+ (id)decryptSessionForModelAtURL:(id)arg1 error:(id*)arg2;
+ (id)extractKeyIdentifierFromModelAtURL:(id)arg1 usesCodeSigningIdentityForEncryption:(bool*)arg2 error:(id*)arg3;
+ (bool)isModelEncrypted:(id)arg1;
+ (id)loadDecryptionKeyForModelAtURL:(id)arg1 retUsesCodeSigningIdentityForEncryption:(bool*)arg2 error:(id*)arg3;
+ (id)syncQueue;

@end
