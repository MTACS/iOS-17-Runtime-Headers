
@interface ICInlineAttachment : ICBaseAttachment <ICCloudObject> {
    bool  _animateInsertion;
}

@property (nonatomic, copy) NSString *altText;
@property (nonatomic) bool animateInsertion;
@property (nonatomic, readonly) short attachmentType;
@property (nonatomic, copy) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *displayText;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isHashtagAttachment;
@property (nonatomic, readonly) bool isInICloudAccount;
@property (nonatomic, readonly) bool isLinkAttachment;
@property (nonatomic, readonly) bool isMentionAttachment;
@property (nonatomic, readonly) bool isValidObject;
@property (nonatomic, readonly, copy) NSString *loggingDescription;
@property (nonatomic) int mentionNotificationAttemptCount;
@property (nonatomic) int mentionNotificationState;
@property (nonatomic, readonly) bool needsToBeDeletedFromCloud;
@property (nonatomic, readonly) bool needsToBeFetchedFromCloud;
@property (nonatomic, readonly) bool needsToBePushedToCloud;
@property (nonatomic, readonly) bool needsToSaveUserSpecificRecord;
@property (nonatomic, readonly) NSManagedObjectID *objectID;
@property (nonatomic, readonly, copy) CKRecordID *recordID;
@property (nonatomic, readonly, copy) NSString *recordType;
@property (nonatomic, readonly) NSAttributedString *searchableTextContentInNote;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *tokenContentIdentifier;
@property (nonatomic, readonly) ICInlineAttachmentUIModel *uiModel;
@property (nonatomic, readonly, copy) CKRecordID *userSpecificRecordID;
@property (nonatomic, readonly, retain) CKRecord *userSpecificServerRecord;
@property (nonatomic, readonly) bool wantsUserSpecificRecord;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

+ (id)canonicalHashtagAttachmentsInContext:(id)arg1;
+ (void)changeLinkDestinationFromNote:(id)arg1 toNote:(id)arg2;
+ (id)cloneInlineAttachmentWithIdentifier:(id)arg1 context:(id)arg2;
+ (unsigned long long)countOfNonTrashFolderVisibleInlineAttachmentsForHashtagStandardizedContent:(id)arg1 account:(id)arg2;
+ (unsigned long long)countOfVisibleInlineAttachmentsForHashtagStandardizedContent:(id)arg1 account:(id)arg2;
+ (unsigned long long)countOfVisibleInlineAttachmentsForHashtagStandardizedContent:(id)arg1 includingTrash:(bool)arg2 account:(id)arg3;
+ (void)enumerateInlineAttachmentsInContext:(id)arg1 typeUTI:(id)arg2 tokenContentIdentifier:(id)arg3 batchSize:(unsigned long long)arg4 visibleOnly:(bool)arg5 saveAfterBatch:(bool)arg6 usingBlock:(id /* block */)arg7;
+ (void)enumerateLinksToNote:(id)arg1 batchSize:(unsigned long long)arg2 visibleOnly:(bool)arg3 saveAfterBatch:(bool)arg4 context:(id)arg5 usingBlock:(id /* block */)arg6;
+ (id)existingCloudObjectForRecordID:(id)arg1 accountID:(id)arg2 context:(id)arg3;
+ (id)existingInlineAttachmentWithTokenContentIdentifier:(id)arg1 typeUTI:(id)arg2 context:(id)arg3;
+ (bool)isHashtagStandardizedContent:(id)arg1 usedInAccount:(id)arg2;
+ (id)newAttachmentWithIdentifier:(id)arg1 typeUTI:(id)arg2 altText:(id)arg3 tokenContentIdentifier:(id)arg4 note:(id)arg5 parentAttachment:(id)arg6;
+ (id)newCloudObjectForRecord:(id)arg1 accountID:(id)arg2 context:(id)arg3;
+ (id)newHashtagAttachmentWithIdentifier:(id)arg1 forHashtag:(id)arg2 note:(id)arg3 parentAttachment:(id)arg4;
+ (id)newHashtagAttachmentWithIdentifier:(id)arg1 hashtagText:(id)arg2 creatingHashtagIfNecessary:(bool)arg3 note:(id)arg4 parentAttachment:(id)arg5;
+ (id)newLinkAttachmentWithIdentifier:(id)arg1 toNote:(id)arg2 fromNote:(id)arg3 parentAttachment:(id)arg4;
+ (id)newMentionAttachmentWithIdentifier:(id)arg1 mentionText:(id)arg2 userRecordName:(id)arg3 note:(id)arg4 parentAttachment:(id)arg5;
+ (id)noteFromAttachmentRecord:(id)arg1 accountID:(id)arg2 context:(id)arg3;
+ (id)predicateForMentionsInContext:(id)arg1;
+ (id)predicateForTokenContentIdentifier:(id)arg1;
+ (id)predicateForTypeUTI:(id)arg1;
+ (id)predicateForUnsupportedAttachmentsInContext:(id)arg1;
+ (void)purgeAttachment:(id)arg1;
+ (id)recentlyUsedDatesForHashtagsStandardizedContents:(id)arg1 context:(id)arg2;
+ (void)regenerateDerivedDataForInlineAttachments:(id)arg1 reason:(id)arg2;
+ (void)regenerateTokenContentIdentifierForHashtagAttachmentsInContext:(id)arg1 currentTokenContentIdentifier:(id)arg2 save:(bool)arg3;
+ (void)reviveOrTouchHashtag:(id)arg1;

