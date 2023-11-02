
@protocol _UISceneComponentProviding <NSObject>

@required

- (UIScene *)_scene;
- (void)_setScene:(UIScene *)arg1;
- (id)initWithScene:(UIScene *)arg1;

@optional

- (NSArray *)_actionHandlersForScene:(UIScene *)arg1;
- (NSArray *)_actionRespondersForScene:(UIScene *)arg1;
- (void)_scene:(UIScene *)arg1 didTransitionFromActivationState:(long long)arg2 withReasonsMask:(unsigned long long)arg3;
- (void)_scene:(UIScene *)arg1 willTransitionToActivationState:(long long)arg2 withReasonsMask:(unsigned long long)arg3;
- (void)_sceneWillInvalidate:(UIScene *)arg1;
- (NSArray *)_settingsDiffActionsForScene:(UIScene *)arg1;

@end
