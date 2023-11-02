
@interface FlexCloudKitManager : FlexCloudManager {
    NSMapTable * _artDownloadOperations;
    NSMutableSet * _assetsBeingPurged;
    NSString * _containerName;
    NSURL * _downloadURL;
    FlexLocalDBController * _localDatabaseController;
    NSMapTable * _songDownloadOperations;
}

@property (nonatomic, retain) NSMapTable *artDownloadOperations;
@property (nonatomic, retain) NSMutableSet *assetsBeingPurged;
@property (nonatomic, retain) NSString *containerName;
@property (nonatomic, retain) NSURL *downloadURL;
@property (nonatomic, retain) FlexLocalDBController *localDatabaseController;
@property (nonatomic, retain) NSMapTable *songDownloadOperations;

- (void).cxx_destruct;
- (void)_populateDBDictionary:(id)arg1 withMetadata:(id)arg2;
- (bool)_unarchiveSongBundleAtPath:(id)arg1 toURL:(id)arg2;
- (id)artDownloadOperations;
- (unsigned long long)assetStatus:(id)arg1;
- (id)assetsBeingPurged;
- (void)cancelDownloadOfAllAssets;
- (void)cancelDownloadOfAsset:(id)arg1;
- (id)containerName;
- (id)downloadURL;
- (void)fetchAllSongsWithCompletion:(id /* block */)arg1;
- (id)initWithLibrary:(id)arg1 options:(id)arg2;
- (void)loadAssetWithID:(id)arg1 forSongID:(id)arg2;
- (id)loadCachedSongs;
- (id)localDatabaseController;
- (void)requestDownloadOfAsset:(id)arg1 withOptions:(id)arg2;
- (void)requestPurgeOfAsset:(id)arg1;
- (void)setArtDownloadOperations:(id)arg1;
- (void)setAssetsBeingPurged:(id)arg1;
- (void)setContainerName:(id)arg1;
- (void)setDownloadURL:(id)arg1;
- (void)setLocalDatabaseController:(id)arg1;
- (void)setSongDownloadOperations:(id)arg1;
- (id)songDownloadOperations;

@end
