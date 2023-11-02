
@interface PUHorizontalAlbumListGadget : PXHorizontalCollectionGadget <PUStackedAlbumTransitionDelegate, PXAssetCollectionActionPerformerDelegate, PXNavigableCollectionContainer> {
    PUPhotoPinchGestureRecognizer * _pinchGestureRecognizer;
    PXGadgetOrbContext * _previewOrbContext;
    PUAlbumsGadgetProvider * _provider;
    PUSessionInfo * _sessionInfo;
    bool  _shouldUseSingleHeightLayout;
    NSUserActivity * _siriActionActivity;
}

@property (nonatomic, readonly) PUAlbumListViewControllerSpec *albumListViewControllerSpec;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <PXMemoryAssetsActionFactory> *memoryAssetsActionFactory;
@property (nonatomic, readonly) PUPhotoPinchGestureRecognizer *pinchGestureRecognizer;
@property (nonatomic, retain) PXGadgetOrbContext *previewOrbContext;
@property (nonatomic, readonly) PUAlbumsGadgetProvider *provider;
@property (nonatomic, retain) PUSessionInfo *sessionInfo;
@property (nonatomic) bool shouldUseSingleHeightLayout;
@property (nonatomic, retain) NSUserActivity *siriActionActivity;
@property (readonly) Class superclass;

+ (bool)_showsHorizontalScrollIndicator;

- (void).cxx_destruct;
- (bool)_canUseStackedAlbumTransitionToNavigationToCollection:(id)arg1;
- (void)_handlePinch:(id)arg1;
- (void)_navigateToCollection:(id)arg1 animated:(bool)arg2 interactive:(bool)arg3 completion:(id /* block */)arg4;
- (void)_updateCollectionHeight;
- (void)_updateCollectionViewLayout;
- (id)accessoryButtonTitle;
- (unsigned long long)accessoryButtonType;
- (bool)actionPerformer:(id)arg1 dismissViewController:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)actionPerformer:(id)arg1 presentViewController:(id)arg2;
- (id)albumListViewControllerSpec;
- (bool)canNavigateToCollection:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 performDropWithCoordinator:(id)arg2;
- (bool)collectionView:(id)arg1 shouldSpringLoadItemAtIndexPath:(id)arg2 withContext:(id)arg3;
- (void)commitPreviewView:(id)arg1;
- (void)commitPreviewViewController:(id)arg1;
- (id)contextMenuWithSuggestedActions:(id)arg1;
- (void)didDismissPreviewViewController:(id)arg1 committing:(bool)arg2;
- (void)didDismissPreviewWithPreviewView:(id)arg1 committing:(bool)arg2;
- (void)gadget:(id)arg1 didChange:(unsigned long long)arg2;
- (unsigned long long)gadgetCapabilities;
- (unsigned long long)gadgetType;
- (id)init;
- (id)initWithAlbumsGadgetProvider:(id)arg1;
- (void)navigateToCollection:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (id)pinchGestureRecognizer;
- (id)previewContextGadget;
- (id)previewOrbContext;
- (id)previewParametersForTargetPreviewView:(id)arg1;
- (id)previewViewControllerAtLocation:(struct CGPoint { double x1; double x2; })arg1 fromSourceView:(id)arg2;
- (id)provider;
- (id)px_gridPresentation;
- (id)sessionInfo;
- (void)setGadgetSpec:(id)arg1;
- (void)setPreviewOrbContext:(id)arg1;
- (void)setSessionInfo:(id)arg1;
- (void)setShouldUseSingleHeightLayout:(bool)arg1;
- (void)setSiriActionActivity:(id)arg1;
- (bool)shouldUseSingleHeightLayout;
- (id)siriActionActivity;
- (id)stackedAlbumTransition:(id)arg1 layoutForCollection:(id)arg2 forCollectionView:(id)arg3;
- (id)stackedAlbumTransition:(id)arg1 layoutForPHCollection:(id)arg2 forCollectionView:(id)arg3;
- (void)stackedAlbumTransition:(id)arg1 setVisibility:(bool)arg2 forCollection:(id)arg3;
- (void)stackedAlbumTransition:(id)arg1 setVisibility:(bool)arg2 forPHCollection:(id)arg3;
- (id)targetPreviewViewForLocation:(struct CGPoint { double x1; double x2; })arg1 inCoordinateSpace:(id)arg2;
- (id)undoManagerForActionPerformer:(id)arg1;
- (void)viewDidLoad;

@end
