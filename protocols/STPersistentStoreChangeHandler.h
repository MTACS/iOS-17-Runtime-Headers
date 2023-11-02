
@protocol STPersistentStoreChangeHandler

@required

- (void)handlePersistentStoreCoordinatorStoresDidChange:(NSNotification *)arg1;
- (void)handleRemotePersistentStoreDidChange:(NSNotification *)arg1 inContext:(NSManagedObjectContext *)arg2;

@end
