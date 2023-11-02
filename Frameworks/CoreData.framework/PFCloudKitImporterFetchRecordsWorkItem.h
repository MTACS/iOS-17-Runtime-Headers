
@interface PFCloudKitImporterFetchRecordsWorkItem : PFCloudKitImportRecordsWorkItem {
    NSMutableDictionary * _failedObjectIDsToError;
    NSMutableDictionary * _operationsToExecute;
    NSMutableDictionary * _recordIDToObjectID;
    NSMutableArray * _updatedObjectIDs;
}

- (id)createMirroringResultForRequest:(id)arg1 storeIdentifier:(id)arg2 success:(bool)arg3 madeChanges:(bool)arg4 error:(id)arg5;
- (void)dealloc;
- (id)description;
- (id)entityNameToAttributesToUpdate;
- (id)entityNameToRelationshipsToUpdate;
- (void)executeImportOperationsAndAccumulateRecordsWithManagedObjectContext:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithOptions:(id)arg1 request:(id)arg2;

@end
