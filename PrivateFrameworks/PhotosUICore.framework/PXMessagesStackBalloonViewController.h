
@interface PXMessagesStackBalloonViewController : UIViewController <PXMessagesStackViewDelegate> {
    bool  _allowAutoplay;
    PXAssetActionManager * _assetActionManager;
    PXAssetsDataSourceManager * _dataSourceManager;
    bool  _hasTransitionSnapshot;
    PXUIMediaProvider * _mediaProvider;
    PXMessagesStackView * _stackView;
}

@property (nonatomic, retain) PXAssetActionManager *assetActionManager;
@property (nonatomic, readonly) PXAssetsDataSourceManager *dataSourceManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PXUIMediaProvider *mediaProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_executeReuseTest;
- (void)_executeScroll;
- (void)_presentGridWithAssetReference:(id)arg1;
- (void)_toggleAdditionalItems;
- (void)_toggleAutoplay;
- (void)_togglePlayableLoading;
- (void)_toggleSnapshot;
- (id)assetActionManager;
- (id)dataSourceManager;
- (id)initWithCoder:(id)arg1;
- (id)initWithDataSourceManager:(id)arg1 mediaProvider:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)mediaProvider;
- (void)setAssetActionManager:(id)arg1;
- (void)stackView:(id)arg1 didSelectAssetReference:(id)arg2;
- (bool)stackView:(id)arg1 shouldAutoplayAsset:(id)arg2;
- (void)stackViewDidSelectAdditionalItemsCard:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
