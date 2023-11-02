
@interface ICCloudSyncingObjectCryptoStrategyV2 : ICCryptoStrategyBase <ICCloudSyncingObjectCryptoStrategy>

@property (nonatomic, readonly) bool canAuthenticate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasPassphraseSet;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long intrinsicNotesVersion;
@property (nonatomic, readonly) bool isAuthenticated;
@property (nonatomic, readonly, copy) NSString *passphraseHint;
@property (readonly) Class superclass;

+ (id)accountKeyByIdentifier;

- (id)accountDsid;
- (id)accountIdentifier;
- (id)accountKeyWithIdentifier:(id)arg1 createIfNotExist:(bool)arg2;
- (bool)authenticateWithPassphrase:(id)arg1;
- (bool)canAuthenticate;
- (id)currentAccountKeyIdentifier;
- (void)decryptAndMergeEncryptedJSON:(id)arg1;
- (id)decryptData:(id)arg1;
- (id)decryptObject:(id)arg1;
- (id)decryptSidecarData:(id)arg1;
- (id)decryptedDataFromFileURL:(id)arg1;
- (id)encryptData:(id)arg1;
- (bool)encryptFileFromURL:(id)arg1 toURL:(id)arg2;
- (id)encryptSidecarData:(id)arg1;
- (bool)encryptSidecarFileFromURL:(id)arg1 toURL:(id)arg2;
- (id)encryptedData:(id)arg1 rewrappedWithMainKey:(id)arg2;
- (id)encryptedDataFromRecord:(id)arg1;
- (bool)hasPassphraseSet;
- (void)initializeCryptoPropertiesFromObject:(id)arg1;
- (long long)intrinsicNotesVersion;
- (bool)isAuthenticated;
- (bool)isAuthenticatedForBothObjectAndRecord:(id)arg1;
- (bool)isInICloudAccount;
- (bool)isPassphraseCorrect:(id)arg1;
- (bool)isRecordAuthenticated:(id)arg1;
- (bool)loadDecryptedValuesIfNecessary;
- (bool)mainKeyDecryptsPrimaryData:(id)arg1;
- (id)mainKeyForPassphrase:(id)arg1;
- (void)mergeEncryptedDataFromRecord:(id)arg1;
- (id)passphraseHint;
- (bool)recordHasChangedPassphrase:(id)arg1;
- (bool)rewrapDataAtURL:(id)arg1 withMainKey:(id)arg2;
- (bool)rewrapWithMainKey:(id)arg1;
- (bool)saveEncryptedJSON;
- (bool)serialize:(id)arg1 toURL:(id)arg2;
- (void)serializeToEncryptedValuesJSON:(id)arg1;
- (bool)shouldSpoofAccountKey;

@end
