
@interface CLSEIEventsDataManager : NSObject {
    NSMutableDictionary * _artistCache;
    NSObject<OS_dispatch_queue> * _cacheQueue;
    NSMutableDictionary * _categoryCache;
    NSURL * _diskCacheURL;
    NSManagedObjectContext * _managedObjectContext;
    NSManagedObjectModel * _managedObjectModel;
    NSPersistentStoreCoordinator * _persistentStoreCoordinator;
    NSMutableDictionary * _venueCache;
}

@property (nonatomic, readonly) NSMutableDictionary *artistCache;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *cacheQueue;
@property (nonatomic, readonly) NSMutableDictionary *categoryCache;
@property (nonatomic, readonly) NSURL *diskCacheURL;
@property (nonatomic, readonly) NSManagedObjectModel *managedObjectModel;
@property (nonatomic, readonly) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (nonatomic, readonly) NSMutableDictionary *venueCache;

- (void).cxx_destruct;
- (id)_fetchManagedObjectWithEntityName:(id)arg1 name:(id)arg2;
- (id)_fetchManagedObjectWithEntityName:(id)arg1 uuid:(long long)arg2;
- (void)_resetCoreDataStack;
- (bool)_save;
- (id)artistCache;
- (id)cacheQueue;
- (id)categoryCache;
- (void)clear;
- (void)clearFastAccessCache;
- (id)diskCacheURL;
- (id)fetchArtistForUUID:(long long)arg1;
- (id)fetchCategoryForName:(id)arg1;
- (id)fetchEventForUUID:(long long)arg1;
- (id)fetchVenueForUUID:(long long)arg1;
- (id)initWithDiskCacheURL:(id)arg1;
- (id)insertArtistWithUUID:(long long)arg1 name:(id)arg2;
- (id)insertCategoryWithName:(id)arg1;
- (id)insertEventWithUUID:(long long)arg1 name:(id)arg2;
- (id)insertVenueWithUUID:(long long)arg1 name:(id)arg2 coordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg3;
- (id)managedObjectContext;
- (id)managedObjectModel;
- (id)persistentStoreCoordinator;
- (bool)save;
- (id)venueCache;

@end
