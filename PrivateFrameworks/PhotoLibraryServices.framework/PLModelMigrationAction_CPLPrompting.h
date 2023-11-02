
@interface PLModelMigrationAction_CPLPrompting : PLModelMigrationActionPreRepair <PLModelMigrationAction>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSProgress *progress;
@property (readonly) Class superclass;

+ (void)_resetICPLPrompt;
+ (void)_setLastWelcomedDBVersion;
+ (void)shouldRepromptUserIfNeededWithPathManager:(id)arg1;

- (long long)performActionWithManagedObjectContext:(id)arg1 error:(id*)arg2;

@end
