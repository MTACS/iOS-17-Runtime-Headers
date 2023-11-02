
@interface CLSDBCache : NSObject {
    NSString * _dataModelName;
    NSURL * _diskCacheURL;
    NSManagedObjectContext * _managedObjectContext;
    NSManagedObjectModel * _managedObjectModel;
    NSPersistentStoreCoordinator * _persistentStoreCoordinator;
    bool  _supportsVersioning;
}

@property (nonatomic, readonly, copy) NSString *dataModelName;
@property (nonatomic, readonly, copy) NSURL *diskCacheURL;
@property (nonatomic, readonly) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, readonly) NSManagedObjectModel *managedObjectModel;
@property (nonatomic, readonly) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (nonatomic) bool supportsVersioning;

+ (id)applicationDataUrlQueueWithURL:(id)arg1;
+ (id)currentApplicationDataUrlQueue;
+ (id)defaultCache;
+ (id)defaultCacheName;
+ (id)diskCacheWithName:(id)arg1;
+ (void)initialize;
+ (bool)locationIsValidForDatabaseAtURL:(id)arg1;
+ (id)urlForGraphApplicationData;

- (void).cxx_destruct;
- (void)_resetCoreDataStack;
- (bool)_save;
- (void)_saveAsync;
- (id)dataModelName;
- (id)diskCacheURL;
- (id)formatVersion;
- (id)initAtURL:(id)arg1;
- (id)initWithDiskCacheName:(id)arg1;
- (id)initWithDiskCacheName:(id)arg1 dataModelName:(id)arg2;
- (void)invalidateDiskCaches;
- (void)invalidateMemoryCaches;
- (id)managedObjectContext;
- (id)managedObjectModel;
- (id)persistentStoreCoordinator;
- (bool)save;
- (void)setSupportsVersioning:(bool)arg1;
- (bool)supportsVersioning;

@end
