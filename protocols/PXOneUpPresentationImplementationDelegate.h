
@protocol PXOneUpPresentationImplementationDelegate <NSObject>

@required

- (void)oneUpPresentation:(PXOneUpPresentation *)arg1 commitPreviewViewController:(UIViewController *)arg2;
- (void)oneUpPresentation:(PXOneUpPresentation *)arg1 didDismissPreviewViewController:(UIViewController *)arg2 committing:(bool)arg3;
- (void)oneUpPresentation:(void *)arg1 registerStateChangeHandler:(void *)arg2; // needs 2 arg types, found 7: PXOneUpPresentation *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (bool)oneUpPresentation:(void *)arg1 startWithConfigurationHandler:(void *)arg2; // needs 2 arg types, found 7: PXOneUpPresentation *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <PXOneUpPresentationConfiguration> *, void*
- (void)oneUpPresentation:(PXOneUpPresentation *)arg1 stopAnimated:(bool)arg2;
- (UIViewController *)previewViewControllerForOneUpPresentation:(PXOneUpPresentation *)arg1 allowingActions:(bool)arg2;

@optional

- (bool)oneUpPresentation:(PXOneUpPresentation *)arg1 canStartAnimated:(bool)arg2;
- (bool)oneUpPresentation:(PXOneUpPresentation *)arg1 handlePresentingPinchGestureRecognizer:(UIPinchGestureRecognizer *)arg2;
- (void)oneUpPresentation:(PXOneUpPresentation *)arg1 presentingViewControllerViewDidAppear:(bool)arg2;
- (void)oneUpPresentation:(PXOneUpPresentation *)arg1 presentingViewControllerViewDidDisappear:(bool)arg2;
- (void)oneUpPresentation:(PXOneUpPresentation *)arg1 presentingViewControllerViewIsAppearing:(bool)arg2;
- (void)oneUpPresentation:(PXOneUpPresentation *)arg1 presentingViewControllerViewWillAppear:(bool)arg2;
- (void)oneUpPresentation:(PXOneUpPresentation *)arg1 presentingViewControllerViewWillDisappear:(bool)arg2;
- (bool)oneUpPresentationCanStop:(PXOneUpPresentation *)arg1;
- (void)oneUpPresentationInvalidatePresentingGeometry:(PXOneUpPresentation *)arg1;
- (PXAssetReference *)oneUpPresentationLastViewedAssetReference:(PXOneUpPresentation *)arg1;

@end
