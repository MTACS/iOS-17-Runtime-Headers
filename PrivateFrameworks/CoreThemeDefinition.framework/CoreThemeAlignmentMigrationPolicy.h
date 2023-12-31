
@interface CoreThemeAlignmentMigrationPolicy : NSEntityMigrationPolicy

- (bool)beginEntityMapping:(id)arg1 manager:(id)arg2 error:(id*)arg3;
- (bool)createDestinationInstancesForSourceInstance:(id)arg1 entityMapping:(id)arg2 manager:(id)arg3 error:(id*)arg4;
- (bool)createRelationshipsForDestinationInstance:(id)arg1 entityMapping:(id)arg2 manager:(id)arg3 error:(id*)arg4;
- (bool)performCustomValidationForEntityMapping:(id)arg1 manager:(id)arg2 error:(id*)arg3;

@end
