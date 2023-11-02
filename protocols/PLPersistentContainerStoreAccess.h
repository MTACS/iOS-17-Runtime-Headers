
@protocol PLPersistentContainerStoreAccess

@required

- (void)removeSharedPersistentStoreCoordinator;
- (NSPersistentStoreCoordinator *)sharedPersistentStoreCoordinator;

@end
