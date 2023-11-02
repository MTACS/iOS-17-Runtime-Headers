
@protocol SAUILayoutSpecifyingOverridingParticipant <SABehaviorOverridingParticipant>

@optional

- (bool)isInteractiveDismissalEnabledForTargetWithOverrider:(id <SAUILayoutSpecifyingOverriding>)arg1 isDefaultValue:(bool*)arg2;
- (bool)isMinimalPresentationPossibleForTargetWithOverrider:(id <SAUILayoutSpecifyingOverriding>)arg1 isDefaultValue:(bool*)arg2;
- (bool)isProvidedViewConcentric:(UIView *)arg1 inLayoutMode:(long long)arg2 forTargetWithOverrider:(id <SAUILayoutSpecifyingOverriding>)arg3 isDefaultValue:(bool*)arg4;
- (bool)isRequestingMenuPresentationForTargetWithOverrider:(id <SAUILayoutSpecifyingOverriding>)arg1 isDefaultValue:(bool*)arg2;
- (void)layoutHostContainerViewDidLayoutSubviews:(UIView *)arg1 forTargetWithOverrider:(id <SAUILayoutSpecifyingOverriding>)arg2;
- (void)layoutHostContainerViewWillLayoutSubviews:(UIView *)arg1 forTargetWithOverrider:(id <SAUILayoutSpecifyingOverriding>)arg2;
- (long long)layoutModeForTargetWithOverrider:(id <SAUILayoutSpecifyingOverriding>)arg1 isDefaultValue:(bool*)arg2;
- (<SAUILayoutModePreferring> *)layoutModePreferenceForTargetWithOverrider:(id <SAUILayoutSpecifyingOverriding>)arg1 isDefaultValue:(bool*)arg2;
- (long long)maximumSupportedLayoutModeForTargetWithOverrider:(id <SAUILayoutSpecifyingOverriding>)arg1 isDefaultValue:(bool*)arg2;
- (long long)minimumSupportedLayoutModeForTargetWithOverrider:(id <SAUILayoutSpecifyingOverriding>)arg1 isDefaultValue:(bool*)arg2;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })preferredEdgeOutsetsForLayoutMode:(long long)arg1 suggestedOutsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg2 maximumOutsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg3 forTargetWithOverrider:(id <SAUILayoutSpecifyingOverriding>)arg4 isDefaultValue:(bool*)arg5;
- (SAUIPreferredLayoutModeAssertion *)preferredLayoutModeAssertionForTargetWithOverrider:(id <SAUILayoutSpecifyingOverriding>)arg1 isDefaultValue:(bool*)arg2;
- (long long)preferredLayoutModeForTargetWithOverrider:(id <SAUILayoutSpecifyingOverriding>)arg1 isDefaultValue:(bool*)arg2;
- (void)setLayoutMode:(long long)arg1 reason:(long long)arg2 forTargetWithOverrider:(id <SAUILayoutSpecifyingOverriding>)arg3;
- (void)setPreferredLayoutMode:(long long)arg1 reason:(long long)arg2 forTargetWithOverrider:(id <SAUILayoutSpecifyingOverriding>)arg3;
- (struct CGSize { double x1; double x2; })sizeThatFitsSize:(struct CGSize { double x1; double x2; })arg1 forProvidedView:(UIView *)arg2 inLayoutMode:(long long)arg3 forTargetWithOverrider:(id <SAUILayoutSpecifyingOverriding>)arg4 isDefaultValue:(bool*)arg5;

@end
