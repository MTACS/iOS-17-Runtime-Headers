
@interface _UIVisualEffectAlphaEntry : _UIVisualEffectViewEntry {
    double  _finalAlpha;
    double  _initialAlpha;
}

- (void)addEffectToView:(id)arg1;
- (void)applyIdentityEffectToView:(id)arg1;
- (void)applyRequestedEffectToView:(id)arg1;
- (id)copyForTransitionOut;
- (id)copyForTransitionToEffect:(id)arg1;
- (id)description;
- (id)initWithInitialAlpha:(double)arg1 finalAlpha:(double)arg2;
- (void)removeEffectFromView:(id)arg1;

@end
