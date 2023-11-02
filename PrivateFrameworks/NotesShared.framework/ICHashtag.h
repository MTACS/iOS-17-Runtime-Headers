
@interface ICHashtag : ICCloudSyncingObject <ICCloudObject>

@property (nonatomic, retain) ICAccount *account;
@property (nonatomic, copy) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *displayText;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isInICloudAccount;
@property (nonatomic, readonly) bool isValidObject;
@property (nonatomic, readonly, copy) NSString *loggingDescription;
@property (nonatomic, readonly) bool needsToBeDeletedFromCloud;
@property (nonatomic, readonly) bool needsToBeFetchedFromCloud;
@property (nonatomic, readonly) bool needsToBePushedToCloud;
@property (nonatomic, readonly) bool needsToSaveUserSpecificRecord;
@property (nonatomic, readonly) NSManagedObjectID *objectID;
@property (nonatomic, readonly, copy) CKRecordID *recordID;
@property (nonatomic, readonly, copy) NSString *recordType;
@property (nonatomic, copy) NSString *standardizedContent;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) CKRecordID *userSpecificRecordID;
@property (nonatomic, readonly, retain) CKRecord *userSpecificServerRecord;
@property (nonatomic, readonly) bool wantsUserSpecificRecord;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

+ (id)allVisibleHashtagsForAccount:(id)arg1;
+ (id)allVisibleHashtagsInContext:(id)arg1;
+ (id)canonicalHashtagsInContext:(id)arg1;
+ (void)dedupeHashtagsInAccount:(id)arg1;
+ (void)dedupeHashtagsInAccount:(id)arg1 atomicityExploitationCallback:(id /* block */)arg2;
+ (void)enumerateHashtagsInContext:(id)arg1 batchSize:(unsigned long long)arg2 saveAfterBatch:(bool)arg3 usingBlock:(id /* block */)arg4;
+ (id)existingCloudObjectForRecordID:(id)arg1 accountID:(id)arg2 context:(id)arg3;
+ (id)hashtagObjectIDWithStandardizedContent:(id)arg1 context:(id)arg2;
+ (id)hashtagObjectIDsWithStandardizedContents:(id)arg1 context:(id)arg2;
+ (id)hashtagWithDisplayText:(id)arg1 account:(id)arg2 createIfNecessary:(bool)arg3;
+ (id)hashtagWithIdentifier:(id)arg1 context:(id)arg2;
+ (id)hashtagWithStandardizedContent:(id)arg1 account:(id)arg2;
+ (id)hashtagWithStandardizedContent:(id)arg1 onlyVisible:(bool)arg2 account:(id)arg3;
+ (id)hashtagsWithStandardizedContent:(id)arg1 context:(id)arg2;
+ (id)hashtagsWithStandardizedContent:(id)arg1 onlyVisible:(bool)arg2 account:(id)arg3 context:(id)arg4;
+ (id)localizedSectionTitle;
+ (id)newCloudObjectForRecord:(id)arg1 accountID:(id)arg2 context:(id)arg3;
+ (id)newHashtagWithIdentifier:(id)arg1 displayText:(id)arg2 account:(id)arg3;
+ (id)predicateForHashtagWithStandardizedContent:(id)arg1 onlyVisible:(bool)arg2 account:(id)arg3;
+ (void)purgeHashtag:(id)arg1;
+ (bool)regenerateStandardizedContentForAllHashtagsInContext:(id)arg1 hasChanges:(bool*)arg2;
+ (id)renameHashtagsWithStandardizedContent:(id)arg1 newDisplayText:(id)arg2 context:(id)arg3;
+ (id)standardizedHashtagRepresentationForDisplayText:(id)arg1;

- (bool)canRenameTagWithNewDisplayText:(id)arg1;
- (id)cloudAccount;
- (void)deleteFromLocalDatabase;
- (id)ic_loggingValues;
- (bool)isInICloudAccount;
- (id)makeCloudKitRecordForApproach:(long long)arg1 mergeableFieldState:(id)arg2;
- (bool)mergeCloudKitRecord:(id)arg1 accountID:(id)arg2 approach:(long long)arg3 mergeableFieldState:(id)arg4;
- (id)recordType;
- (id)recordZoneName;
- (bool)shouldSyncMinimumSupportedNotesVersion;
- (bool)supportsDeletionByTTL;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

- (void)removeUsage;

@end
