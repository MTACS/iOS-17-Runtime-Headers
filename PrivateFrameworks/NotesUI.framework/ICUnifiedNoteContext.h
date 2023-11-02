
@interface ICUnifiedNoteContext : NSObject {
    NoteContext * _htmlNoteContext;
    ICNoteContext * _modernNoteContext;
    unsigned long long  _options;
}

@property (nonatomic, readonly) NSManagedObjectID *defaultAccountObjectID;
@property (nonatomic, readonly) NSManagedObjectContext *htmlManagedObjectContext;
@property (nonatomic, readonly) NoteContext *htmlNoteContext;
@property (nonatomic, readonly) NSPersistentStoreCoordinator *htmlStoreCoordinator;
@property (nonatomic, readonly) <ICLegacyAccount> *legacyAccountForLocalAccount;
@property (nonatomic, readonly) ICNotesCrossProcessChangeCoordinator *modernCrossProcessChangeCoordinator;
@property (nonatomic, readonly) NSManagedObjectContext *modernManagedObjectContext;
@property (nonatomic, readonly) ICNoteContext *modernNoteContext;
@property (nonatomic, readonly) NSPersistentStoreCoordinator *modernStoreCoordinator;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) bool resolvedPrefersViewContext;

- (void).cxx_destruct;
- (id)defaultAccountObjectID;
- (void)enableHTMLContextChangeLogging;
- (id)htmlManagedObjectContext;
- (id)htmlNoteContext;
- (id)htmlStoreCoordinator;
- (id)initWithModernNoteContext:(id)arg1 htmlNoteContext:(id)arg2;
- (id)initWithModernNoteContext:(id)arg1 htmlNoteContext:(id)arg2 options:(unsigned long long)arg3;
- (id)legacyAccountForEmailAddress:(id)arg1;
- (id)legacyAccountForLocalAccount;
- (id)legacyFolderWithIdentifier:(id)arg1;
- (id)legacyNoteWithIdentifier:(id)arg1;
- (id)managedObjectContextForObject:(id)arg1 error:(id*)arg2;
- (id)managedObjectContextForObjectID:(id)arg1;
- (id)managedObjectIDForURIRepresentation:(id)arg1;
- (id)managedObjectIDForURIString:(id)arg1;
- (id)modernCrossProcessChangeCoordinator;
- (id)modernManagedObjectContext;
- (id)modernNoteContext;
- (id)modernStoreCoordinator;
- (unsigned long long)options;
- (bool)resolvedPrefersViewContext;

@end
