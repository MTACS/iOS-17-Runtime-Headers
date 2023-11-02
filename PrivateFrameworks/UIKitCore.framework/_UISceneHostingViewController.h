
@interface _UISceneHostingViewController : UIViewController <_UIEventDeferringRuleOwning> {
    _UISceneHostingController * _sceneHostingController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_wantsContentOverlayInsetsUpdatesWhileDismissing;

- (void).cxx_destruct;
- (void)_childViewControllerWillBePresentedFromViewControllerDelayingPresentationWithPresenter:(id)arg1;
- (long long)interfaceElementCategory;
- (void)loadView;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
