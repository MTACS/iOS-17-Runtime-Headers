
@interface PUCurationTripKeyAssetDebugViewController : PUPhotosAlbumViewController {
    PUCurationTripKeyAssetBrowserDebugViewController * _assetCollectionViewController;
    PHFetchResult * _tripHighlights;
}

- (void).cxx_destruct;
- (void)_fetchHighlights;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)init;
- (bool)updateSpec;
- (void)viewDidLoad;

@end
