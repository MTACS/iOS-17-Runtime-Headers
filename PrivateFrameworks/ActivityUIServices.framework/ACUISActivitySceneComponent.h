
@interface ACUISActivitySceneComponent : NSObject <UIGestureRecognizerDelegate, _UIWindowSceneComponentProviding> {
    BSAbsoluteMachTimer * _delayedGestureActionTimer;
    NSMapTable * _dependencyRecognizersPerWindow;
    NSMapTable * _recognizersPerWindow;
    UIScene * _scene;
}

@property (getter=_scene, setter=_setScene:, nonatomic) UIScene *_scene;
@property (nonatomic, readonly) UITraitCollection *_traitOverrides;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) BSAbsoluteMachTimer *delayedGestureActionTimer;
@property (nonatomic, retain) NSMapTable *dependencyRecognizersPerWindow;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMapTable *recognizersPerWindow;
@property (readonly) Class superclass;

+ (void)load;

- (void).cxx_destruct;
- (void)_handleGestureChange:(id)arg1;
- (void)_handleGestureDependencyChange:(id)arg1;
- (void)_handleGestureState:(long long)arg1;
- (id)_scene;
- (void)_sendActions:(id)arg1;
- (void)_setScene:(id)arg1;
- (void)_windowBecameHidden:(id)arg1;
- (void)_windowDidBecomeVisible:(id)arg1;
- (void)dealloc;
- (id)delayedGestureActionTimer;
- (id)dependencyRecognizersPerWindow;
- (id)initWithScene:(id)arg1;
- (bool)isActivityScene:(id)arg1;
- (id)recognizersPerWindow;
- (void)setDelayedGestureActionTimer:(id)arg1;
- (void)setDependencyRecognizersPerWindow:(id)arg1;
- (void)setRecognizersPerWindow:(id)arg1;

@end
