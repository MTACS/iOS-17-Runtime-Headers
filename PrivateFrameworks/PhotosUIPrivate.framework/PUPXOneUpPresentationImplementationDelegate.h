
@interface PUPXOneUpPresentationImplementationDelegate : NSObject <PXOneUpPresentationImplementationDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)oneUpPresentation:(id)arg1 canStartAnimated:(bool)arg2;
- (void)oneUpPresentation:(id)arg1 commitPreviewViewController:(id)arg2;
- (void)oneUpPresentation:(id)arg1 didDismissPreviewViewController:(id)arg2 committing:(bool)arg3;
- (bool)oneUpPresentation:(id)arg1 handlePresentingPinchGestureRecognizer:(id)arg2;
- (void)oneUpPresentation:(id)arg1 presentingViewControllerViewDidAppear:(bool)arg2;
- (void)oneUpPresentation:(id)arg1 presentingViewControllerViewDidDisappear:(bool)arg2;
- (void)oneUpPresentation:(id)arg1 presentingViewControllerViewIsAppearing:(bool)arg2;
- (void)oneUpPresentation:(id)arg1 presentingViewControllerViewWillAppear:(bool)arg2;
- (void)oneUpPresentation:(id)arg1 presentingViewControllerViewWillDisappear:(bool)arg2;
- (void)oneUpPresentation:(id)arg1 registerStateChangeHandler:(id /* block */)arg2;
- (bool)oneUpPresentation:(id)arg1 startWithConfigurationHandler:(id /* block */)arg2;
- (void)oneUpPresentation:(id)arg1 stopAnimated:(bool)arg2;
- (bool)oneUpPresentationCanStop:(id)arg1;
- (void)oneUpPresentationInvalidatePresentingGeometry:(id)arg1;
- (id)oneUpPresentationLastViewedAssetReference:(id)arg1;
- (id)previewViewControllerForOneUpPresentation:(id)arg1 allowingActions:(bool)arg2;

@end
