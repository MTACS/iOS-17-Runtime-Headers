
@interface PLModelMigrationAction_UpdateDuplicateProcessingStateScreenshot : PLModelMigrationAction_UpdateDuplicateProcessingState

+ (long long)actionProgressWeight;

- (id)fetchRequestForScreenshot;
- (long long)performActionWithManagedObjectContext:(id)arg1 error:(id*)arg2;

@end
