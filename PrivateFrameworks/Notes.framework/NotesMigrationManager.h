
@interface NotesMigrationManager : NSObject

- (bool)areStoreMetadata:(id)arg1 matchingEntityVersionsInModel:(id)arg2;
- (bool)migrateNotesStoreAtURL:(id)arg1 storeType:(id)arg2 managedObjectModel:(id)arg3 options:(id)arg4 error:(id*)arg5;
- (bool)migrateNotesStoreAtURL:(id)arg1 storeType:(id)arg2 options:(id)arg3 sourceModel:(id)arg4 destinationModel:(id)arg5 mappingModel:(id)arg6 error:(id*)arg7;

@end
