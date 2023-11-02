
@protocol ICLegacyFolder <ICFolderObject>

@required

- (<ICLegacyAccount> *)account;
- (void)addNotesObject:(id <ICLegacyNote>)arg1;
- (NSArray *)ancestorFolders;
- (NSSet *)changes;
- (long long)compare:(id)arg1;
- (long long)depth;
- (NSString *)externalIdentifier;
- (bool)isCustomFolder;
- (bool)isDefaultFolder;
- (bool)isDeletedOrInTrash;
- (bool)isTrashFolder;
- (NSManagedObjectContext *)managedObjectContext;
- (NSString *)name;
- (<ICLegacyNote> *)newNoteInContext:(id <ICLegacyContext>)arg1;
- (NSManagedObjectID *)objectID;
- (<ICLegacyFolder> *)parentFolder;

@end
