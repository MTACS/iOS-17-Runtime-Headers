
@interface PKNavigationController : UINavigationController <UINavigationControllerDelegate> {
    UIView * _backgroundView;
    UIVisualEffectView * _blurView;
    unsigned long long  _explicitlyDefinedSupportedInterfaceOrientations;
    bool  _hasExplicitlyDefinedSupportedInterfaceOrientations;
    bool  _hasStatusBarStyleOverride;
    PKStoreKitReviewPromptHelper * _reviewPromptHelper;
    long long  _statusBarStyleOverride;
    UIImageView * _wallpaperView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_updateBarAppearanceForViewController:(id)arg1 animated:(bool)arg2;
- (void)_updateWithWallpaperImage:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithRootViewController:(id)arg1;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(bool)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(bool)arg3;
- (long long)preferredStatusBarStyle;
- (void)promptAppStoreReviewForTrigger:(unsigned long long)arg1;
- (void)setCustomFormSheetPresentationStyleForiPad;
- (void)setNeedsNavigationBarUpdate;
- (void)setPageSheetPresentation;
- (void)setSupportedInterfaceOrientations:(unsigned long long)arg1;
- (void)setupBackgroundViewWithBlurEffect:(long long)arg1;
- (void)setupWallpaper;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
