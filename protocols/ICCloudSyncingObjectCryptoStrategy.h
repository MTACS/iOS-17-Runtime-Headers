
@protocol ICCloudSyncingObjectCryptoStrategy <NSObject>

@required

- (bool)authenticateWithPassphrase:(NSString *)arg1;
- (bool)canAuthenticate;
- (NSData *)decryptSidecarData:(NSData *)arg1;
- (bool)encryptFileFromURL:(NSURL *)arg1 toURL:(NSURL *)arg2;
- (NSData *)encryptSidecarData:(NSData *)arg1;
- (bool)encryptSidecarFileFromURL:(NSURL *)arg1 toURL:(NSURL *)arg2;
- (NSData *)encryptedData:(NSData *)arg1 rewrappedWithMainKey:(ICEncryptionKey *)arg2;
- (bool)hasPassphraseSet;
- (void)initializeCryptoPropertiesFromObject:(ICCloudSyncingObject *)arg1;
- (long long)intrinsicNotesVersion;
- (void)invalidateStrategy;
- (bool)isAuthenticated;
- (bool)isPassphraseCorrect:(NSString *)arg1;
- (bool)loadDecryptedValuesIfNecessary;
- (bool)mainKeyDecryptsPrimaryData:(ICEncryptionKey *)arg1;
- (ICEncryptionKey *)mainKeyForPassphrase:(NSString *)arg1;
- (void)mergeEncryptedDataFromRecord:(CKRecord *)arg1;
- (NSString *)passphraseHint;
- (bool)recordHasChangedPassphrase:(CKRecord *)arg1;
- (bool)rewrapDataAtURL:(NSURL *)arg1 withMainKey:(ICEncryptionKey *)arg2;
- (bool)rewrapWithMainKey:(ICEncryptionKey *)arg1;
- (bool)saveEncryptedJSON;

@end
