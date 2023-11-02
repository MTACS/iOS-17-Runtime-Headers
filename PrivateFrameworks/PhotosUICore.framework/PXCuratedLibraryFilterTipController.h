
@interface PXCuratedLibraryFilterTipController : NSObject <PXChangeObserver, PXCuratedLibraryGuestAssetTrackerDelegate, PXTipsPresentationDelegate> {
    bool  _curatedLibraryIsVisible;
    <PXCuratedLibraryFilterTipControllerDelegate> * _delegate;
    PXCuratedLibraryGuestAssetTracker * _guestAssetTracker;
    bool  _hasScheduledSharedLibraryFilterTip;
    bool  _isTipContentDelegate;
    PHPhotoLibrary * _photoLibrary;
    NSString * _presentedTipID;
    PXSharedLibraryStatusProvider * _sharedLibraryStatusProvider;
    id /* block */  _tipDismissedCompletion;
    NSObject<OS_dispatch_queue> * _tipKitAPIQueue;
    UITraitCollection * _traitCollection;
}

@property (nonatomic) bool curatedLibraryIsVisible;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXCuratedLibraryFilterTipControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PXCuratedLibraryGuestAssetTracker *guestAssetTracker;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isPresentingTipView;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *tipKitAPIQueue;
@property (nonatomic, copy) UITraitCollection *traitCollection;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_anchorViewRect;
- (void)_cancelTimerForSharedLibraryTip;
- (void)_dismissTipViewWithCompletion:(id /* block */)arg1 clientInitiated:(bool)arg2;
- (void)_presentSharedLibraryFilterTipIfPossible;
- (void)_presentTipViewController:(id)arg1;
- (bool)_shouldShowFilterTip:(id)arg1;
- (void)_startTimerForSharedLibraryFilterTip;
- (void)_updateControllerForSyndicatedAssetsTip;
- (bool)curatedLibraryIsVisible;
- (id)delegate;
- (void)didChangeFilterState:(id)arg1;
- (void)didLayoutAnchorView;
- (void)dismissTipViewWithCompletion:(id /* block */)arg1;
- (id)guestAssetTracker;
- (void)guestAssetsTracker:(id)arg1 canDisplayGuestAssets:(bool)arg2;
- (void)guestAssetsTracker:(id)arg1 isDisplayingGuestAssets:(bool)arg2;
- (id)initWithViewModel:(id)arg1 layout:(id)arg2;
- (bool)isPresentingTipView;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)prepareTipPopover:(id)arg1 tipID:(id)arg2;
- (id)presentationControllerForTipID:(id)arg1;
- (void)setCuratedLibraryIsVisible:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setTraitCollection:(id)arg1;
- (id)tipKitAPIQueue;
- (void)tipPopoverDidDismissWithTipID:(id)arg1;
- (id)traitCollection;
- (void)userDidChangeLibraryFilterState;

@end
