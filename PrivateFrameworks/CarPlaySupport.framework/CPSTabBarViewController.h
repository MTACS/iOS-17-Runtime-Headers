
@interface CPSTabBarViewController : UITabBarController <CPSBaseTemplateViewController, CPSTemplateEnvironmentDelegate, CPTabBarTemplateProviding, UITabBarControllerDelegate> {
    CPTemplate * _associatedTemplate;
    <CPTemplateDelegate> * _templateDelegate;
    CPSTemplateEnvironment * _templateEnvironment;
    NAFuture * _templateProviderFuture;
    <CPSTemplateViewControllerDelegate> * _viewControllerDelegate;
}

@property (nonatomic, retain) CPTemplate *associatedTemplate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *tabBarButtons;
@property (nonatomic, retain) <CPTemplateDelegate> *templateDelegate;
@property (nonatomic) CPSTemplateEnvironment *templateEnvironment;
@property (nonatomic, readonly) NAFuture *templateProviderFuture;
@property (nonatomic) <CPSTemplateViewControllerDelegate> *viewControllerDelegate;

- (void).cxx_destruct;
- (void)_cleanup;
- (void)_nowPlayingButtonTapped;
- (void)applicationDidBecomeNowPlayingApp:(bool)arg1;
- (id)associatedTemplate;
- (id)initWithTabBarTemplate:(id)arg1 templateDelegate:(id)arg2 templateEnvironment:(id)arg3;
- (void)invalidate;
- (void)removeFromParentViewController;
- (bool)restoresFocusAfterTransition;
- (void)setAssociatedTemplate:(id)arg1;
- (void)setTemplateDelegate:(id)arg1;
- (void)setTemplateEnvironment:(id)arg1;
- (void)setViewControllerDelegate:(id)arg1;
- (void)showNowPlayingButton:(bool)arg1;
- (id)tabBarButtons;
- (void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;
- (bool)tabBarController:(id)arg1 shouldSelectViewController:(id)arg2;
- (id)tabBarTemplate;
- (id)tabBarTemplateDelegate;
- (id)templateDelegate;
- (id)templateEnvironment;
- (id)templateProviderFuture;
- (id)viewControllerDelegate;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
