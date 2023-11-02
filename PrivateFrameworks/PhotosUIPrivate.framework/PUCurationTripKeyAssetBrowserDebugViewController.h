
@interface PUCurationTripKeyAssetBrowserDebugViewController : PUPhotosAlbumViewController {
    PHFetchResult * _childHighlights;
    NSDictionary * _iconicSceneScores;
    PHPhotosHighlight * _tripHighlight;
    NSString * _tripKeyAssetUUID;
}

@property (nonatomic, retain) PHPhotosHighlight *tripHighlight;

- (void).cxx_destruct;
- (void)_update;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)iconicSceneScores:(id)arg1;
- (void)setTripHighlight:(id)arg1;
- (id)tripHighlight;
- (bool)updateSpec;
- (void)viewDidLoad;

@end
