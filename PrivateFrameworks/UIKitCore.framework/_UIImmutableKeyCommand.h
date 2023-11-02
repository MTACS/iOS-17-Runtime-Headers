
@interface _UIImmutableKeyCommand : UIKeyCommand

- (id)_immutableCopy;
- (id)_mutableCopyIfNeeded;
- (void)_setEnumerationPriority:(long long)arg1;
- (void)_setEventDeferringEnvironment:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setAllowsAutomaticLocalization:(bool)arg1;
- (void)setAllowsAutomaticMirroring:(bool)arg1;
- (void)setAttributes:(unsigned long long)arg1;
- (void)setDiscoverabilityTitle:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setTitle:(id)arg1;
- (void)setWantsPriorityOverSystemBehavior:(bool)arg1;

@end
