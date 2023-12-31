
@interface PUAirPlayRootViewController : UIViewController {
    NSArray * __childViewConstraints;
    UIViewController * _childViewController;
}

@property (setter=_setChildViewConstraints:, nonatomic, copy) NSArray *_childViewConstraints;
@property (nonatomic, retain) UIViewController *childViewController;

- (void).cxx_destruct;
- (id)_childViewConstraints;
- (void)_setChildViewConstraints:(id)arg1;
- (id)childViewController;
- (void)setChildViewController:(id)arg1;
- (void)setChildViewController:(id)arg1 animated:(bool)arg2;
- (void)updateViewConstraints;
- (void)viewDidLoad;

@end
