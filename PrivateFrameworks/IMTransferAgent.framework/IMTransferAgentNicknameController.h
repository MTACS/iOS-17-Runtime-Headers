
@interface IMTransferAgentNicknameController : NSObject {
    CKContainer * _nickNameContainer;
}

@property (nonatomic, readonly) CKContainer *nickNameContainer;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_handleSaveNicknameError:(id)arg1 queue:(id)arg2 withCompletionBlock:(id /* block */)arg3;
- (id)_nickNameContainer;
- (id)_nickNameContainerIdentifier;
- (id)_nickNameFetchConfiguration;
- (id)_nickNamePublicDB;
- (id)_nickNameSaveConfiguration;
- (double)_retryIntervalForRetryCount:(unsigned long long)arg1;
- (bool)_serverSaysToUseOldContainer;
- (void)_updateEncryptedPersonalNicknameToPublicCloudKitDBSavingRecord:(id)arg1 wallpaperRecordToSave:(id)arg2 deletingRecordID:(id)arg3 queue:(id)arg4 withCompletionBlock:(id /* block */)arg5;
- (void)_updateEncryptedPersonalNicknameToPublicCloudKitDBSavingRecords:(id)arg1 deletingRecordIDs:(id)arg2 queue:(id)arg3 withCompletionBlock:(id /* block */)arg4;
- (void)cloudKitOperationWithRetryCount:(unsigned long long)arg1 queue:(id)arg2 withError:(id)arg3 operation:(id /* block */)arg4;
- (void)deleteAllPersonalNicknamesOnQueue:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)fetchAllNicknamesForCurrentUser:(id /* block */)arg1;
- (void)fetchCurrentUserForNicknameContainer:(id /* block */)arg1;
- (void)getNicknameWithRecordID:(id)arg1 decryptionKey:(id)arg2 wallpaperDataTag:(id)arg3 wallpaperLowResDataTag:(id)arg4 wallpaperMetadataTag:(id)arg5 knownSender:(bool)arg6 queue:(id)arg7 completionBlock:(id /* block */)arg8;
- (id)lockdownManager;
- (id)nickNameContainer;
- (id)nickNamePublicDatabase;
- (void)performCloudKitOperation:(id /* block */)arg1 queue:(id)arg2 withError:(id)arg3;
- (void)setPersonalNickname:(id)arg1 oldRecordID:(id)arg2 queue:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)setPersonalNicknameData:(id)arg1 oldRecordID:(id)arg2 queue:(id)arg3 completionBlock:(id /* block */)arg4;
- (bool)shouldUseDevNickNameContainer;

@end
