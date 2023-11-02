
@interface ICAccountCryptoStrategyProxy : ICCryptoStrategyBase <ICAccountCryptoStrategy> {
    ICAccountCryptoStrategyV1Neo * _v1NeoStrategy;
    ICAccountCryptoStrategyV1 * _v1Strategy;
    ICAccountCryptoStrategyV2 * _v2Strategy;
}

@property (nonatomic, readonly) bool canAuthenticate;
@property (nonatomic, readonly) <ICAccountCryptoStrategy> *customPasswordStrategy;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <ICAccountCryptoStrategy> *devicePasswordStrategy;
@property (nonatomic, readonly) bool hasPassphraseSet;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long intrinsicNotesVersion;
@property (nonatomic, readonly) bool isAuthenticated;
@property (nonatomic, readonly, copy) NSString *passphraseHint;
@property (readonly) Class superclass;
@property (nonatomic, readonly) ICAccountCryptoStrategyV1Neo *v1NeoStrategy;
@property (nonatomic, readonly) ICAccountCryptoStrategyV1 *v1Strategy;
@property (nonatomic, readonly) ICAccountCryptoStrategyV2 *v2Strategy;

- (void).cxx_destruct;
- (bool)authenticateWithPassphrase:(id)arg1;
- (bool)canAuthenticate;
- (id)currentStrategy;
- (id)customPasswordStrategy;
- (id)decryptData:(id)arg1;
- (id)decryptSidecarData:(id)arg1;
- (id)decryptedDataFromFileURL:(id)arg1;
- (id)devicePasswordStrategy;
- (id)encryptData:(id)arg1;
- (bool)encryptFileFromURL:(id)arg1 toURL:(id)arg2;
- (id)encryptSidecarData:(id)arg1;
- (bool)encryptSidecarFileFromURL:(id)arg1 toURL:(id)arg2;
- (id)encryptedData:(id)arg1 rewrappedWithMainKey:(id)arg2;
- (bool)hasPassphraseSet;
- (bool)hasSamePassphraseForObject:(id)arg1;
- (id)initWithCloudSyncingObject:(id)arg1;
- (void)initializeCryptoPropertiesFromObject:(id)arg1;
- (long long)intrinsicNotesVersion;
- (bool)isAuthenticated;
- (bool)isPassphraseCorrect:(id)arg1;
- (bool)loadDecryptedValuesIfNecessary;
- (bool)mainKeyDecryptsPrimaryData:(id)arg1;
- (id)mainKeyForPassphrase:(id)arg1;
- (void)mergeEncryptedDataFromRecord:(id)arg1;
- (id)passphraseHint;
- (bool)recordHasChangedPassphrase:(id)arg1;
- (void)removePassphrase;
- (bool)rewrapDataAtURL:(id)arg1 withMainKey:(id)arg2;
- (bool)rewrapWithMainKey:(id)arg1;
- (bool)saveEncryptedJSON;
- (bool)serialize:(id)arg1 toURL:(id)arg2;
- (bool)setPassphrase:(id)arg1 hint:(id)arg2;
- (id)v1NeoStrategy;
- (id)v1Strategy;
- (id)v2Strategy;

@end
