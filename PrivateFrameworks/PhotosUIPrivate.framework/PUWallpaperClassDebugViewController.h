
@interface PUWallpaperClassDebugViewController : UICollectionViewController <PUPassiveContentDataSourceDelegate, PXOneUpPresentationDelegate> {
    PHSuggestion * _currentSuggestion;
    PUPassiveContentDataSource * _dataSource;
    NSDictionary * _keyAssetBySuggestionUUID;
    PXAssetsDataSourceManager * _oneUpDataSourceManager;
    PUParallaxLayerStackDebugViewController * _parallaxViewController;
    PUProgressIndicatorView * _progressIndicator;
    PUWallpaperDebugViewSpec * _spec;
}

@property (nonatomic, retain) PHSuggestion *currentSuggestion;
@property (nonatomic, retain) PUPassiveContentDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDictionary *keyAssetBySuggestionUUID;
@property (nonatomic, retain) PXAssetsDataSourceManager *oneUpDataSourceManager;
@property (nonatomic, retain) PUParallaxLayerStackDebugViewController *parallaxViewController;
@property (nonatomic, retain) PUProgressIndicatorView *progressIndicator;
@property (nonatomic, retain) PUWallpaperDebugViewSpec *spec;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 contextMenuConfigurationForItemAtIndexPath:(id)arg2 point:(struct CGPoint { double x1; double x2; })arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)contextMenuConfigurationForItemAtIndexPath:(id)arg1;
- (id)currentSuggestion;
- (id)dataSource;
- (void)dataSourceChanged:(id)arg1;
- (void)displayAsset:(id)arg1;
- (void)hideProgressIndicator;
- (id)initWithSpec:(id)arg1;
- (id)keyAssetBySuggestionUUID;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)oneUpDataSourceManager;
- (void)oneUpPresentation:(id)arg1 scrollAssetReferenceToVisible:(id)arg2;
- (id)oneUpPresentationDataSourceManager:(id)arg1;
- (id)oneUpPresentationInitialAssetReference:(id)arg1;
- (id)oneUpPresentationMediaProvider:(id)arg1;
- (long long)oneUpPresentationOrigin:(id)arg1;
- (id)parallaxViewController;
- (id)progressIndicator;
- (void)setCurrentSuggestion:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setKeyAssetBySuggestionUUID:(id)arg1;
- (void)setOneUpDataSourceManager:(id)arg1;
- (void)setParallaxViewController:(id)arg1;
- (void)setProgressIndicator:(id)arg1;
- (void)setSpec:(id)arg1;
- (void)showProgressIndicator:(id)arg1;
- (id)spec;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
