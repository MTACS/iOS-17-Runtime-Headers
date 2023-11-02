
@protocol PLModelMigrationAction <NSProgressReporting>

@required

- (long long)performActionWithManagedObjectContext:(NSManagedObjectContext *)arg1 error:(id*)arg2;

@end
