
@protocol AVTCoreDataPersistentStoreConfiguration <NSObject>

@required

- (NSManagedObjectContext *)createManagedObjectContext;
- (NSPersistentStoreCoordinator *)persistentStoreCoordinator;
- (bool)setupIfNeeded:(id*)arg1;
- (NSPersistentStoreDescription *)storeDescription;

@end
