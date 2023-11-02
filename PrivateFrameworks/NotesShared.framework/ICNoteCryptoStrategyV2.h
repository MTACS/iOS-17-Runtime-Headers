
@interface ICNoteCryptoStrategyV2 : ICCloudSyncingObjectCryptoStrategyV2 <ICNoteCryptoStrategy>

@property (nonatomic, readonly) bool canAuthenticate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasPassphraseSet;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long intrinsicNotesVersion;
@property (nonatomic, readonly) bool isAuthenticated;
@property (nonatomic, readonly, copy) NSString *passphraseHint;
@property (readonly) Class superclass;

- (void)decrypt;
- (id)decryptNotePrimitiveData;
- (id)decryptTextDataOrSaveAsUnappliedRecordIfNotAuthenticated:(id)arg1;
- (id)encryptedDataFromRecord:(id)arg1;
- (void)mergeEncryptedData:(id)arg1 mergeConflict:(id)arg2;
- (void)mergeEncryptedDataFromRecord:(id)arg1;
- (void)serializeToNoteDataAndUpdateArchivedAndLastViewedTimeStamps:(id)arg1;
- (void)writeEncryptedNoteData:(id)arg1;

@end
