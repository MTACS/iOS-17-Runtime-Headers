
@interface SBFLegacyWallpaperWakeAnimator : NSObject <SBFScreenWakeAnimationTarget> {
    UIVisualEffectView * _wakeEffectView;
    long long  _wakeState;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) UIVisualEffectView *wakeEffectView;
@property (nonatomic) long long wakeState;

- (void).cxx_destruct;
- (bool)_shouldHideWakeEffectViewAfterUpdate;
- (long long)_targetWakeStateForFadeIn:(bool)arg1;
- (id)_wakeEffectsForAnimatingWakeState:(long long)arg1;
- (id)_wakeEffectsForPersistentWakeState:(long long)arg1;
- (void)removeAllWakeEffects;
- (void)setWakeEffectView:(id)arg1;
- (void)setWakeState:(long long)arg1;
- (void)updateWakeEffectsForWake:(bool)arg1;
- (void)updateWakeEffectsForWake:(bool)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (id)wakeEffectView;
- (long long)wakeState;

@end
