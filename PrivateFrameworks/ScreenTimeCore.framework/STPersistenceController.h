
@interface STPersistenceController : NSObject <STDebouncerDelegate, STPersistenceControllerProtocol> {
    <STPersistentStoreChangeHandler> * _changeHandler;
    STDebouncer * _changeNotificationDebouncer;
    NSObject<OS_dispatch_queue> * _coreDataQueue;
    NSPersistentContainer * _persistentContainer;
}

@property (readonly) <STPersistentStoreChangeHandler> *changeHandler;
@property (readonly) STDebouncer *changeNotificationDebouncer;
@property (readonly) NSPersistentStore *cloudStore;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *coreDataQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasStoreLoaded;
@property (readonly) unsigned long long hash;
@property (readonly) NSPersistentStore *localStore;
@property (nonatomic, retain) NSPersistentContainer *persistentContainer;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSManagedObjectContext *viewContext;

- (void).cxx_destruct;
- (void)_logAboutMissingStoreName:(id)arg1;
- (void)_persistentStoreCoordinatorStoresDidChange:(id)arg1;
- (void)_remotePersistentStoreChangesDidCoalesce:(id)arg1;
- (id)changeHandler;
- (id)changeNotificationDebouncer;
- (id)cloudStore;
- (id)coreDataQueue;
- (void)debouncer:(id)arg1 didDebounce:(id)arg2;
- (id)descriptionForPersistentStore:(id)arg1;
- (bool)hasStoreLoaded;
- (id)init;
- (id)initWithPersistentContainer:(id)arg1 persistentStoreChangeHandler:(id)arg2 notificationDebouncer:(id)arg3;
- (id)localStore;
- (id)newBackgroundContext;
- (void)performBackgroundTask:(id /* block */)arg1;
- (void)performBackgroundTaskAndWait:(id /* block */)arg1;
- (id)persistentContainer;
- (void)remotePersistentStoreDidChange:(id)arg1;
- (bool)saveContext:(id)arg1 error:(id*)arg2;
- (void)setCoreDataQueue:(id)arg1;
- (void)setPersistentContainer:(id)arg1;
- (id)viewContext;

@end
