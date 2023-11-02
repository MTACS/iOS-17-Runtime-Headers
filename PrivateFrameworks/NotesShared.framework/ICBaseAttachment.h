
@interface ICBaseAttachment : ICCloudSyncingObject

@property (nonatomic, retain) ICAccount *account;
@property (nonatomic, retain) ICNote *note;
@property (nonatomic, retain) ICAttachment *parentAttachment;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } rangeInNote;
@property (nonatomic, readonly) ICBaseAttachment *rootParentAttachment;
@property (nonatomic, copy) NSString *typeUTI;
@property (getter=isUsed, nonatomic, readonly) bool used;

+ (id)attachmentWithIdentifier:(id)arg1 context:(id)arg2;
+ (id)attachmentWithIdentifier:(id)arg1 includeDeleted:(bool)arg2 context:(id)arg3;
+ (id)attachmentsMatchingPredicate:(id)arg1 context:(id)arg2;
+ (void)deleteAttachment:(id)arg1;
+ (id)newAttachmentWithIdentifier:(id)arg1 note:(id)arg2;
+ (id)notDeletedPredicate;
+ (id)predicateForUnsupportedAttachmentsInContext:(id)arg1;
+ (id)predicateForVisibleAttachmentsInContext:(id)arg1;
+ (id)predicateForVisibleAttachmentsIncludingTrash:(bool)arg1 inContext:(id)arg2;
+ (id)predicateForVisibleAttachmentsIncludingTrashInContext:(id)arg1;
+ (id)predicateForVisibleObjects;
+ (void)purgeAttachment:(id)arg1;
+ (void)undeleteAttachment:(id)arg1;

- (id)cloudAccount;
- (bool)isUsed;
- (bool)isVisible;
- (id)parentCloudObject;
- (id)parentCloudObjectForMinimumSupportedVersionPropagation;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeInNote;
- (id)rootParentAttachment;
- (void)setParentAttachment:(id)arg1;

@end
