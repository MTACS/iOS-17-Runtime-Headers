
@interface _PBFGalleryCollectionViewController : UICollectionViewController <PBFPosterGalleryAssetHelperDelegate, PBFPosterGalleryDataProviderObserver, UICollectionViewDataSourcePrefetching> {
    PBFApplicationStateMonitor * _applicationStateMonitor;
    PBFPosterGalleryAssetHelper * _assetHelper;
    UIView * _containerView;
    PBFPosterGalleryDataProvider * _dataProvider;
    <_PBFGalleryCollectionViewControllerDelegate> * _delegate;
    UICollectionViewDiffableDataSource * _diffableDataSource;
    NSMapTable * _displayedCellForIndexPath;
    UIViewController * _hostingViewController;
    PBFApplicationStateNode * _state;
}

@property (nonatomic, retain) PBFApplicationStateMonitor *applicationStateMonitor;
@property (nonatomic, retain) PBFPosterGalleryDataProvider *dataProvider;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_PBFGalleryCollectionViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIViewController *hostingViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applySnapshotFromDataProvider:(id)arg1;
- (void)_purgeSnapshots;
- (bool)_reloadCellForPosterPreviewIfVisible:(id)arg1;
- (void)_resetState;
- (void)_updateAssetHelperActiveContexts:(bool)arg1;
- (id)applicationStateMonitor;
- (void)assetHelper:(id)arg1 didUpdateAssetsForPosterPreview:(id)arg2;
- (void)assetHelper:(id)arg1 posterPreview:(id)arg2 teardownLiveViewController:(id)arg3;
- (void)assetHelper:(id)arg1 prepareForPosterPreview:(id)arg2 movingToLive:(id)arg3;
- (void)collectionView:(id)arg1 cancelPrefetchingForItemsAtIndexPaths:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)configureCell:(id)arg1 forCollectionView:(id)arg2 posterPreview:(id)arg3 indexPath:(id)arg4;
- (id)dataProvider;
- (void)dataProviderDidUpdate:(id)arg1;
- (void)dataProviderWillUpdate:(id)arg1;
- (id)delegate;
- (id)hostingViewController;
- (id)initWithCollectionViewLayout:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })previewFrameForScrollingPreviewWithIdentifierToVisible:(id)arg1;
- (void)setApplicationStateMonitor:(id)arg1;
- (void)setDataProvider:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHostingViewController:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
