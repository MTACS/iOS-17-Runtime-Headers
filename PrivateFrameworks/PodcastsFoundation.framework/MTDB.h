
@interface MTDB : NSObject <NSManagedObjectContextProvider> {
    <MTCoreDataContainerConfigProvider> * _config;
    MTCoreDataContainer * _coreDataContainer;
}

@property (nonatomic, retain) <MTCoreDataContainerConfigProvider> *config;
@property (nonatomic, retain) MTCoreDataContainer *coreDataContainer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)canExtensionOpenDatabase;
+ (long long)coreDataVersion;
+ (bool)createDatabaseIfNeeded;
+ (id)fetchManagedObjectModelFromDisk;
+ (bool)isCorrupt;
+ (void)isPodcastsAppCheck;
+ (long long)libraryDataVersion;
+ (id)libraryPath;
+ (id)libraryShmPath;
+ (id)libraryWalPath;
+ (bool)needsCacheBustForFreeAndPaidUrlStorage;
+ (bool)needsMigrationToDeltaFeedUpdates;
+ (bool)needsSerpentIdEpisodeMigration;
+ (bool)quickCheckForNeedsContainerMigration;
+ (bool)serpentIdMigrationComplete;
+ (void)setCoreDataVersion:(long long)arg1;
+ (void)setCorrupt:(bool)arg1;
+ (void)setLibraryDataVersion:(long long)arg1;
+ (void)setMigrationToDeltaFeedUpdatesComplete;
+ (void)setQuickCheckForNeedsContainerMigration:(bool)arg1;
+ (void)setSerpentIdMigrationComplete:(bool)arg1;
+ (void)setSharedInstance:(id)arg1;
+ (void)setStoreBothFreeAndPaidUrlsPreviousBootup;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)addChangeNotifier:(id)arg1;
- (id)carPlayContext;
- (id)config;
- (id)contextForName:(id)arg1;
- (id)coreDataContainer;
- (id)importContext;
- (id)init;
- (id)initWithCoreDataContainer:(id)arg1 config:(id)arg2;
- (id)loggingContext;
- (id)mainOrPrivateContext;
- (id)mainQueueContext;
- (id)managedObjectModel;
- (id)persistentStoreUuid;
- (id)playbackContext;
- (id)privateQueueContext;
- (void)removeChangeNotifier:(id)arg1;
- (id)resetableImportContext;
- (void)setConfig:(id)arg1;
- (void)setCoreDataContainer:(id)arg1;
- (id)storeContext;

@end
