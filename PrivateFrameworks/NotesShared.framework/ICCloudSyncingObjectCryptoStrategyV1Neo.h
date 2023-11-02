
@interface ICCloudSyncingObjectCryptoStrategyV1Neo : ICCryptoStrategyBase <ICCloudSyncingObjectCryptoStrategy>

@property (nonatomic, readonly) bool canAuthenticate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) ICEncryptionKey *fallbackSidecarMainKey;
@property (nonatomic, readonly) bool hasPassphraseSet;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long intrinsicNotesVersion;
@property (nonatomic, readonly) bool isAuthenticated;
@property (nonatomic, readonly, copy) NSString *passphraseHint;
@property (nonatomic, readonly) ICEncryptionObject *primaryEncryptionObject;
@property (nonatomic, readonly, copy) ICEncryptionKey *sidecarMainKey;
@property (readonly) Class superclass;

- (bool)authenticateWithPassphrase:(id)arg1;
- (bool)canAuthenticate;
- (id)decryptData:(id)arg1;
- (id)decryptObject:(id)arg1 encryptionKey:(id)arg2 mainKey:(id)arg3;
- (id)decryptSidecarData:(id)arg1;
- (id)decryptedDataFromFileURL:(id)arg1;
- (id)encryptData:(id)arg1;
- (id)encryptData:(id)arg1 encryptionKey:(id)arg2 mainKey:(id)arg3;
- (bool)encryptFileFromURL:(id)arg1 toURL:(id)arg2;
- (id)encryptSidecarData:(id)arg1;
- (bool)encryptSidecarFileFromURL:(id)arg1 toURL:(id)arg2;
- (id)encryptedData:(id)arg1 rewrappedWithMainKey:(id)arg2;
- (id)fallbackSidecarMainKey;
- (bool)hasPassphraseSet;
- (void)initializeCryptoPropertiesFromObject:(id)arg1;
- (long long)intrinsicNotesVersion;
- (bool)isAuthenticated;
- (bool)isPassphraseCorrect:(id)arg1;
- (bool)isRecordAuthenticated:(id)arg1;
- (bool)loadDecryptedValuesIfNecessary;
- (bool)mainKeyDecryptsPrimaryData:(id)arg1;
- (id)mainKeyForPassphrase:(id)arg1;
- (void)mergeEncryptedDataFromRecord:(id)arg1;
- (id)passphraseHint;
- (id)primaryEncryptionObject;
- (bool)recordHasChangedPassphrase:(id)arg1;
- (bool)rewrapDataAtURL:(id)arg1 withMainKey:(id)arg2;
- (bool)rewrapFile:(id /* block */)arg1 withMainKey:(id)arg2 generationManager:(id)arg3;
- (bool)rewrapWithMainKey:(id)arg1;
- (bool)saveEncryptedJSON;
- (bool)serialize:(id)arg1 toURL:(id)arg2;
- (id)sidecarMainKey;
- (id)sidecarMainKeyCreateIfNeeded;

@end
