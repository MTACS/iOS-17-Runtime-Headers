
@interface FMSongLibrary : NSObject {
    NSMutableDictionary * _bundledSongs;
    FlexCloudManager * _cloudManager;
    bool  _contactedCloud;
    FlexReachability * _flexReachability;
    long long  _networkStatus;
    bool  _networkingIsDisabled;
    NSDictionary * _options;
}

@property (nonatomic, retain) NSMutableDictionary *bundledSongs;
@property (nonatomic, retain) FlexCloudManager *cloudManager;
@property (nonatomic) bool contactedCloud;
@property (nonatomic, retain) FlexReachability *flexReachability;
@property (nonatomic) long long networkStatus;
@property (nonatomic, readonly) bool networkingIsDisabled;
@property (nonatomic, readonly) NSDictionary *options;
@property (nonatomic, readonly) bool supportForCloud;

+ (id)sharedLibraryWithOptions:(id)arg1;

- (void).cxx_destruct;
- (void)_createCloudManagerOfType:(long long)arg1;
- (void)_loadBundledSongs;
- (void)_notifySongDownloadInProgressChanged:(bool)arg1;
- (void)_notifySongsChanged:(id)arg1;
- (void)_setupReachability;
- (void)_updateFromCloud;
- (id)bundledSongs;
- (void)cancelDownloadOfAllAssets;
- (id)cloudManager;
- (bool)contactedCloud;
- (void)dealloc;
- (id)fetchSongWithUID:(id)arg1;
- (id)fetchSongsWithOptions:(id)arg1;
- (id)fetchSongsWithOptions_photos_only:(id)arg1;
- (id)flexReachability;
- (id)init;
- (id)initWithOptions:(id)arg1;
- (long long)networkStatus;
- (void)networkStatusChanged:(id)arg1;
- (bool)networkingIsDisabled;
- (id)options;
- (void)purgeAllLocalCachedAssetsWithIDs:(id)arg1;
- (void)requestDownloadOfAllAssetsWithIDs:(id)arg1;
- (void)requestDownloadOfAllAssetsWithIDs:(id)arg1 withOptions:(id)arg2;
- (void)setBundledSongs:(id)arg1;
- (void)setCloudManager:(id)arg1;
- (void)setContactedCloud:(bool)arg1;
- (void)setFlexReachability:(id)arg1;
- (void)setNetworkStatus:(long long)arg1;
- (bool)supportForCloud;

@end
