
@protocol PLPerformChangesRequestService <NSObject>

@required

- (NSString *)clientBundleID;
- (NSString *)clientDescription;
- (NSString *)clientDisplayName;
- (unsigned long long)libraryRole;
- (PLLibraryServicesManager *)libraryServicesManager;
- (NSPersistentStoreCoordinator *)persistentStoreCoordinator;

@end
