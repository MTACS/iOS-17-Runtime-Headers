
@interface CHUISWatchComplicationsWidgetSceneClientSettingsDiffContext : CHUISWidgetSceneClientSettingsDiffContext

@property (nonatomic, readonly) CHUISWatchComplicationsWidgetSceneClientSettings *currClientSettings;
@property (nonatomic, readonly) CHUISWatchComplicationsWidgetSceneClientSettings *prevClientSettings;
@property (nonatomic, readonly) FBSSceneTransitionContext *transitionContext;

- (id)initWithPreviousClientSettings:(id)arg1 currentClientSettings:(id)arg2 transitionContext:(id)arg3;

@end
