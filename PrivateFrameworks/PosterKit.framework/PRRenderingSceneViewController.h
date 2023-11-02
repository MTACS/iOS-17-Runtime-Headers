
@interface PRRenderingSceneViewController : PRSceneViewController <PRRenderingEnvironmentViewControllerDelegate> {
    UIButton * _button;
    PRPosterEnvironmentImpl * _environment;
    FBSMutableSceneSettings * _settings;
    bool  _showDebugGear;
}

@property (nonatomic) bool showDebugGear;

+ (id)role;

- (void).cxx_destruct;
- (void)_updateSceneSettings:(id)arg1 transitionContext:(id)arg2;
- (void)doThing;
- (void)environmentViewController:(id)arg1 didUpdateEnvironment:(id)arg2;
- (id)initWithProvider:(id)arg1 contents:(id)arg2 previewing:(bool)arg3;
- (void)setShowDebugGear:(bool)arg1;
- (bool)showDebugGear;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
