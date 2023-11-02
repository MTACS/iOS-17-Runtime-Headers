
@interface PUCurationAssetBrowserViewController : PUPhotosAlbumViewController {
    NSMutableArray * _assetContainers;
    PNScoreConfiguration * _scoreConfiguration;
    PHPhotoLibrary * photoLibrary;
}

@property (nonatomic, retain) NSMutableArray *assetContainers;
@property (nonatomic, retain) PHPhotoLibrary *photoLibrary;
@property (nonatomic, retain) PNScoreConfiguration *scoreConfiguration;

- (void).cxx_destruct;
- (void)_update;
- (id)assetContainers;
- (id)assetContainersForAssets:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)photoLibrary;
- (id)scoreByAssetForPlistPath:(id)arg1;
- (id)scoreConfiguration;
- (void)setAssetContainers:(id)arg1;
- (void)setPhotoLibrary:(id)arg1;
- (void)setScoreConfiguration:(id)arg1;
- (void)setScoreConfiguration:(id)arg1 forAssetUUIDs:(id)arg2;
- (void)setScoreConfiguration:(id)arg1 withAssets:(id)arg2;
- (void)setScoreConfiguration:(id)arg1 withFaces:(id)arg2;
- (void)viewDidLoad;

@end
