
@interface _UISceneDisplayLink : NSObject <_UISceneComponentProviding> {
    CADisplayLink * _displayLink;
    UIScene * _scene;
    NSMutableArray * _targetsAndActions;
}

@property (getter=_scene, setter=_setScene:, nonatomic) UIScene *_scene;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sceneDisplayLinkForWindowScene:(id)arg1;

- (void).cxx_destruct;
- (void)_displayLinkTick:(id)arg1;
- (id)_scene;
- (void)_scene:(id)arg1 didTransitionFromActivationState:(long long)arg2 withReasonsMask:(unsigned long long)arg3;
- (void)_setScene:(id)arg1;
- (void)_updateStatus;
- (id)initWithScene:(id)arg1;
- (void)registerTarget:(id)arg1 action:(SEL)arg2;
- (void)unregisterTarget:(id)arg1 action:(SEL)arg2;

@end
