
@interface HUPocketedContainerViewController : UIViewController <HUPreloadableViewController> {
    UIViewController * _contentViewController;
    UIVisualEffectView * _pocketBackgroundView;
    UIViewController * _pocketViewController;
}

@property (nonatomic, readonly) UIViewController *contentViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIVisualEffectView *pocketBackgroundView;
@property (nonatomic, retain) UIViewController *pocketViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_installContentViewController;
- (id)_installPocket;
- (id)_tearDownPocket;
- (id)contentViewController;
- (id)hu_preloadContent;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentViewController:(id)arg1;
- (id)initWithContentViewController:(id)arg1 pocketViewController:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)pocketBackgroundView;
- (id)pocketViewController;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)setPocketBackgroundView:(id)arg1;
- (void)setPocketViewController:(id)arg1;
- (void)setPreferredContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
