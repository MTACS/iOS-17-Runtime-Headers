
@interface PUCurationTragicFailureInHighlightsGridDebugViewController : PUPhotosAlbumViewController <UICollectionViewDataSource, UICollectionViewDelegate> {
    NSArray * _allAssets;
    NSArray * _filteredAssets;
    PHPhotosHighlight * _highlight;
    PUCurationTragicFailureInHighlightsDebugViewController * _parentController;
    bool  _showsAll;
    bool  _showsNonMemorable;
    UIBarButtonItem * _showsNonMemorableButtonItem;
    bool  _showsPoorQuality;
    UIBarButtonItem * _showsPoorQualityButtonItem;
    bool  _showsTragicFailure;
    UIBarButtonItem * _showsTragicFailureButtonItem;
    NSDictionary * _utilityTypesByAssetUUID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PHPhotosHighlight *highlight;
@property (nonatomic, retain) PUCurationTragicFailureInHighlightsDebugViewController *parentController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_cloneAsset:(id)arg1 toDirectory:(id)arg2;
- (void)_fileRadarWithIncorrectAssets:(id)arg1;
- (void)_presentTapToRadar;
- (bool)_writeDiagnosticsToURL:(id)arg1 incorrectAssets:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)getTitle:(out id*)arg1 prompt:(out id*)arg2 shouldHideBackButton:(out bool*)arg3 leftBarButtonItems:(out id*)arg4 rightBarButtonItems:(out id*)arg5;
- (id)highlight;
- (id)initWithSpec:(id)arg1;
- (id)parentController;
- (void)setButton:(id)arg1 toOn:(bool)arg2;
- (void)setHighlight:(id)arg1;
- (void)setParentController:(id)arg1;
- (bool)shouldShowSectionHeaders;
- (void)toggleShowsAll:(id)arg1;
- (void)toggleShowsNonMemorable:(id)arg1;
- (void)toggleShowsPoorQuality:(id)arg1;
- (void)toggleShowsTragicFailure:(id)arg1;
- (void)update;
- (unsigned long long)utilityTypesWithAsset:(id)arg1 sceneClassifications:(id)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
