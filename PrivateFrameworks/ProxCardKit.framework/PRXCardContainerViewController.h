
@interface PRXCardContainerViewController : UIViewController <PRXCardContainerViewDelegate, PRXPullDismissalProvider, UINavigationControllerDelegate> {
    PRXFlowConfiguration * _configuration;
    PRXCardContainerView * _container;
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _containerLayoutMargins;
    UIViewController * _contentViewController;
    id /* block */  _didShowViewController;
    <PRXFlowDelegate> * _flowDelegate;
    bool  _legacyCard;
    UINavigationController * _mainNavigationController;
    PRXPullDismissalInteractionDriver * _pullDismissalInteractionDriver;
    PRXTransitioningController * _transitionController;
}

@property (nonatomic, readonly) PRXFlowConfiguration *configuration;
@property (nonatomic, readonly) UIViewController *contentViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ didShowViewController;
@property (nonatomic) <PRXFlowDelegate> *flowDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UINavigationController *mainNavigationController;
@property (nonatomic, readonly) PRXPullDismissalInteractionDriver *pullDismissalInteractionDriver;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (long long)_cardStyleForContentContainer:(id)arg1;
- (void)_commonInit;
- (struct CGSize { double x1; double x2; })_maximumCardSizeForContainerSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)_shouldLayoutViewControllerBeforeCalculatingSize:(id)arg1;
- (void)_updateCardSizeClassForContainerSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_updateContainerPreferredContentSize;
- (void)_updatePreferredContentSizeForViewController:(id)arg1 containerSize:(struct CGSize { double x1; double x2; })arg2;
- (void)backgroundTapped:(id)arg1;
- (id)configuration;
- (id)contentViewController;
- (id /* block */)didShowViewController;
- (id)flowDelegate;
- (id)init;
- (id)initAsSingleCardWithContentViewController:(id)arg1 containerLayoutMargins:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg2 configuration:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (void)loadView;
- (id)mainNavigationController;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(bool)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(bool)arg3;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (id)pullDismissalInteractionDriver;
- (void)setDidShowViewController:(id /* block */)arg1;
- (void)setFlowDelegate:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize { double x1; double x2; })arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
