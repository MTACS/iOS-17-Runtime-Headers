
@interface SBApplicationSceneViewController : SBSceneViewController <SBApplicationSceneViewControlling> {
    bool  __applicationStatusBarHidden;
    <SBApplicationSceneViewControllingStatusBarDelegate> * _applicationSceneStatusBarDelegate;
    SBStatusBarSettings * _overrideStatusBarSettings;
}

@property (getter=_isApplicationStatusBarHidden, nonatomic, readonly) bool _applicationStatusBarHidden;
@property (nonatomic) <SBApplicationSceneViewControllingStatusBarDelegate> *applicationSceneStatusBarDelegate;
@property (nonatomic, readonly) long long containerOrientation;
@property (nonatomic, readonly) long long contentOrientation;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } contentReferenceSize;
@property (nonatomic, retain) UIView *customContentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long displayMode;
@property (readonly) unsigned long long hash;
@property (getter=_overrideStatusBarSettings, setter=_setOverrideStatusBarSettings:, nonatomic, retain) SBStatusBarSettings *overrideStatusBarSettings;
@property (nonatomic, readonly) long long overrideStatusBarStyle;
@property (nonatomic, retain) <SBScenePlaceholderContentContext> *placeholderContentContext;
@property (nonatomic, readonly) SBApplicationSceneHandle *sceneHandle;
@property (getter=_sceneView, nonatomic, readonly) SBApplicationSceneView *sceneView;
@property (nonatomic, readonly) double statusBarAlpha;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)_applicationStatusBarAlpha;
- (bool)_isApplicationStatusBarHidden;
- (id)_overrideStatusBarSettings;
- (void)_setOverrideStatusBarSettings:(id)arg1;
- (id)applicationSceneStatusBarDelegate;
- (id)initWithSceneHandle:(id)arg1;
- (long long)overrideStatusBarStyle;
- (void)setApplicationSceneStatusBarDelegate:(id)arg1;
- (double)statusBarAlpha;

@end
