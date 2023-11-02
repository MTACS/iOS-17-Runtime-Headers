
@interface SHSheetScene : NSObject <FBSceneDelegate, FBSceneObserver, _UIRemoteSheet> {
    _UISheetPresentationControllerConfiguration * __sheetConfiguration;
    bool  _activeUpdate;
    <SHSheetSceneDelegate> * _delegate;
    FBSDisplayConfiguration * _displayConfiguration;
    bool  _foreground;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _framePortrait;
    long long  _hostProcessType;
    long long  _interfaceOrientation;
    bool  _needsFenceAnimation;
    long long  _presentationStyle;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _safeAreaInsetsPortrait;
    FBScene * _scene;
    <UIScenePresenter> * _scenePresenter;
    <SHSheetSession> * _session;
    SHSheetUIServiceClientContext * _sessionContext;
    long long  _userInterfaceStyle;
    bool  _viewClipsToBounds;
}

@property (setter=_setSheetConfiguration:, nonatomic, retain) _UISheetPresentationControllerConfiguration *_sheetConfiguration;
@property (setter=_setViewClipsToBounds:, nonatomic) bool _viewClipsToBounds;
@property (nonatomic) bool activeUpdate;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SHSheetSceneDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) FBSDisplayConfiguration *displayConfiguration;
@property (nonatomic) bool foreground;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } framePortrait;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long hostProcessType;
@property (nonatomic, readonly) long long interfaceOrientation;
@property (nonatomic, readonly) bool isActive;
@property (nonatomic) bool needsFenceAnimation;
@property (nonatomic) long long presentationStyle;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } safeAreaInsetsPortrait;
@property (nonatomic, readonly) FBScene *scene;
@property (nonatomic, readonly) <UIScenePresenter> *scenePresenter;
@property (nonatomic, readonly) UIView *sceneView;
@property (nonatomic, readonly) <SHSheetSession> *session;
@property (nonatomic, retain) SHSheetUIServiceClientContext *sessionContext;
@property (readonly) Class superclass;
@property (nonatomic) long long userInterfaceStyle;

+ (id)sceneWorkspace;

- (void).cxx_destruct;
- (void)_configureSceneSettings:(id)arg1;
- (void)_didUpdateApplicationState:(id)arg1;
- (void)_registerForApplicationStateChangeNotification;
- (void)_setSheetConfiguration:(id)arg1;
- (void)_setViewClipsToBounds:(bool)arg1;
- (id)_sheetConfiguration;
- (void)_unregisterForApplicationStateChangeNotification;
- (void)_updateSettingsWithFence:(id /* block */)arg1 transitionCoordinator:(id)arg2;
- (bool)_viewClipsToBounds;
- (void)activate;
- (bool)activeUpdate;
- (void)dealloc;
- (id)delegate;
- (id)displayConfiguration;
- (bool)foreground;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })framePortrait;
- (long long)hostProcessType;
- (id)initWithSession:(id)arg1;
- (long long)interfaceOrientation;
- (void)invalidate;
- (bool)isActive;
- (bool)needsFenceAnimation;
- (long long)presentationStyle;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsetsPortrait;
- (id)scene;
- (void)scene:(id)arg1 didCompleteUpdateWithContext:(id)arg2 error:(id)arg3;
- (void)scene:(id)arg1 didReceiveActions:(id)arg2;
- (void)sceneDidDeactivate:(id)arg1 withError:(id)arg2;
- (id)scenePresenter;
- (id)sceneView;
- (void)sendAction:(id)arg1;
- (id)session;
- (id)sessionContext;
- (void)setActiveUpdate:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayConfiguration:(id)arg1;
- (void)setForeground:(bool)arg1;
- (void)setFramePortrait:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHostProcessType:(long long)arg1;
- (void)setInterfaceOrientation:(long long)arg1;
- (void)setNeedsFenceAnimation:(bool)arg1;
- (void)setPresentationStyle:(long long)arg1;
- (void)setSafeAreaInsetsPortrait:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSessionContext:(id)arg1;
- (void)setUserInterfaceStyle:(long long)arg1;
- (void)updateWithChange:(id /* block */)arg1;
- (void)updateWithChange:(id /* block */)arg1 transitionCoordinator:(id)arg2;
- (long long)userInterfaceStyle;

@end
