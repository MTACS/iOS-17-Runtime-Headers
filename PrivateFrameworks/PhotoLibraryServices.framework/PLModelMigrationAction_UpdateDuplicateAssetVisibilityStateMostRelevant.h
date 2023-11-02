
@interface PLModelMigrationAction_UpdateDuplicateAssetVisibilityStateMostRelevant : PLModelMigrationAction <PLModelMigrationAction>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSProgress *progress;
@property (readonly) Class superclass;

- (long long)performActionWithManagedObjectContext:(id)arg1 error:(id*)arg2;
- (long long)updateKeyAssetVisibilityStateWithManagedObjectContext:(id)arg1 error:(id*)arg2;
- (long long)updateLegacyHiddenValueWithManagedObjectContext:(id)arg1 error:(id*)arg2;

@end
