
@interface GKViewController : UIViewController {
    GKColorPalette * _colorPalette;
    GKViewController * _rootViewController;
    bool  _shouldUpdateContentOnlyWhenAuthenticated;
}

@property (nonatomic, retain) GKColorPalette *colorPalette;
@property (nonatomic, retain) GKViewController *rootViewController;
@property (nonatomic) bool shouldUpdateContentOnlyWhenAuthenticated;

+ (bool)_shouldForwardViewWillTransitionToSize;

- (void).cxx_destruct;
- (id)colorPalette;
- (bool)displayUsingSplitNavigationBar;
- (void)loadView;
- (void)popToRootViewControllerAnimated:(bool)arg1;
- (id)rootViewController;
- (void)setColorPalette:(id)arg1;
- (void)setRootViewController:(id)arg1;
- (void)setShouldUpdateContentOnlyWhenAuthenticated:(bool)arg1;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (bool)shouldUpdateContentOnlyWhenAuthenticated;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
