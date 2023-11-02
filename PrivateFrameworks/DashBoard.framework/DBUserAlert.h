
@interface DBUserAlert : NSObject <BSInvalidatable> {
    URTAlert * _alert;
    DBEnvironmentConfiguration * _environmentConfiguration;
    long long  _preferredPresentationStyle;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _safeAreaInsets;
    FBScene * _scene;
    NSMutableDictionary * _scenePresentersByRequester;
    UIWindow * _window;
}

@property (nonatomic, readonly) URTAlert *alert;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) DBEnvironmentConfiguration *environmentConfiguration;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long preferredPresentationStyle;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } safeAreaInsets;
@property (nonatomic, retain) FBScene *scene;
@property (nonatomic, retain) NSMutableDictionary *scenePresentersByRequester;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIWindow *window;

- (void).cxx_destruct;
- (id)_alertViewController;
- (void)_createUserAlertScene;
- (id)alert;
- (id)environmentConfiguration;
- (id)initWithAlert:(id)arg1 preferredPresentationStyle:(long long)arg2 safeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3 environmentConfiguration:(id)arg4;
- (void)invalidate;
- (long long)preferredPresentationStyle;
- (id)presentationViewForRequester:(id)arg1;
- (void)relinquishPresentationForRequester:(id)arg1;
- (bool)requiresSafeAreaWindow;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsets;
- (id)scene;
- (id)scenePresentersByRequester;
- (void)setEnvironmentConfiguration:(id)arg1;
- (void)setSafeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setScene:(id)arg1;
- (void)setSceneFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 safeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (void)setScenePresentersByRequester:(id)arg1;
- (void)setUserInterfaceStyle:(long long)arg1;
- (void)setWindow:(id)arg1;
- (id)window;

@end
