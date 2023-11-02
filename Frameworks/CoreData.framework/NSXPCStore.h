
@interface NSXPCStore : NSIncrementalStore <NSCoreDataKeyedArchivingDelegate, NSSQLModelProvider> {
    NSDictionary * _ancillaryModels;
    NSDictionary * _ancillarySQLModels;
    NSGenerationalRowCache * _cache;
    NSXPCStoreConnectionManager * _connectionManager;
    NSSQLCore * _core;
    NSString * _fileBackedFuturesDirectory;
    NSDictionary * _metadata;
    NSSQLModel * _model;
    NSXPCStoreNotificationObserver * _observer;
    int  _outstandingRequests;
    NSString * _remoteStoreChangedNotificationName;
    NSObject<OS_dispatch_semaphore> * _requestTerminationSem;
    NSString * _sanityCheckToken;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _stateLock;
}

@property (readonly, copy) NSString *remoteStoreChangedNotificationName;

+ (bool)_allowCoreDataFutures;
+ (bool)_isOnExtendedTimeout;
+ (id)archiver:(id)arg1 willEncodeObject:(id)arg2;
+ (int)debugDefault;
+ (void)initialize;
+ (id)replacementObjectForXPCConnection:(id)arg1 encoder:(id)arg2 object:(id)arg3;
+ (void)setDebugDefault:(int)arg1;

- (bool)_allowCoreDataFutures;
- (bool)_hasActiveGenerations;
- (id)_newObjectIDForEntityDescription:(id)arg1 pk:(long long)arg2;
- (Class)_objectIDClass;
- (void)_prepareStoreForRemovalFromCoordinator:(id)arg1;
- (id)_rawMetadata__;
- (void)_setMetadata:(id)arg1 includeVersioning:(bool)arg2;
- (id)_storeInfoForEntityDescription:(id)arg1;
- (id)ancillaryModels;
- (id)ancillarySQLModels;
- (id)connectionManager;
- (id)currentChangeToken;
- (id)currentQueryGeneration;
- (void)dealloc;
- (id)executeRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
- (id)fileBackedFuturesDirectory;
- (void)freeQueryGenerationWithIdentifier:(id)arg1;
- (id)initWithPersistentStoreCoordinator:(id)arg1 configurationName:(id)arg2 URL:(id)arg3 options:(id)arg4;
- (bool)load:(id*)arg1;
- (bool)loadMetadata:(id*)arg1;
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1 generation:(id)arg2;
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1 generation:(id)arg2;
- (id)metadata;
- (id)model;
- (id)newForeignKeyID:(long long)arg1 entity:(id)arg2;
- (id)newObjectIDForEntity:(id)arg1 pk:(long long)arg2;
- (id)newValueForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id*)arg4;
- (id)newValuesForObjectWithID:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
- (id)objectIDFactoryForEntity:(id)arg1;
- (Class)objectIDFactoryForSQLEntity:(id)arg1;
- (id)obtainPermanentIDsForObjects:(id)arg1 error:(id*)arg2;
- (id)remoteStoreChangedNotificationName;
- (id)reopenQueryGenerationWithIdentifier:(id)arg1 error:(id*)arg2;
- (id)replacementObjectForXPCConnection:(id)arg1 encoder:(id)arg2 object:(id)arg3;
- (void)setIdentifier:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setURL:(id)arg1;
- (id)sqlCore;
- (bool)supportsConcurrentRequestHandling;
- (bool)supportsGenerationalQuerying;
- (id)type;
- (void)willRemoveFromPersistentStoreCoordinator:(id)arg1;

@end
