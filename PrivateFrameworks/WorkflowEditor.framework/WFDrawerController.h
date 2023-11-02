
@interface WFDrawerController : UIViewController <WFDrawerPaneContainerDelegate> {
    double  _bottomInset;
    <WFDrawerControllerDelegate> * _delegate;
    NSString * _drawerGroup;
    bool  _inTransition;
    UIViewController * _initializationViewController;
    NSArray * _paneContainers;
    NSMapTable * _paneContainersByViewControllers;
    unsigned long long  _previousVisibilityOfCoveredPaneContainer;
    double  _topInset;
}

@property (nonatomic) double bottomInset;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFDrawerControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *drawerGroup;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } drawerRect;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool inTransition;
@property (nonatomic, readonly) UIViewController *initializationViewController;
@property (nonatomic, readonly) NSArray *paneContainers;
@property (nonatomic, readonly) NSMapTable *paneContainersByViewControllers;
@property (nonatomic, readonly) unsigned long long previousVisibilityOfCoveredPaneContainer;
@property (readonly) Class superclass;
@property (nonatomic) double topInset;
@property (nonatomic, readonly) WFDrawerPaneContainer *topPaneContainer;
@property (nonatomic, readonly) UIViewController *topViewController;
@property (nonatomic) bool userInteractionEnabled;
@property (nonatomic, readonly) NSArray *viewControllers;
@property (nonatomic, readonly) unsigned long long visibility;

- (void).cxx_destruct;
- (double)bottomInset;
- (double)bottomInsetForPaneContainer:(id)arg1;
- (id)coveredPaneContainer;
- (id)delegate;
- (id)drawerGroup;
- (void)drawerPaneContainer:(id)arg1 didTransitionToVisibility:(unsigned long long)arg2;
- (void)drawerPaneContainer:(id)arg1 willTransitionToVisibility:(unsigned long long)arg2;
- (id)drawerPaneWithViewController:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })drawerRect;
- (double)heightForVisibility:(unsigned long long)arg1;
- (bool)inTransition;
- (id)init;
- (id)initWithRootViewController:(id)arg1;
- (id)initializationViewController;
- (void)loadView;
- (id)mutablePaneControllers;
- (id)paneContainerForViewController:(id)arg1;
- (id)paneContainers;
- (id)paneContainersByViewControllers;
- (bool)popViewControllerAnimated:(bool)arg1;
- (bool)popViewControllerToVisibility:(unsigned long long)arg1 dimming:(unsigned long long)arg2 animated:(bool)arg3;
- (unsigned long long)previousVisibilityOfCoveredPaneContainer;
- (bool)pushViewController:(id)arg1 withVisibility:(unsigned long long)arg2 dimming:(unsigned long long)arg3 animated:(bool)arg4;
- (id)scrollViewOccludingDrawerPaneInsideContainer:(id)arg1;
- (void)setBottomInset:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setTopInset:(double)arg1;
- (void)setUserInteractionEnabled:(bool)arg1;
- (void)setViewControllers:(id)arg1 animated:(bool)arg2;
- (double)topInset;
- (double)topInsetForPaneContainer:(id)arg1;
- (id)topPaneContainer;
- (id)topViewController;
- (void)transitionToVisibility:(unsigned long long)arg1 withDimming:(unsigned long long)arg2 animated:(bool)arg3;
- (void)transitionToVisibility:(unsigned long long)arg1 withDimming:(unsigned long long)arg2 animated:(bool)arg3 completion:(id /* block */)arg4;
- (bool)userInteractionEnabled;
- (id)viewControllers;
- (unsigned long long)visibility;

@end
