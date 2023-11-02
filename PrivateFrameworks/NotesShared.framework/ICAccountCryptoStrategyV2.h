
@interface ICAccountCryptoStrategyV2 : ICCloudSyncingObjectCryptoStrategyV2 <ICAccountCryptoStrategy>

@property (nonatomic, readonly) bool canAuthenticate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasPassphraseSet;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long intrinsicNotesVersion;
@property (nonatomic, readonly) bool isAuthenticated;
@property (nonatomic, readonly, copy) NSString *passphraseHint;
@property (readonly) Class superclass;

- (bool)hasPassphraseSet;
- (bool)hasSamePassphraseForObject:(id)arg1;
- (bool)isPassphraseCorrect:(id)arg1;
- (void)removePassphrase;
- (bool)setPassphrase:(id)arg1 hint:(id)arg2;

@end
