
@interface CKSyndicationPageViewController : UIViewController <UIGestureRecognizerDelegate, UIPageViewControllerDataSource, UIPageViewControllerDelegate> {
    double  _buttonTrayHeight;
    <CKSyndicationOnboardingPageViewControllerDelegate> * _delegate;
    NSMutableArray * _pageContent;
    UIPageControl * _pageControl;
    UIPageViewController * _pageViewController;
}

@property (nonatomic) double buttonTrayHeight;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKSyndicationOnboardingPageViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *pageContent;
@property (nonatomic, retain) UIPageControl *pageControl;
@property (nonatomic, retain) UIPageViewController *pageViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)buttonTrayHeight;
- (void)createContentPages;
- (id)delegate;
- (unsigned long long)indexOfViewController:(id)arg1;
- (id)pageContent;
- (id)pageControl;
- (void)pageControlChanged:(id)arg1;
- (id)pageViewController;
- (void)pageViewController:(id)arg1 didFinishAnimating:(bool)arg2 previousViewControllers:(id)arg3 transitionCompleted:(bool)arg4;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (void)pageViewController:(id)arg1 willTransitionToViewControllers:(id)arg2;
- (void)setButtonTrayHeight:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPageContent:(id)arg1;
- (void)setPageControl:(id)arg1;
- (void)setPageViewController:(id)arg1;
- (id)viewControllerAtIndex:(unsigned long long)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
