
@interface _UISystemInputActivityManager : NSObject <_UISceneComponentProviding> {
    BSSimpleAssertion * __activeSystemInputInteraction;
    UIScene * _scene;
}

@property (nonatomic) BSSimpleAssertion *_activeSystemInputInteraction;
@property (getter=_scene, setter=_setScene:, nonatomic) UIScene *_scene;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_activeSystemInputInteraction;
- (id)_scene;
- (void)_setScene:(id)arg1;
- (void)_updateClientSettingsSystemInputActive:(bool)arg1;
- (id)beginTrackingSystemInputActivity;
- (id)initWithScene:(id)arg1;
- (void)set_activeSystemInputInteraction:(id)arg1;
- (id)windowHostingScene;

@end
