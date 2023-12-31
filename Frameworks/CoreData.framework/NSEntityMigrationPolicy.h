
@interface NSEntityMigrationPolicy : NSObject

- (id)_nonNilValueOrDefaultValueForAttribute:(id)arg1 source:(id)arg2 destination:(id)arg3;
- (bool)beginEntityMapping:(id)arg1 manager:(id)arg2 error:(id*)arg3;
- (bool)createDestinationInstancesForSourceInstance:(id)arg1 entityMapping:(id)arg2 manager:(id)arg3 error:(id*)arg4;
- (bool)createRelationshipsForDestinationInstance:(id)arg1 entityMapping:(id)arg2 manager:(id)arg3 error:(id*)arg4;
- (bool)endEntityMapping:(id)arg1 manager:(id)arg2 error:(id*)arg3;
- (bool)endInstanceCreationForEntityMapping:(id)arg1 manager:(id)arg2 error:(id*)arg3;
- (bool)endRelationshipCreationForEntityMapping:(id)arg1 manager:(id)arg2 error:(id*)arg3;
- (bool)performCustomValidationForEntityMapping:(id)arg1 manager:(id)arg2 error:(id*)arg3;

@end
