
@interface PUPXOneUpPresentationImplementation : NSObject <PUOneUpPresentationHelperAssetDisplayDelegate, PUOneUpPresentationHelperDelegate, PXRegionOfInterestProvider> {
    PUOneUpPresentationHelper * __helper;
    PXOneUpPresentation * __oneUpPresentation;
    id /* block */  _stateChangeHandler;
}

@property (nonatomic, readonly) PUOneUpPresentationHelper *_helper;
@property (nonatomic, readonly) PXOneUpPresentation *_oneUpPresentation;
@property (nonatomic, readonly) bool canStop;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PXAssetReference *lastViewedAssetReference;
@property (nonatomic, copy) id /* block */ stateChangeHandler;
@property (readonly) Class superclass;

+ (id)implementationForOneUpPresentation:(id)arg1;

- (void).cxx_destruct;
- (id)_helper;
- (id)_initWithOneUpPresentation:(id)arg1;
- (id)_oneUpPresentation;
- (bool)canStartAnimated:(bool)arg1;
- (bool)canStop;
- (void)commitPreviewViewController:(id)arg1;
- (void)didDismissPreviewViewController:(id)arg1 committing:(bool)arg2;
- (bool)handlePresentingPinchGestureRecognizer:(id)arg1;
- (id)init;
- (void)invalidatePresentingGeometry;
- (id)lastViewedAssetReference;
- (id)oneUpPresentationHelper:(id)arg1 currentImageForAssetReference:(id)arg2;
- (id)oneUpPresentationHelper:(id)arg1 regionOfInterestForAssetReference:(id)arg2 cropInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg3;
- (void)oneUpPresentationHelper:(id)arg1 scrollAssetReferenceToVisible:(id)arg2;
- (void)oneUpPresentationHelper:(id)arg1 shouldHideAssetReferences:(id)arg2;
- (unsigned long long)oneUpPresentationHelperAdditionalOptions:(id)arg1;
- (id)oneUpPresentationHelperOriginalViewController:(id)arg1;
- (bool)oneUpPresentationHelperPreventRevealInMomentAction:(id)arg1;
- (id)oneUpPresentationHelperScrollView:(id)arg1;
- (id)oneUpPresentationHelperSearchQueryMatchInfo:(id)arg1;
- (bool)oneUpPresentationHelperShouldAutoPlay:(id)arg1;
- (bool)oneUpPresentationHelperShouldLeaveContentOnSecondScreen:(id)arg1;
- (void)oneUpPresentationHelperStateDidChange:(id)arg1;
- (id)oneUpPresentationHelperViewController:(id)arg1;
- (id)oneUpPresentationHelperViewHostingTilingView:(id)arg1;
- (bool)oneUpPresentationHelperWantsShowInLibraryButton:(id)arg1;
- (long long)oneUpPresentationOrigin:(id)arg1;
- (void)presentingViewControllerViewDidAppear:(bool)arg1;
- (void)presentingViewControllerViewDidDisappear:(bool)arg1;
- (void)presentingViewControllerViewIsAppearing:(bool)arg1;
- (void)presentingViewControllerViewWillAppear:(bool)arg1;
- (void)presentingViewControllerViewWillDisappear:(bool)arg1;
- (id)previewViewControllerAllowingActions:(bool)arg1;
- (id)regionOfInterestForAssetReference:(id)arg1;
- (void)registerStateChangeHandler:(id /* block */)arg1;
- (void)setStateChangeHandler:(id /* block */)arg1;
- (bool)startWithConfigurationHandler:(id /* block */)arg1;
- (id /* block */)stateChangeHandler;
- (void)stopAnimated:(bool)arg1;

@end
