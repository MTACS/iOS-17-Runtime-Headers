
@interface _UIVisualEffectViewReversingEntry : _UIVisualEffectViewEntry {
    _UIVisualEffectViewEntry * _sourceEntry;
}

- (void).cxx_destruct;
- (void)addEffectToView:(id)arg1;
- (void)applyIdentityEffectToView:(id)arg1;
- (void)applyRequestedEffectToView:(id)arg1;
- (bool)canTransitionToEffect:(id)arg1;
- (id)copyForTransitionOut;
- (id)copyForTransitionToEffect:(id)arg1;
- (id)description;
- (id)initWithViewEntry:(id)arg1;
- (bool)isSameTypeOfEffect:(id)arg1;
- (void)removeEffectFromView:(id)arg1;
- (bool)shouldAnimateProperty:(id)arg1;

@end
