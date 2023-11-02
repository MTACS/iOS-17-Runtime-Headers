
@interface ICCloudSyncingObjectCryptoStrategyV1 : ICCryptoStrategyBase <ICCloudSyncingObjectCryptoStrategy>

@property (nonatomic, readonly) bool canAuthenticate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSData *fileURLEncryptionCryptoInitialzationVector;
@property (readonly) NSData *fileURLEncryptionCryptoTag;
@property (nonatomic, readonly) bool hasPassphraseSet;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long intrinsicNotesVersion;
@property (nonatomic, readonly) bool isAuthenticated;
@property (nonatomic, readonly, copy) NSString *passphraseHint;
@property (readonly) Class superclass;

+ (id)decryptWithMainKeyOfObject:(id)arg1 decryptable:(id)arg2 fallbackAttemptSuccessCleanupHandler:(id /* block */)arg3;
+ (id)decryptWithMainKeyOfObject:(id)arg1 decryptablePreparationBlock:(id /* block */)arg2 fallbackAttemptSuccessCleanupHandler:(id /* block */)arg3;
+ (void)encryptWithMainKeyOfObject:(id)arg1 dataPreparationBlock:(id /* block */)arg2 failureHandler:(id /* block */)arg3 successHandler:(id /* block */)arg4;
+ (void)encryptWithMainKeyOfObject:(id)arg1 dataToEncrypt:(id)arg2 failureHandler:(id /* block */)arg3 successHandler:(id /* block */)arg4;

- (bool)authenticateWithPassphrase:(id)arg1;
- (bool)canAuthenticate;
- (bool)canMainKey:(id)arg1 decryptObject:(id)arg2;
- (void)decryptAndMergeEncryptedJSON:(id)arg1;
- (id)decryptData:(id)arg1;
- (id)decryptSidecarData:(id)arg1;
- (id)decryptedDataFromFileURL:(id)arg1;
- (bool)encryptFileFromURL:(id)arg1 toURL:(id)arg2;
- (bool)encryptFileFromURL:(id)arg1 toURL:(id)arg2 setTagAndIVHandler:(id /* block */)arg3;
- (id)encryptSidecarData:(id)arg1;
- (bool)encryptSidecarFileFromURL:(id)arg1 toURL:(id)arg2;
- (id)encryptedData:(id)arg1 rewrappedWithMainKey:(id)arg2;
- (id)fileURLEncryptionCryptoInitialzationVector;
- (id)fileURLEncryptionCryptoTag;
- (bool)hasPassphraseSet;
- (void)initializeCryptoPropertiesFromObject:(id)arg1;
- (long long)intrinsicNotesVersion;
- (bool)isAuthenticated;
- (bool)isPassphraseCorrect:(id)arg1;
- (bool)loadDecryptedValuesIfNecessary;
- (bool)mainKeyDecryptsPrimaryData:(id)arg1;
- (id)mainKeyForPassphrase:(id)arg1;
- (void)mergeEncryptedDataFromRecord:(id)arg1;
- (id)newWrappedKeyData;
- (id)passphraseHint;
- (bool)recordHasChangedPassphrase:(id)arg1;
- (void)rewrapAndDivergeKeyUsingPassphrase:(id)arg1;
- (bool)rewrapDataAtURL:(id)arg1 withMainKey:(id)arg2;
- (void)rewrapKeyWithNewMainKey:(id)arg1 salt:(id)arg2 iterationCount:(unsigned long long)arg3 hint:(id)arg4;
- (bool)rewrapWithMainKey:(id)arg1;
- (bool)saveEncryptedJSON;
- (id)unwrappedKey;

@end
