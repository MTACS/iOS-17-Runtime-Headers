
@interface CHUISWidgetSceneSettingsDiffContext : NSObject {
    CHUISWidgetSceneSettings * _currSettings;
    CHUISWidgetSceneSettings * _prevSettings;
    FBSSceneTransitionContext * _transitionContext;
}

@property (nonatomic, readonly) CHUISWidgetSceneSettings *currSettings;
@property (nonatomic, readonly) CHUISWidgetSceneSettings *prevSettings;
@property (nonatomic, readonly) FBSSceneTransitionContext *transitionContext;

- (void).cxx_destruct;
- (id)currSettings;
- (id)initWithPreviousSettings:(id)arg1 currentSettings:(id)arg2 transitionContext:(id)arg3;
- (id)prevSettings;
- (id)transitionContext;

@end
