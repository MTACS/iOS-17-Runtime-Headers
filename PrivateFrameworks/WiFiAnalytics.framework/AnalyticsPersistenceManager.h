
@interface AnalyticsPersistenceManager : NSObject {
    NSManagedObjectModel * _managedObjectModel;
    NSManagedObjectContext * _persistenceContext;
    NSPersistentStoreCoordinator * _persistenceCoordinator;
    NSXPCStoreServer * _xpcStoreServer;
}

@property (nonatomic, retain) NSManagedObjectModel *managedObjectModel;
@property (nonatomic, retain) NSManagedObjectContext *persistenceContext;
@property (nonatomic, retain) NSPersistentStoreCoordinator *persistenceCoordinator;
@property (nonatomic, retain) NSXPCStoreServer *xpcStoreServer;

+ (bool)isStoreCompatibleAtURL:(id)arg1 withModel:(id)arg2;

- (void).cxx_destruct;
- (id)initWithManagedObjectModel:(id)arg1 storeDescriptor:(id)arg2;
- (id)managedObjectModel;
- (id)persistenceContext;
- (id)persistenceCoordinator;
- (void)setManagedObjectModel:(id)arg1;
- (void)setPersistenceContext:(id)arg1;
- (void)setPersistenceCoordinator:(id)arg1;
- (void)setXpcStoreServer:(id)arg1;
- (id)xpcStoreServer;

@end
