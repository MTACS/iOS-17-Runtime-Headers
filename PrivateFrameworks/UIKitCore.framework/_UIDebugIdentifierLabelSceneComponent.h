
@interface _UIDebugIdentifierLabelSceneComponent : NSObject <_UISceneComponentProviding> {
    _UIDebugIdentifierWindow * _debugWindow;
    UIScene * _scene;
}

@property (getter=_scene, setter=_setScene:, nonatomic) UIScene *_scene;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)isEnabled;

- (void).cxx_destruct;
- (id)_scene;
- (void)_scene:(id)arg1 willTransitionToActivationState:(long long)arg2 withReasonsMask:(unsigned long long)arg3;
- (void)_setScene:(id)arg1;
- (id)initWithScene:(id)arg1;

@end
