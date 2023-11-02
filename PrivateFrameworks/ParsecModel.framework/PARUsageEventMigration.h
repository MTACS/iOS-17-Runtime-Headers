
@interface PARUsageEventMigration : NSEntityMigrationPolicy

- (void).cxx_destruct;
- (bool)createDestinationInstancesForSourceInstance:(id)arg1 entityMapping:(id)arg2 manager:(id)arg3 error:(id*)arg4;
- (id)init;

@end
