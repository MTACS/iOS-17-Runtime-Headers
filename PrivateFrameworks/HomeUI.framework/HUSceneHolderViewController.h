
@interface HUSceneHolderViewController : UIViewController <FBSceneObserver> {
    NSString * _bundleId;
    UIButton * _closeButton;
    RBSProcessIdentity * _processIdentity;
    FBScene * _scene;
    FBSSceneIdentity * _sceneIdentity;
    <UIScenePresenter> * _scenePresenter;
    FBApplicationUpdateScenesTransaction * _transaction;
    bool  _visible;
}

@property (nonatomic, readonly) NSString *bundleId;
@property (nonatomic, retain) UIButton *closeButton;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_lookupScene;
- (void)_updateScene;
- (id)bundleId;
- (void)close:(id)arg1;
- (id)closeButton;
- (void)dealloc;
- (void)didMoveToParentViewController:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1;
- (void)sceneDidInvalidate:(id)arg1;
- (void)setCloseButton:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(bool)arg2;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
