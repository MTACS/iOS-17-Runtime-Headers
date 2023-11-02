
@interface SiriUINavigationContentViewController : UIViewController <SiriSharedUIContentPlatterViewControllerContaining> {
    UIViewController * _contentViewController;
}

@property (getter=isContentLayoutEnabled, nonatomic) bool contentLayoutEnabled;
@property (nonatomic, readonly) SiriSharedUIContentPlatterViewController *contentPlatterViewController;
@property (nonatomic, retain) UIViewController *contentViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)_navigationContentView;
- (id)contentPlatterViewController;
- (id)contentViewController;
- (void)contentViewDidUpdateSize;
- (bool)hasContentAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)isContentLayoutEnabled;
- (void)loadView;
- (void)setContentLayoutEnabled:(bool)arg1;
- (void)setContentViewController:(id)arg1;
- (id)title;
- (void)viewDidLoad;

@end
