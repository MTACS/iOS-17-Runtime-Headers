
@protocol ICManagedObjectContextChangeControllerDelegate <NSObject>

@required

- (NSSet *)managedObjectContextChangeController:(ICManagedObjectContextChangeController *)arg1 managedObjectIDsToUpdateForUpdatedManagedObjects:(NSSet *)arg2;
- (void)managedObjectContextChangeController:(ICManagedObjectContextChangeController *)arg1 performUpdatesForManagedObjectIDs:(NSSet *)arg2;
- (bool)managedObjectContextChangeControllerShouldUpdateImmediately:(ICManagedObjectContextChangeController *)arg1;

@end
