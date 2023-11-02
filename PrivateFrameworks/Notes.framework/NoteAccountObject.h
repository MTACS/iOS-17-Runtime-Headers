
@interface NoteAccountObject : NoteCollectionObject <ICLegacyAccount> {
    NSDictionary * _constraints;
    NSNumber * _preventMovingNotesToOtherAccounts;
}

@property (nonatomic, readonly, copy) NSString *accountIdentifier;
@property (nonatomic, retain) NSString *accountIdentifier;
@property (nonatomic) long long accountType;
@property (nonatomic, readonly, copy) NSString *allItemsFolderLocalizedTitle;
@property (nonatomic, retain) NSDictionary *constraints;
@property (nonatomic, retain) NSString *constraintsPath;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSManagedObject<ICLegacyFolder> *defaultFolder;
@property (nonatomic, retain) NoteStoreObject *defaultStore;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didChooseToMigrate;
@property (nonatomic, readonly, copy) NSString *emailAddress;
@property (nonatomic, readonly) bool enabled;
@property (nonatomic, readonly) NSSet *folders;
@property (nonatomic, readonly) bool hasAnyCustomFolders;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isExchangeAccount;
@property (nonatomic, readonly) bool isICloudIMAPAccount;
@property (nonatomic, readonly) bool isIMAPAccount;
@property (nonatomic, readonly) bool isLocalAccount;
@property (nonatomic, readonly) bool isManaged;
@property (nonatomic, readonly) long long legacyAccountType;
@property (nonatomic, readonly, copy) NSString *localizedAttachmentsNotSupportedReason;
@property (nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, readonly) NSManagedObjectID *objectID;
@property (nonatomic, readonly, copy) NSString *objectIdentifier;
@property (nonatomic, retain) NSString *pathToConstraintsPlist;
@property (nonatomic, readonly) bool preventMovingNotesToOtherAccounts;
@property (nonatomic, retain) NSSet *stores;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsAttachments;
@property (nonatomic, retain) NSNumber *type;

// Image: /System/Library/PrivateFrameworks/Notes.framework/Notes

+ (bool)shouldDataAccessCreateAccountForACAccount:(id)arg1;

- (void).cxx_destruct;
- (long long)accountType;
- (id)basicAccountIdentifier;
- (id)cacheKey;
- (id)collectionInfo;
- (id)constraints;
- (void)didTurnIntoFault;
- (bool)isAllNotesContainer;
- (bool)isICloudIMAPAccount;
- (id)noteVisibilityTestingForSearchingAccount;
- (id)pathToConstraintsPlist;
- (id)predicateForNotes;
- (bool)preventMovingNotesToOtherAccounts;
- (id)searchDomainIdentifier;
- (void)setAccountType:(long long)arg1;
- (void)setConstraints:(id)arg1;
- (void)setPathToConstraintsPlist:(id)arg1;
- (bool)shouldMarkNotesAsDeleted;
- (id)storeForExternalId:(id)arg1;
- (id)titleForTableViewCell;
- (bool)validateDefaultStore:(id*)arg1 error:(id*)arg2;
- (void)willSave;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

- (id)allItemsFolderLocalizedTitle;
- (long long)compare:(id)arg1;
- (id)defaultFolder;
- (id)emailAddress;
- (bool)enabled;
- (id)folders;
- (bool)hasAnyCustomFolders;
- (bool)isExchangeAccount;
- (bool)isIMAPAccount;
- (bool)isLocalAccount;
- (bool)isManaged;
- (long long)legacyAccountType;
- (id)localizedAttachmentsNotSupportedReason;
- (id)localizedName;
- (id)objectIdentifier;
- (bool)supportsAttachments;

@end
