
@interface _UIBacklightEnvironment : NSObject <BLSBacklightSceneEnvironmentDelegate, _UIWindowSceneComponentProviding> {
    NSHashTable * _observers;
    UIScene * _scene;
    bool  _shouldDeferWakeAnimationStart;
    BLSBacklightSceneVisualState * _visualState;
}

@property (getter=_scene, setter=_setScene:, nonatomic) UIScene *_scene;
@property (nonatomic, readonly) UITraitCollection *_traitOverrides;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool shouldDeferWakeAnimationStart;
@property (readonly) Class superclass;

+ (bool)_alwaysOnSupported;
+ (bool)_backlightEnvironmentSupported;
+ (double)_defaultAnimationDuration;
+ (void)_performOnChildViewControllersForAlwaysOnTimelines:(id)arg1 performBlock:(id /* block */)arg2 withCompletion:(id /* block */)arg3;
+ (id)_postSynchronizeQueue;

- (void).cxx_destruct;
- (void)_commit:(bool)arg1 andPerformPostSynchronizeBlock:(id /* block */)arg2;
- (void)_enumerateAllObserversWithBlock:(id /* block */)arg1;
- (void)_notifyObserversEnvironmentVisualStateWillChangeToState:(id)arg1;
- (void)_notifyObserversIfEnvironmentVisualStateDidChangeFromActiveOn:(id)arg1;
- (void)_notifyObserversIfEnvironmentVisualStateDidChangeToActiveOn:(id)arg1;
- (id)_scene;
- (void)_setScene:(id)arg1;
- (id)_traitOverrides;
- (id)_windowScene;
- (void)addObserver:(id)arg1;
- (void)environment:(id)arg1 performBacklightSceneUpdate:(id)arg2;
- (void)environment:(id)arg1 timelinesForDateInterval:(id)arg2 previousSpecifier:(id)arg3 completion:(id /* block */)arg4;
- (id)initWithScene:(id)arg1;
- (bool)isObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)setShouldDeferWakeAnimationStart:(bool)arg1;
- (bool)shouldDeferWakeAnimationStart;
- (void)transitionTraitsInUpdate:(id)arg1 animations:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)updateSceneWithFrameSpecifier:(id)arg1 layout:(bool)arg2 completion:(id /* block */)arg3;

@end
