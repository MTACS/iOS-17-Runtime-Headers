
@interface ACDDatabaseConnection : NSObject {
    NSCache * _cache;
    <ACDDatabaseConnectionDelegate> * _delegate;
    NSManagedObjectContext * _managedObjectContext;
    <NSObject> * _managedObjectContextDidSaveObserver;
    NSPersistentStoreCoordinator * _persistentStoreCoordinator;
}

@property (nonatomic) <ACDDatabaseConnectionDelegate> *delegate;
@property (nonatomic, retain) NSNumber *keychainVersion;
@property (nonatomic, readonly) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, readonly) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (nonatomic, retain) NSNumber *version;

+ (id)new;

- (void).cxx_destruct;
- (id)_accountPropertyWithKey:(id)arg1 owner:(id)arg2;
- (void)_beginObservingManagedObjectContextDidSaveNotifications;
- (void)_delegate_databaseConnectionEncounteredUnrecoverableError:(id)arg1;
- (void)_endObservingManagedObjectContextDidSaveNotifications;
- (void)_handleManagedObjectContextError:(id)arg1;
- (void)_managedObjectContextDidSave:(id)arg1;
- (id)_managedObjectContextModificationDescription;
- (id)_managedObjectModel;
- (id)_managedObjectModificationDescription:(id)arg1;
- (id)_persistentStore;
- (void)_setupManagedObjectContextWithPersistentStoreCoodinator:(id)arg1;
- (void)_traceDatabaseEvents;
- (unsigned long long)countOfEntityNamed:(id)arg1 withPredicate:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (void)deleteAccountPropertyWithKey:(id)arg1 owner:(id)arg2;
- (void)deleteObject:(id)arg1;
- (id)existingObjectWithURI:(id)arg1;
- (id)fetchObjectsForEntityNamed:(id)arg1;
- (id)fetchObjectsForEntityNamed:(id)arg1 withPredicate:(id)arg2;
- (id)fetchObjectsForEntityNamed:(id)arg1 withPredicate:(id)arg2 sortDescriptor:(id)arg3;
- (id)fetchObjectsForEntityNamed:(id)arg1 withPredicate:(id)arg2 sortDescriptor:(id)arg3 prefetchKeypaths:(id)arg4;
- (id)init;
- (id)initWithPersistentStoreCoordinator:(id)arg1;
- (id)insertNewObjectForEntityForName:(id)arg1;
- (id)keychainVersion;
- (id)managedObjectContext;
- (id)managedObjectIDForURI:(id)arg1;
- (id)objectForObjectURI:(id)arg1;
- (id)persistentStoreCoordinator;
- (void)rollback;
- (bool)saveWithError:(id*)arg1;
- (bool)saveWithError:(id*)arg1 rollbackOnFailure:(bool)arg2;
- (void)setAccountPropertyWithKey:(id)arg1 value:(id)arg2 owner:(id)arg3;
- (void)setDelegate:(id)arg1;
- (void)setKeychainVersion:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)version;

@end
