
@interface VUILibraryProductViewController : VUILibraryStackViewController <UICollectionViewDataSource, VUIProductLockupViewDelegate, VUIRoundButtonDelegate> {
    VUIViewControllerContentPresenter * _contentPresenter;
    VUIDownloadButton * _downloadButton;
    VUIMediaItem * _mediaItem;
    VUILibraryProductInfoView * _productInfoView;
    VUIProductLockupView * _productLockupView;
}

@property (nonatomic, retain) VUIViewControllerContentPresenter *contentPresenter;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) VUIDownloadButton *downloadButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_productInfoViewWithMediaItem:(id)arg1;
- (id)_productLockupViewWithMediaItem:(id)arg1;
- (id)_productSectionForHeader:(id)arg1 data:(id)arg2 group:(id)arg3 maxItemCount:(unsigned long long)arg4;
- (void)_updateAfterContentWasManuallyDeleted:(bool)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)configureWithCollectionView:(id)arg1;
- (void)contentDescriptionExpanded;
- (id)contentPresenter;
- (void)didSelectButton:(id)arg1;
- (id)downloadButton;
- (id)initWithMediaItem:(id)arg1;
- (void)loadView;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)reportMetricsPageEvent;
- (void)setContentPresenter:(id)arg1;
- (void)setDownloadButton:(id)arg1;
- (void)start;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
