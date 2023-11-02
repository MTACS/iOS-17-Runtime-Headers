
@interface SBSystemApertureSceneElementTransitionParameters : NSObject {
    BSSettings * _otherSystemApertureSceneSettingsToApply;
    struct CGSize { 
        double width; 
        double height; 
    }  _sceneSize;
    bool  _shouldSetForeground;
    UIApplicationSceneTransitionContext * _transitionContext;
    bool  _wantsForeground;
}

@property (nonatomic, copy) BSSettings *otherSystemApertureSceneSettingsToApply;
@property (nonatomic) struct CGSize { double x1; double x2; } sceneSize;
@property (nonatomic) bool shouldSetForeground;
@property (nonatomic, retain) UIApplicationSceneTransitionContext *transitionContext;
@property (nonatomic) bool wantsForeground;

- (void).cxx_destruct;
- (id)otherSystemApertureSceneSettingsToApply;
- (struct CGSize { double x1; double x2; })sceneSize;
- (void)setOtherSystemApertureSceneSettingsToApply:(id)arg1;
- (void)setSceneSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setShouldSetForeground:(bool)arg1;
- (void)setTransitionContext:(id)arg1;
- (void)setWantsForeground:(bool)arg1;
- (bool)shouldSetForeground;
- (id)transitionContext;
- (bool)wantsForeground;

@end
