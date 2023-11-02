
@interface VideosUI.UIFactory : NSObject <VUIDocumentCreator, _TVInterfaceCreatingPrivate>

- (void).cxx_destruct;
- (id)URLForResource:(id)arg1;
- (id)_imageProxyForIKElement:(id)arg1 withLayout:(id)arg2;
- (id)_viewControllerForIKElement:(id)arg1 existingViewController:(id)arg2;
- (id)_viewForIKElement:(id)arg1 existingView:(id)arg2;
- (id)createMultiPlayerViewControllerWithPlayerViewControllers:(id)arg1 showingDetails:(bool)arg2;
- (id)imageForResource:(id)arg1;
- (id)init;
- (bool)isDocumentViewController:(id)arg1 equalToViewController:(id)arg2;
- (id)playbackContainerViewController;
- (void)recordImpressionsForViewController:(id)arg1;
- (id)rootSplitViewController;
- (void)scrollViewControllerToTop:(id)arg1 animated:(bool)arg2 needsFocusUpdate:(bool)arg3;
- (id)viewControllerWithDocumentDataSource:(id)arg1 appContext:(id)arg2 documentOptions:(id)arg3;

@end
