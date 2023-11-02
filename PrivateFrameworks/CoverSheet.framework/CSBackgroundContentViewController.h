
@interface CSBackgroundContentViewController : CSCoverSheetViewControllerBase <SBFBacklightSceneHostEnvironmentProviding> {
    UIView<UIScenePresentation> * _presentationView;
    FBScene * _scene;
    <UIScenePresenter> * _scenePresenter;
}

@property (nonatomic, readonly) CSBackgroundContentView *backgroundContentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIView<UIScenePresentation> *presentationView;
@property (nonatomic, readonly) FBScene *scene;
@property (nonatomic, readonly) <UIScenePresenter> *scenePresenter;
@property (getter=isScreenOff, nonatomic, readonly) bool screenOff;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView<CSWallpaperView> *wallpaperView;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_updateForegroundState;
- (void)_updateUserInterfaceStyle;
- (id)backgroundContentView;
- (void)backlightLuminanceChangedForEnvironment:(id)arg1 previousTraitCollection:(id)arg2;
- (void)dealloc;
- (id)initWithScene:(id)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (bool)isScreenOff;
- (void)loadView;
- (id)presentationView;
- (id)scene;
- (id)sceneHostEnvironmentEntriesForBacklightSession;
- (id)scenePresenter;
- (void)tapGestureRecognizerAction:(id)arg1;
- (void)userInterfaceStyleChangedForEnvironment:(id)arg1 previousTraitCollection:(id)arg2;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (id)wallpaperView;

@end
