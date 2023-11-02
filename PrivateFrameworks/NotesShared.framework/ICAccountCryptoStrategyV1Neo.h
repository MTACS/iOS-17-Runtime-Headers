
@interface ICAccountCryptoStrategyV1Neo : ICCloudSyncingObjectCryptoStrategyV1Neo <ICAccountCryptoStrategy>

@property (nonatomic, readonly) bool canAuthenticate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasPassphraseSet;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long intrinsicNotesVersion;
@property (nonatomic, readonly) bool isAuthenticated;
@property (nonatomic, readonly, copy) NSString *passphraseHint;
@property (nonatomic, readonly) ICEncryptionKey *passphraseVerifier;
@property (readonly) Class superclass;

- (bool)hasPassphraseSet;
- (bool)hasSamePassphraseForObject:(id)arg1;
- (bool)mainKeyDecryptsPrimaryData:(id)arg1;
- (id)mainKeyForPassphrase:(id)arg1;
- (id)passphraseHint;
- (id)passphraseVerifier;
- (void)removePassphrase;
- (bool)setPassphrase:(id)arg1 hint:(id)arg2;

@end
