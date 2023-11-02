
@interface NSPersistentStoreCoordinator : NSObject <NSLocking> {
    int  _cd_rc;
    <NSPersistentStoreCoordinatorDelegate> * _delegate;
    void * _dispatchQueue;
    NSMutableArray * _extendedStoreURLs;
    struct _persistentStoreCoordinatorFlags { 
        unsigned int _isRegistered : 1; 
        unsigned int _canUseDirectDispatch : 1; 
        unsigned int _queueUsage : 1; 
        unsigned int _qosClass : 8; 
        unsigned int _reservedFlags : 21; 
    }  _flags;
    NSError * _lastOpenError;
    NSManagedObjectModel * _managedObjectModel;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _miniLock;
    _PFModelMap * _modelMap;
    NSArray * _persistentStores;
    NSString * _queueLabel;
    id  _queueOwner;
    id  _xpcBundleID;
    NSString * _xpcProcessName;
}

@property (readonly) NSManagedObjectModel *managedObjectModel;
@property (copy) NSString *name;
@property (readonly) NSArray *persistentStores;

// Image: /System/Library/Frameworks/CoreData.framework/CoreData

+ (void)_registerCoreDataStoreClass:(Class)arg1 forStoreType:(id)arg2;
+ (bool)accessInstanceVariablesDirectly;
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (void)initialize;
+ (id)metadataForPersistentStoreOfType:(id)arg1 URL:(id)arg2 error:(id*)arg3;
+ (id)metadataForPersistentStoreOfType:(id)arg1 URL:(id)arg2 options:(id)arg3 error:(id*)arg4;
+ (void)registerStoreClass:(Class)arg1 forStoreType:(id)arg2;
+ (id)registeredStoreTypes;
+ (bool)removePersistentHistoryFromPersistentStoreAtURL:(id)arg1 options:(id)arg2 error:(id*)arg3;
+ (bool)removeUbiquitousContentAndPersistentStoreAtURL:(id)arg1 options:(id)arg2 error:(id*)arg3;
+ (bool)setMetadata:(id)arg1 forPersistentStoreOfType:(id)arg2 URL:(id)arg3 error:(id*)arg4;
+ (bool)setMetadata:(id)arg1 forPersistentStoreOfType:(id)arg2 URL:(id)arg3 options:(id)arg4 error:(id*)arg5;
+ (id)ubiquityStoreURLForStoreURL:(id)arg1 ubiquityIdentityToken:(id)arg2 ubiquityName:(id)arg3;

- (void).cxx_destruct;
- (id)URLForPersistentStore:(id)arg1;
- (id)_allOrderKeysForDestination:(id)arg1 inRelationship:(id)arg2 error:(id*)arg3;
- (bool)_destroyPersistentStoreAtURL:(id)arg1 withType:(id)arg2 error:(id*)arg3;
- (bool)_destroyPersistentStoreAtURL:(id)arg1 withType:(id)arg2 options:(id)arg3 error:(id*)arg4;
- (id)_exceptionNoStoreSaveFailureForError:(id)arg1 recommendedFrame:(int*)arg2;
- (bool)_isDeallocating;
- (id)_newOrderedRelationshipInformationForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id*)arg4;
- (bool)_refreshTriggerValuesInStore:(id)arg1 error:(id*)arg2;
- (bool)_rekeyPersistentStoreAtURL:(id)arg1 type:(id)arg2 options:(id)arg3 withKey:(id)arg4 error:(id*)arg5;
- (bool)_removeAllPersistentStores:(id*)arg1;
- (bool)_replacePersistentStoreAtURL:(id)arg1 destinationOptions:(id)arg2 withPersistentStoreFromURL:(id)arg3 sourceOptions:(id)arg4 storeType:(id)arg5 error:(id*)arg6;
- (id)_retainedCurrentQueryGeneration:(id)arg1;
- (bool)_tryRetain;
- (bool)_validateQueryGeneration:(id)arg1 error:(id*)arg2;
- (void)addPersistentStoreWithDescription:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)addPersistentStoreWithType:(id)arg1 configuration:(id)arg2 URL:(id)arg3 options:(id)arg4 error:(id*)arg5;
- (id)currentPersistentHistoryTokenFromStores:(id)arg1;
- (id)currentQueryGenerationTokenFromStores:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (bool)destroyPersistentStoreAtURL:(id)arg1 withType:(id)arg2 options:(id)arg3 error:(id*)arg4;
- (id)executeRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
- (bool)finishDeferredLightweightMigration:(id*)arg1;
- (bool)finishDeferredLightweightMigrationTask:(id*)arg1;
- (id)init;
- (id)initWithManagedObjectModel:(id)arg1;
- (void)lock;
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1 generation:(id)arg2;
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1 generation:(id)arg2;
- (id)managedObjectIDForURIRepresentation:(id)arg1;
- (id)managedObjectIDFromUTF8String:(const char *)arg1 length:(unsigned long long)arg2;
- (id)managedObjectModel;
- (id)metadataForPersistentStore:(id)arg1;
- (id)migratePersistentStore:(id)arg1 toURL:(id)arg2 options:(id)arg3 withType:(id)arg4 error:(id*)arg5;
- (id)name;
- (id)newValueForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id*)arg4;
- (id)newValuesForObjectWithID:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
- (bool)obtainPermanentIDsForObjects:(id)arg1 error:(id*)arg2;
- (void)performBlock:(id /* block */)arg1;
- (void)performBlockAndWait:(id /* block */)arg1;
- (id)persistentStoreCoordinator;
- (id)persistentStoreForIdentifier:(id)arg1;
- (id)persistentStoreForURL:(id)arg1;
- (id)persistentStores;
- (oneway void)release;
- (bool)removePersistentStore:(id)arg1 error:(id*)arg2;
- (bool)replacePersistentStoreAtURL:(id)arg1 destinationOptions:(id)arg2 withPersistentStoreFromURL:(id)arg3 sourceOptions:(id)arg4 storeType:(id)arg5 error:(id*)arg6;
- (id)retain;
- (unsigned long long)retainCount;
- (void)setDelegate:(id)arg1;
- (void)setMetadata:(id)arg1 forPersistentStore:(id)arg2;
- (void)setName:(id)arg1;
- (bool)setURL:(id)arg1 forPersistentStore:(id)arg2;
- (bool)tryLock;
- (void)unlock;

// Image: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore

- (bool)hasStoreInCommonWith:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NotesSupport.framework/NotesSupport

- (id)ic_managedObjectIDForURIRepresentation:(id)arg1;
- (id)ic_managedObjectIDForURIString:(id)arg1;

@end
