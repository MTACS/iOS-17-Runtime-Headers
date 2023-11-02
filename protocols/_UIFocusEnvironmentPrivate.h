
@protocol _UIFocusEnvironmentPrivate <UIFocusEnvironment>

@optional

- (bool)_allowsFocusToLeaveViaHeading:(unsigned long long)arg1;
- (bool)_isEligibleForFocusInteraction;
- (bool)_isEligibleForFocusOcclusion;
- (NSArray *)_linearFocusMovementSequences;
- (long long)_preferredFocusMovementStyle;
- (long long)_rotaryFocusMovementAxis;
- (void)_setNeedsNonDeferredFocusUpdate;
- (bool)areChildrenFocused;
- (void)setAreChildrenFocused:(bool)arg1;

@end
