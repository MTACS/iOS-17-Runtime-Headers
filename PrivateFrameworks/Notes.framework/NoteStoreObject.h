
@interface NoteStoreObject : NoteCollectionObject <ICLegacyFolder>

@property (nonatomic, readonly) <ICLegacyAccount> *account;
@property (nonatomic, retain) NoteAccountObject *account;
@property (nonatomic, readonly) NSArray *ancestorFolders;
@property (nonatomic, readonly, retain) NSArray *ancestorStores;
@property (nonatomic, readonly) NSSet *changes;
@property (nonatomic, retain) NSSet *changes;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) long long depth;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *externalIdentifier;
@property (nonatomic, retain) NSString *externalIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifierURIPathComponent;
@property (nonatomic, readonly) bool isCustomFolder;
@property (nonatomic, readonly) bool isDefaultFolder;
@property (nonatomic, readonly) bool isDeletedOrInTrash;
@property (nonatomic, readonly) bool isTrashFolder;
@property (nonatomic, readonly, copy) NSString *localizedTitle;
@property (nonatomic, readonly) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, readonly) NSManagedObjectID *objectID;
@property (nonatomic, readonly) <ICLegacyFolder> *parentFolder;
@property (nonatomic, readonly, retain) NoteStoreObject *parentStore;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *syncAnchor;

// Image: /System/Library/PrivateFrameworks/Notes.framework/Notes

- (id)ancestorStores;
- (id)basicAccountIdentifier;
- (id)cacheKey;
- (id)collectionInfo;
- (unsigned int)maximumServerIntId;
- (unsigned long long)minimumSequenceNumberForServerIntIds:(id)arg1;
- (id)noteVisibilityTestingForSearchingAccount;
- (id)notesForGUIDs:(id)arg1;
- (id)notesForIntegerIds:(id)arg1;
- (id)notesForServerIds:(id)arg1;
- (id)notesForServerIntIds:(id)arg1;
- (id)notesForServerIntIds:(id)arg1 ascending:(bool)arg2 limit:(unsigned long long)arg3;
- (id)notesForServerIntIdsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)notesForServerIntIdsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 ascending:(bool)arg2 limit:(unsigned long long)arg3;
- (id)parentStore;
- (id)predicateForNotes;
- (id)searchDomainIdentifier;
- (id)titleForTableViewCell;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

- (void)addNotesObject:(id)arg1;
- (id)ancestorFolders;
- (long long)compare:(id)arg1;
- (long long)depth;
- (id)identifierURIPathComponent;
- (bool)isCustomFolder;
- (bool)isDefaultFolder;
- (bool)isDeletedOrInTrash;
- (bool)isTrashFolder;
- (id)localizedTitle;
- (id)newNoteInContext:(id)arg1;
- (id)parentFolder;

@end
