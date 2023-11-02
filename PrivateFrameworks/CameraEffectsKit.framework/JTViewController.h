
@interface JTViewController : UIViewController {
    bool  _debuggingUIEnabled;
    NSMutableArray * _suspendInteractionTags;
    NSMutableDictionary * _suspendedChildViewControllerRequests;
    UIViewController * _viewControllerDrivingStatusAppearance;
}

@property bool debuggingUIEnabled;
@property (nonatomic, retain) NSMutableArray *suspendInteractionTags;
@property (nonatomic, retain) NSMutableDictionary *suspendedChildViewControllerRequests;
@property (nonatomic, retain) JTView *view;
@property (nonatomic, retain) UIViewController *viewControllerDrivingStatusAppearance;

- (void).cxx_destruct;
- (bool)debuggingUIEnabled;
- (void)logSuspendedChildViewControllersToString:(id)arg1 indentLevel:(int)arg2;
- (void)logSuspendedViewControllers;
- (bool)prefersHomeIndicatorAutoHidden;
- (bool)prefersStatusBarHidden;
- (void)resumeInteractionForChildViewControllersWithTag:(id)arg1;
- (void)resumeInteractionWithTag:(id)arg1;
- (void)setChildViewControllerInteractionEnabledWithRequest:(id)arg1 enabled:(bool)arg2;
- (void)setDebuggingUIEnabled:(bool)arg1;
- (void)setSuspendInteractionTags:(id)arg1;
- (void)setSuspendedChildViewControllerRequests:(id)arg1;
- (void)setView:(id)arg1;
- (void)setViewControllerDrivingStatusAppearance:(id)arg1;
- (void)suspendChildViewControllersInteractionWithTag:(id)arg1 timeout:(double)arg2 excluding:(id)arg3;
- (id)suspendInteractionTags;
- (void)suspendInteractionWithTag:(id)arg1;
- (id)suspendedChildViewControllerRequests;
- (void)timeoutInteractionSuspended:(id)arg1;
- (id)view;
- (id)viewControllerDrivingStatusAppearance;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;

@end
