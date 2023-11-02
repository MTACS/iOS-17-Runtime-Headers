
@interface PUCurationLocationBrowserViewController : UITableViewController {
    PUCurationAssetBrowserViewController * _assetBrowserViewController;
    NSArray * _availableLocations;
    PHPhotoLibrary * _photoLibrary;
    PNScoreConfiguration * _scoreConfiguration;
}

@property (nonatomic, retain) PUCurationAssetBrowserViewController *assetBrowserViewController;
@property (nonatomic, retain) NSArray *availableLocations;
@property (nonatomic, retain) PHPhotoLibrary *photoLibrary;
@property (nonatomic, retain) PNScoreConfiguration *scoreConfiguration;

- (void).cxx_destruct;
- (id)assetBrowserViewController;
- (id)assetUUIDsByGeoHash;
- (id)availableLocations;
- (id)cityNameForGeoHashWithAsseUUIDsByGeoHash:(id)arg1;
- (id)geoHashContainers;
- (id)initWithScoreConfiguration:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)photoLibrary;
- (bool)saveToPlistForScoreDictionary:(id)arg1 dataType:(long long)arg2;
- (id)scoreConfiguration;
- (void)setAssetBrowserViewController:(id)arg1;
- (void)setAvailableLocations:(id)arg1;
- (void)setPhotoLibrary:(id)arg1;
- (void)setScoreConfiguration:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;

@end