- (id)altText;
- (bool)animateInsertion;
- (short)attachmentType;
- (id)clone;
- (void)deleteFromLocalDatabase;
- (id)displayText;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })displayTextRangeForSearchRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inSearchableString:(id)arg2;
- (id)fallbackDisplayText;
- (bool)hasAllMandatoryFields;
- (id)ic_loggingValues;
- (long long)intrinsicNotesVersionForScenario:(unsigned long long)arg1;
- (bool)isHashtagAttachment;
- (bool)isInICloudAccount;
- (bool)isLinkAttachment;
- (bool)isMentionAttachment;
- (void)loadFromArchive:(const void*)arg1 dataPersister:(id)arg2 withIdentifierMap:(id)arg3;
- (id)makeCloudKitRecordForApproach:(long long)arg1 mergeableFieldState:(id)arg2;
- (void)markForDeletion;
- (bool)mergeCloudKitRecord:(id)arg1 accountID:(id)arg2 approach:(long long)arg3 mergeableFieldState:(id)arg4;
- (id)nonNilAltText;
- (void)objectWasFetchedFromCloudWithRecord:(id)arg1 accountID:(id)arg2 force:(bool)arg3;
- (id)parentAttachmentFromRecord:(id)arg1 accountID:(id)arg2 context:(id)arg3;
- (id)parentEncryptableObject;
- (void)propagateDeletionToHashtagForMarkForDeletion:(bool)arg1;
- (id)recordType;
- (id)recordZoneName;
- (bool)saveToArchive:(void*)arg1 dataPersister:(id)arg2 error:(id*)arg3;
- (id)searchableTextContentInNote;
- (void)setAltText:(id)arg1;
- (void)setAnimateInsertion:(bool)arg1;
- (void)setTokenContentIdentifier:(id)arg1;
- (bool)shouldSyncMinimumSupportedNotesVersion;
- (bool)supportsDeletionByTTL;
- (bool)supportsEncryptedValuesDictionary;
- (id)tokenContentIdentifier;
- (void)unmarkForDeletion;
- (void)updateMarkedForDeletionStateInlineAttachmentIsInUse:(bool)arg1;
- (void)writeMergeableFieldStateIfNecessary:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NotesEditor.framework/NotesEditor

- (void)textFindingResultsMatchingString:(id)arg1 ignoreCase:(bool)arg2 wholeWords:(bool)arg3 completion:(id /* block */)arg4;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

+ (bool)canInsertInlineAttachmentType:(short)arg1 intoNote:(id)arg2 parentAttachment:(id)arg3;
+ (id)createHashtagAttachmentIfApplicableWithHashtagText:(id)arg1 creatingHashtagIfNecessary:(bool)arg2 note:(id)arg3 parentAttachment:(id)arg4;
+ (id)createHashtagAttachmentIfApplicableWithHashtagText:(id)arg1 forHashtag:(id)arg2 note:(id)arg3 parentAttachment:(id)arg4;
+ (id)createInlineAttachmentIfApplicableWithTypeUTI:(id)arg1 altText:(id)arg2 tokenContentIdentifier:(id)arg3 note:(id)arg4 parentAttachment:(id)arg5;
+ (id)createMentionAttachmentIfApplicableWithMentionText:(id)arg1 userRecordName:(id)arg2 note:(id)arg3 parentAttachment:(id)arg4;
+ (id)newLinkAttachmentToNote:(id)arg1 fromNote:(id)arg2 parentAttachment:(id)arg3;

- (void)_announceAttachmentChangeWithString:(id)arg1;
- (bool)_checkIsVoiceOverRunning;
- (void)accessibilityAnnounceCreationWithVoiceOver;
- (void)accessibilityAnnounceDeletionWithVoiceOver;
- (id)uiModel;

@end
