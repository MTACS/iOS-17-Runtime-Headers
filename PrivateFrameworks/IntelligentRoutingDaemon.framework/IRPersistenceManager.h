
@interface IRPersistenceManager : NSObject {
    IRDataContainer * _dataContainer;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSManagedObjectModel * _managedObjectModel;
    NSURL * _modelsDirectory;
    IRPersistenceStore * _persistenceStore;
    NSPersistentStoreCoordinator * _persistentStoreCoordinator;
    NSURL * _storesDirectory;
}

@property (nonatomic, readonly) NSManagedObjectModel *managedObjectModel;
@property (nonatomic, retain) IRPersistenceStore *persistenceStore;
@property (nonatomic, retain) NSPersistentStoreCoordinator *persistentStoreCoordinator;

+ (id)defaultModelsDirectory;

- (void).cxx_destruct;
- (void)_enableConcurrencyDebug;
- (id)_getDefaultStoresDirectory;
- (bool)_isStoreConnected;
- (bool)connectToStore;
- (id)createManagedObjectContext;
- (bool)disconnectFromStore;
- (id)getLocalStoreURL;
- (id)init;
- (id)initWithModelsDirectory:(id)arg1 storesDirectory:(id)arg2;
- (id)managedObjectModel;
- (id)persistenceStore;
- (id)persistentStoreCoordinator;
- (void)setPersistenceStore:(id)arg1;
- (void)setPersistentStoreCoordinator:(id)arg1;

@end
