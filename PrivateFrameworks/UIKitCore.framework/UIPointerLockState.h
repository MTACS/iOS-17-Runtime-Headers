
@interface UIPointerLockState : NSObject <_UISceneComponentProviding> {
    UIScene * _scene;
    long long  _status;
}

@property (getter=_scene, setter=_setScene:, nonatomic) UIScene *_scene;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isLocked, nonatomic, readonly) bool locked;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_pointerLockStatusUpdated;
- (void)_preferredPointerLockStatusUpdated;
- (id)_scene;
- (void)_setScene:(id)arg1;
- (id)_settingsDiffActionsForScene:(id)arg1;
- (id)_windowScene;
- (id)initWithScene:(id)arg1;
- (bool)isLocked;
- (id)windowHostingScene;

@end
