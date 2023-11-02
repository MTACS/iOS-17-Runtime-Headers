
@interface PLModelMigrationAction_AddMissingExtendedAttributeDigitalZoomRatio : PLModelMigrationActionBackground <PLModelMigrationAction>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSProgress *progress;
@property (readonly) Class superclass;

+ (long long)actionProgressWeight;

- (long long)performActionWithManagedObjectContext:(id)arg1 error:(id*)arg2;

@end
