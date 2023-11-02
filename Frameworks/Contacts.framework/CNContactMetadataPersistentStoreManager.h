
@interface CNContactMetadataPersistentStoreManager : NSObject {
    NSPersistentContainer * _container;
    NSURL * _storeLocation;
}

@property (nonatomic, readonly) NSPersistentContainer *container;
@property (nonatomic, readonly) NSURL *storeLocation;

+ (id)createModel;
+ (id)currentManagedObjectModel;
+ (id)defaultStoreLocation;
+ (id)os_log;
+ (id)sharedPersistentContainer;

- (void).cxx_destruct;
- (id)container;
- (id)createManagedObjectContext;
- (bool)createStoreDirectoryIfNeeded:(id*)arg1;
- (id)init;
- (id)initWithStoreLocation:(id)arg1;
- (bool)performWorkWithManagedObjectContext:(id /* block */)arg1 error:(id*)arg2;
- (id)persistentStoreCoordinator;
- (bool)setupIfNeeded:(id*)arg1;
- (id)storeDescription;
- (id)storeLocation;

@end
