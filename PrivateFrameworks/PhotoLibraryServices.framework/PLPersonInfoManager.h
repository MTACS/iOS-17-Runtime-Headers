
@interface PLPersonInfoManager : NSObject {
    PLLazyObject * _lazyAssetsdClient;
    PLPhotoLibraryPathManager * _pathManager;
    NSMutableDictionary * _personDictsForPersonID;
}

- (void).cxx_destruct;
- (void)_loadDictionariesIfNeeded;
- (id)assetsdClient;
- (void)clearCacheForPersonID:(id)arg1;
- (void)dealloc;
- (void)deleteEmailsAndPhonesForInvitationRecordGUID:(id)arg1;
- (id)emailForPersonID:(id)arg1;
- (id)emailsForInvitationRecordGUID:(id)arg1;
- (id)firstNameForPersonID:(id)arg1;
- (id)fullNameForPersonID:(id)arg1;
- (id)initWithPathManager:(id)arg1 lazyAssetsdClient:(id)arg2;
- (id)lastNameForPersonID:(id)arg1;
- (id)personInfoForPersonID:(id)arg1;
- (id)phonesForInvitationRecordGUID:(id)arg1;
- (id)plistPath;
- (void)removePersistedInfo;
- (void)setEmails:(id)arg1 phones:(id)arg2 forInvitationRecordGUID:(id)arg3;
- (void)setFirstName:(id)arg1 lastName:(id)arg2 fullName:(id)arg3 email:(id)arg4 forPersonID:(id)arg5;
- (void)setPersonInfo:(id)arg1 forPersonID:(id)arg2;

@end
