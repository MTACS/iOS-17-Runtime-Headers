
@interface CHUISWatchComplicationsWidgetSceneSettingsDiffContext : CHUISWidgetSceneSettingsDiffContext

@property (nonatomic, readonly) CHUISWatchComplicationsWidgetSceneSettings *currSettings;
@property (nonatomic, readonly) CHUISWatchComplicationsWidgetSceneSettings *prevSettings;
@property (nonatomic, readonly) FBSSceneTransitionContext *transitionContext;

- (id)initWithPreviousSettings:(id)arg1 currentSettings:(id)arg2 transitionContext:(id)arg3;

@end
