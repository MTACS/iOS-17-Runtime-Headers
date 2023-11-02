
@interface PUCurationKeyAssetComparisonDebugViewController : PUPhotosAlbumViewController <UICollectionViewDataSource, UICollectionViewDelegate> {
    bool  _canLiveUpdate;
    NSMutableArray * _currentKeyAssets;
    NSArray * _highlights;
    NSMutableArray * _indexMap;
    NSMutableArray * _keyAssetReasons;
    NSMutableArray * _legacyKeyAssets;
    NSMutableArray * _modernKeyAssets;
    bool  _showsDifferentOnly;
    bool  _showsMeaningsOnly;
    NSArray * _visibleAssets;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_fetchHighlights;
- (void)didTapHeaderView:(id)arg1;
- (bool)shouldShowSectionHeaders;
- (void)toggleShowsDifferentOnly:(id)arg1;
- (void)toggleShowsMeaningsOnly:(id)arg1;
- (void)updateData;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end
