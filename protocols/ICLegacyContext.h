
@protocol ICLegacyContext <NSObject>

@required

- (NSArray *)allAccounts;
- (NSArray *)allVisibleNoteObjectIDsForAccountWithObjectID:(NSManagedObjectID *)arg1;
- (NSArray *)allVisibleNotesForAccountWithObjectID:(NSManagedObjectID *)arg1;
- (NSArray *)allVisibleNotesInFolder:(NSManagedObject *)arg1;
- (unsigned long long)countOfVisibleNotesForAccount:(NSManagedObject *)arg1;
- (unsigned long long)countOfVisibleNotesForAccountWithObjectID:(NSManagedObjectID *)arg1;
- (NSManagedObject *)existingObjectWithID:(NSManagedObjectID *)arg1 error:(id*)arg2;
- (<ICLegacyFolder> *)folderForIdentifier:(NSString *)arg1;
- (NSSet *)ic_objectsWithIDs:(NSSet *)arg1;
- (NSManagedObjectContext *)managedObjectContext;
- (bool)nonEmptyNoteExistsForLegacyAccountWithObjectID:(NSManagedObjectID *)arg1;
- (<ICLegacyNote> *)noteForIdentifier:(NSString *)arg1;
- (NSManagedObject *)objectWithID:(NSManagedObjectID *)arg1;
- (void)performBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)performBlockAndWait:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)reset;

@end
