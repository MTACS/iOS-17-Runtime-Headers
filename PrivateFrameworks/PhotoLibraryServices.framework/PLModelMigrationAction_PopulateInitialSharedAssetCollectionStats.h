
@interface PLModelMigrationAction_PopulateInitialSharedAssetCollectionStats : PLModelMigrationAction <PLModelMigrationAction>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSProgress *progress;
@property (readonly) Class superclass;

- (long long)_recalculateSharedAssetContainerValuesForEntityNamed:(id)arg1 propertiesToFetch:(id)arg2 inContext:(id)arg3 error:(id*)arg4;
- (long long)performActionWithManagedObjectContext:(id)arg1 error:(id*)arg2;

@end
