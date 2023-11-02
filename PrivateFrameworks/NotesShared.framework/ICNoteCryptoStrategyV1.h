
@interface ICNoteCryptoStrategyV1 : ICCloudSyncingObjectCryptoStrategyV1 <ICNoteCryptoStrategy>

@property (nonatomic, readonly) bool canAuthenticate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasPassphraseSet;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long intrinsicNotesVersion;
@property (nonatomic, readonly) bool isAuthenticated;
@property (nonatomic, readonly, copy) NSString *passphraseHint;
@property (readonly) Class superclass;

- (void)correctCryptoTagAndIVIfNecessary;
- (void)decrypt;
- (id)decryptNotePrimitiveData;
- (id)decryptTextDataOrSaveAsUnappliedRecordIfNotAuthenticated:(id)arg1;
- (bool)mainKeyDecryptsPrimaryData:(id)arg1;
- (void)mergeEncryptedData:(id)arg1 mergeConflict:(id)arg2;
- (void)mergeEncryptedDataFromRecord:(id)arg1;
- (void)recoverMissingCryptoWrappedKeyIfNeededWithMainKey:(id)arg1;
- (bool)rewrapWithMainKey:(id)arg1;
- (id)unwrappedKey;
- (void)writeEncryptedNoteData:(id)arg1;

@end
