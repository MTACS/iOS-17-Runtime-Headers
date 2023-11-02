
@interface PLModelMigrationAction_CreateManualIndexes : PLModelMigrationActionPreRepair <PLModelMigrationAction>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSProgress *progress;
@property (readonly) Class superclass;

+ (bool)createManualIndexesDropBeforeCreate:(bool)arg1 pathManager:(id)arg2;

- (long long)performActionWithManagedObjectContext:(id)arg1 error:(id*)arg2;

@end
