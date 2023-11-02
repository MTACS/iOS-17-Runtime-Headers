
@interface PUCurationActionAssetBrowserViewController : PUPhotosAlbumViewController {
    NSMutableArray * _assetContainers;
    PHPhotoLibrary * _curationPhotoLibrary;
    PUCurationTraitContainer * _traitContainer;
}

@property (nonatomic, retain) NSMutableArray *assetContainers;
@property (nonatomic, retain) PHPhotoLibrary *curationPhotoLibrary;
@property (nonatomic, retain) PUCurationTraitContainer *traitContainer;

- (void).cxx_destruct;
- (id)_globalHeaderTitle;
- (void)_update;
- (id)assetContainers;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)configureGlobalHeaderView:(id)arg1;
- (id)curationPhotoLibrary;
- (double)globalHeaderHeight;
- (void)setAssetContainers:(id)arg1;
- (void)setCurationPhotoLibrary:(id)arg1;
- (void)setTraitContainer:(id)arg1;
- (void)setTraitContainer:(id)arg1 withFaces:(id)arg2 detectionTraitsByFaceLocalIdentifier:(id)arg3;
- (id)traitContainer;
- (void)viewDidLoad;

@end
