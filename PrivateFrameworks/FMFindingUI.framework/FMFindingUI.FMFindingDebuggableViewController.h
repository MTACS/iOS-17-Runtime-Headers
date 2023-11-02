
@interface FMFindingUI.FMFindingDebuggableViewController : FMFindingUI.FMFindingViewController {
    void debugViewContainer;
    void debugViewController;
}

@property (nonatomic, readonly) bool canBecomeFirstResponder;

- (void).cxx_destruct;
- (bool)canBecomeFirstResponder;
- (id)initWithCoder:(id)arg1;
- (void)motionEnded:(long long)arg1 withEvent:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
