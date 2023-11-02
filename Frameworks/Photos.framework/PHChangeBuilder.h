
@interface PHChangeBuilder : NSObject {
    NSMutableDictionary * _attributesByOID;
    PHPersistentChangeToken * _changeToken;
    NSManagedObjectContext * _context;
    NSMutableSet * _deletedObjectIDs;
    NSMutableDictionary * _deletedUuidsByObjectId;
    PHPersistentChangeEnumerationContext * _enumerationContext;
    PHPersistentChangeFetchOptions * _fetchOptions;
    NSMutableSet * _insertedObjectIDs;
    PHPhotoLibrary * _library;
    NSMutableDictionary * _relationshipsByOID;
    bool  _unknownMergeEvent;
    NSMutableSet * _updatedObjectIDs;
}

+ (id)changeWithManagedObjectContext:(id)arg1 library:(id)arg2 options:(id)arg3 transaction:(id)arg4;
+ (id)persistentChangeWithManagedObjectContext:(id)arg1 library:(id)arg2 options:(id)arg3 transaction:(id)arg4 enumerationContext:(id)arg5;

- (void).cxx_destruct;
- (void)_recordChangedProperties:(id)arg1 forObjectID:(id)arg2;
- (void)_recordDeleteChange:(id)arg1 withUniquedObjectID:(id)arg2;
- (void)_recordInsertChange:(id)arg1 withUniquedObjectID:(id)arg2;
- (void)_recordUpdateChange:(id)arg1 withUniquedObjectID:(id)arg2;
- (id)_uuidForDeleteChange:(id)arg1 uniquedObjectID:(id)arg2;
- (id)buildChange;
- (id)buildPersistentChange;
- (bool)changeCountExeedsThreshold:(unsigned long long)arg1;
- (id)initWithManagedObjectContext:(id)arg1 library:(id)arg2 options:(id)arg3 enumerationContext:(id)arg4;
- (void)recordChange:(id)arg1;
- (void)recordChangesInTransaction:(id)arg1;
- (void)recordNonIncrementalChanges;
- (void)recordTransaction:(id)arg1;

@end
