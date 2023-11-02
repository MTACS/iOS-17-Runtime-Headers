
@interface _UIWallpaperEffectEntry : _UIVisualEffectViewEntry {
    UIColor * _backgroundColor;
}

@property (retain) UIColor *backgroundColor;

- (void).cxx_destruct;
- (void)addEffectToView:(id)arg1;
- (void)applyIdentityEffectToView:(id)arg1;
- (void)applyRequestedEffectToView:(id)arg1;
- (id)backgroundColor;
- (bool)canTransitionToEffect:(id)arg1;
- (bool)isSameTypeOfEffect:(id)arg1;
- (void)setBackgroundColor:(id)arg1;

@end
