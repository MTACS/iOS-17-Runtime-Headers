
@interface TBPersistenceManager : NSObject {
    NSManagedObjectModel * _managedObjectModel;
    NSManagedObjectContext * _persistenceContext;
    NSPersistentStoreCoordinator * _persistenceCoordinator;
    TBPersistenceRemoteStoreServer * _remoteStoreServer;
}

@property (nonatomic, retain) NSManagedObjectModel *managedObjectModel;
@property (nonatomic, retain) NSManagedObjectContext *persistenceContext;
@property (nonatomic, retain) NSPersistentStoreCoordinator *persistenceCoordinator;
@property (nonatomic, retain) TBPersistenceRemoteStoreServer *remoteStoreServer;

+ (bool)isStoreCompatibleAtURL:(id)arg1 withModel:(id)arg2;

- (void).cxx_destruct;
- (void)addPersistentStorage:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithManagedObjectModel:(id)arg1 storeDescriptor:(id)arg2;
- (id)managedObjectModel;
- (id)persistenceContext;
- (id)persistenceCoordinator;
- (id)remoteStoreServer;
- (void)setManagedObjectModel:(id)arg1;
- (void)setPersistenceContext:(id)arg1;
- (void)setPersistenceCoordinator:(id)arg1;
- (void)setRemoteStoreServer:(id)arg1;

@end
