
@interface CHUISWidgetSceneClientSettingsDiffContext : NSObject {
    CHUISWidgetSceneClientSettings * _currClientSettings;
    CHUISWidgetSceneClientSettings * _prevClientSettings;
    FBSSceneTransitionContext * _transitionContext;
}

@property (nonatomic, readonly) CHUISWidgetSceneClientSettings *currClientSettings;
@property (nonatomic, readonly) CHUISWidgetSceneClientSettings *prevClientSettings;
@property (nonatomic, readonly) FBSSceneTransitionContext *transitionContext;

- (void).cxx_destruct;
- (id)currClientSettings;
- (id)initWithPreviousClientSettings:(id)arg1 currentClientSettings:(id)arg2 transitionContext:(id)arg3;
- (id)prevClientSettings;
- (id)transitionContext;

@end
