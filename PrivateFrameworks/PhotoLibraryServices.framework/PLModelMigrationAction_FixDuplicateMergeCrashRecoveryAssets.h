
@interface PLModelMigrationAction_FixDuplicateMergeCrashRecoveryAssets : PLModelMigrationActionBackground <PLModelMigrationAction>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSProgress *progress;
@property (readonly) Class superclass;

+ (long long)actionProgressWeight;

- (bool)_isLibraryRepairRequiredWithManagedObjectContext:(id)arg1;
- (void)_processForRepairWithAsset:(id)arg1 repairCount:(long long*)arg2;
- (void)_repairAsset:(id)arg1;
- (long long)performActionWithManagedObjectContext:(id)arg1 error:(id*)arg2;

@end
