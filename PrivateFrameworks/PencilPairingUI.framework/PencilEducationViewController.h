
@interface PencilEducationViewController : UIViewController <PKScribbleInteractionDelegate, PencilEducationElementViewControllerDelegate> {
    unsigned long long  _animationBeginRequestIndex;
    NSDate * _appearDate;
    UIView * _containerView;
    <PencilEducationViewControllerDelegate> * _delegate;
    bool  _didDisappear;
    bool  _didRunInitialAppearActions;
    PencilEducationElementViewController * _displayedController;
    unsigned long long  _pendingTransitionIndex;
    UISegmentedControl * _segmentedControl;
    bool  _setupComplete;
    NSMutableArray * _viewControllers;
}

@property (nonatomic) unsigned long long animationBeginRequestIndex;
@property (nonatomic, retain) NSDate *appearDate;
@property (nonatomic, retain) UIView *containerView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PencilEducationViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didDisappear;
@property (nonatomic) bool didRunInitialAppearActions;
@property (nonatomic, retain) PencilEducationElementViewController *displayedController;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isAnimating;
@property (nonatomic) unsigned long long pendingTransitionIndex;
@property (nonatomic, retain) UISegmentedControl *segmentedControl;
@property (nonatomic) bool setupComplete;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableArray *viewControllers;

+ (id)localizedTitle;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_configureViewControllersIfNecessary;
- (void)addControllerToContainer:(id)arg1;
- (unsigned long long)animationBeginRequestIndex;
- (id)appearDate;
- (void)beginAnimationIfNecessaryForElementController:(id)arg1 delay:(double)arg2;
- (double)calculateFittingHeightByTemporarilyAdjustingFrameForWidth:(double)arg1;
- (void)cancelScheduledAnimations;
- (id)containerView;
- (void)dealloc;
- (id)delegate;
- (bool)didDisappear;
- (bool)didRunInitialAppearActions;
- (id)displayedController;
- (void)doneButtonPressed:(id)arg1;
- (void)elementControllerDidAppear:(id)arg1;
- (void)elementControllerWillReplay:(id)arg1;
- (bool)isAnimating;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (unsigned long long)pendingTransitionIndex;
- (id)segmentedControl;
- (void)segmentedControlDidChange:(id)arg1;
- (void)setAnimationBeginRequestIndex:(unsigned long long)arg1;
- (void)setAppearDate:(id)arg1;
- (void)setContainerView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDidDisappear:(bool)arg1;
- (void)setDidRunInitialAppearActions:(bool)arg1;
- (void)setDisplayedController:(id)arg1;
- (void)setPendingTransitionIndex:(unsigned long long)arg1;
- (void)setSegmentedControl:(id)arg1;
- (void)setSetupComplete:(bool)arg1;
- (void)setViewControllers:(id)arg1;
- (bool)setupComplete;
- (bool)shouldBeginAnimationForElementController:(id)arg1;
- (id)traitCollection;
- (id)viewControllers;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;

@end
