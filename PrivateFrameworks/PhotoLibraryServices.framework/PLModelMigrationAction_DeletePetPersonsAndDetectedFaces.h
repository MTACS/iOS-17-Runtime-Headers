
@interface PLModelMigrationAction_DeletePetPersonsAndDetectedFaces : PLModelMigrationAction <PLModelMigrationAction>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSProgress *progress;
@property (readonly) Class superclass;

- (long long)deleteManagedObjectsWithManagedObjectContext:(id)arg1 entity:(Class)arg2 predicate:(id)arg3 pendingParentUnitCount:(long long)arg4 deletedIdentifiers:(id*)arg5 entityIdentifierKeyPath:(id)arg6 error:(id*)arg7;
- (long long)performActionWithManagedObjectContext:(id)arg1 error:(id*)arg2;

@end
