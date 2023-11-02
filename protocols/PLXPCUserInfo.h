
@protocol PLXPCUserInfo <NSObject>

@required

- (PLLibraryServicesManager *)libraryServicesManager;
- (NSPersistentStoreCoordinator *)persistentStoreCoordinator;

@end
