
@protocol ICLegacyAccount <ICAccountObject>

@required

- (NSString *)accountIdentifier;
- (NSString *)allItemsFolderLocalizedTitle;
- (long long)compare:(id)arg1;
- (NSManagedObject<ICLegacyFolder> *)defaultFolder;
- (bool)didChooseToMigrate;
- (NSString *)emailAddress;
- (bool)enabled;
- (NSSet *)folders;
- (bool)hasAnyCustomFolders;
- (bool)isExchangeAccount;
- (bool)isIMAPAccount;
- (bool)isLocalAccount;
- (bool)isManaged;
- (long long)legacyAccountType;
- (NSString *)localizedAttachmentsNotSupportedReason;
- (NSManagedObjectContext *)managedObjectContext;
- (NSString *)name;
- (NSManagedObjectID *)objectID;
- (NSString *)objectIdentifier;
- (bool)preventMovingNotesToOtherAccounts;
- (void)setDidChooseToMigrate:(bool)arg1;
- (bool)supportsAttachments;

@end
