
@interface DBInstrumentClusterAppSceneViewController : UIViewController <BSInvalidatable, DBProcessMonitorObserving, FBSceneObserver> {
    <DBEnvironment> * _environment;
    NSString * _instrumentId;
    bool  _invalidated;
    NSURL * _lastClusterURL;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _layoutFrame;
    unsigned long long  _proxyAppCrashTally;
    NSString * _requester;
    double  _retryDelay;
    NSTimer * _retryTimer;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _safeAreaInsets;
    FBScene * _scene;
    UIView<UIScenePresentation> * _sceneHostView;
    NSString * _sceneID;
    <UIScenePresenter> * _scenePresenter;
    unsigned long long  _targetAppCrashTally;
    NSString * _targetBundleIdentifier;
    FBApplicationUpdateScenesTransaction * _transaction;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <DBEnvironment> *environment;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *instrumentId;
@property (nonatomic) bool invalidated;
@property (nonatomic, retain) NSURL *lastClusterURL;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } layoutFrame;
@property (nonatomic) unsigned long long proxyAppCrashTally;
@property (nonatomic, copy) NSString *requester;
@property (nonatomic) double retryDelay;
@property (nonatomic, retain) NSTimer *retryTimer;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } safeAreaInsets;
@property (nonatomic, retain) FBScene *scene;
@property (nonatomic, retain) UIView<UIScenePresentation> *sceneHostView;
@property (nonatomic, readonly) NSString *sceneID;
@property (nonatomic, retain) <UIScenePresenter> *scenePresenter;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long targetAppCrashTally;
@property (nonatomic, copy) NSString *targetBundleIdentifier;
@property (nonatomic, retain) FBApplicationUpdateScenesTransaction *transaction;

- (void).cxx_destruct;
- (id)_applicationInfo;
- (id)_applySceneSettingsToSettings:(id)arg1 foreground:(bool)arg2 sceneSpecification:(id)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frame;
- (void)_invalidateRetryTimer;
- (void)_invalidateScene;
- (void)_performSceneUpdateForeground:(bool)arg1;
- (void)_performSceneUpdateForeground:(bool)arg1 settings:(id)arg2;
- (id)_proxiedApplicationInfo;
- (void)_retryTimerFired:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_scaleFrameIfNecessary:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_sceneSafeAreaInsets;
- (id)_sceneSettingsCreateIfNecessary;
- (void)_scheduleForegroundRetry;
- (void)_updateSceneHostViewFrameScaleIfNecessary;
- (void)_updateSceneID;
- (void)backgroundScene;
- (id)environment;
- (void)foregroundSceneWithURL:(id)arg1;
- (id)initWithEnvironment:(id)arg1;
- (id)initWithEnvironment:(id)arg1 instrumentId:(id)arg2;
- (id)instrumentId;
- (void)invalidate;
- (bool)invalidated;
- (id)lastClusterURL;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })layoutFrame;
- (void)processMonitor:(id)arg1 didHandleDeathOfBundleIdentifier:(id)arg2;
- (void)processMonitor:(id)arg1 shouldHandleDeathOfBundleIdentifier:(id)arg2 isCrash:(bool)arg3;
- (unsigned long long)proxyAppCrashTally;
- (id)requester;
- (double)retryDelay;
- (id)retryTimer;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsets;
- (id)scene;
- (void)sceneDidInvalidate:(id)arg1;
- (id)sceneHostView;
- (id)sceneID;
- (id)scenePresenter;
- (void)setEnvironment:(id)arg1;
- (void)setInvalidated:(bool)arg1;
- (void)setLastClusterURL:(id)arg1;
- (void)setLayoutFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setProxyAppCrashTally:(unsigned long long)arg1;
- (void)setRequester:(id)arg1;
- (void)setRetryDelay:(double)arg1;
- (void)setRetryTimer:(id)arg1;
- (void)setSafeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setScene:(id)arg1;
- (void)setSceneHostView:(id)arg1;
- (void)setScenePresenter:(id)arg1;
- (void)setTargetAppCrashTally:(unsigned long long)arg1;
- (void)setTargetBundleIdentifier:(id)arg1;
- (void)setTransaction:(id)arg1;
- (unsigned long long)targetAppCrashTally;
- (id)targetBundleIdentifier;
- (id)transaction;
- (void)updateSceneWithAnimationSettings:(id)arg1;

@end
