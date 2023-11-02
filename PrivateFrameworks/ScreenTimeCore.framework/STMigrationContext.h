
@interface STMigrationContext : NSObject {
    NSMutableSet * _deletedObjectIDs;
    NSMutableSet * _filledObjectIDs;
    NSMutableDictionary * _uniqueIdentifierToCloudObjectID;
    NSMutableDictionary * _uniqueIdentifierToLocalObjectID;
}

- (void).cxx_destruct;
- (id)deleteCloudObjectWithUniqueIdentifier:(id)arg1 managedObjectContext:(id)arg2 error:(id*)arg3;
- (bool)deleteLocalObjectWithUniqueIdentifier:(id)arg1 managedObjectContext:(id)arg2 error:(id*)arg3;
- (id)init;
- (bool)initializeCachesWithManagedObjectContext:(id)arg1 withCloudStore:(id)arg2 andLocalStore:(id)arg3 error:(id*)arg4;
- (id)updateCloudObjectWithUniqueIdentifier:(id)arg1 dictionary:(id)arg2 managedObjectContext:(id)arg3 error:(id*)arg4;

@end
