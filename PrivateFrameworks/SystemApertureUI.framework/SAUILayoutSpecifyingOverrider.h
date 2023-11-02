
@interface SAUILayoutSpecifyingOverrider : NSObject <SAUILayoutSpecifyingOverriding, SAUILayoutSpecifyingOverridingParticipant> {
    id  _behaviorOverridingTarget;
    NSPointerArray * _orderedBehaviorOverridingParticipants;
}

@property (nonatomic, readonly) long long behaviorOverridingRole;
@property (nonatomic, readonly) id behaviorOverridingTarget;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isInteractiveDismissalEnabled, nonatomic, readonly) bool interactiveDismissalEnabled;
@property (nonatomic) <SAUILayoutHosting> *layoutHost;
@property (nonatomic, readonly) long long layoutMode;
@property (nonatomic, readonly) <SAUILayoutModePreferring> *layoutModePreference;
@property (nonatomic, readonly) <SAUILayoutSpecifying> *layoutSpecifyingOverridingTarget;
@property (nonatomic, readonly) long long maximumSupportedLayoutMode;
@property (getter=isMinimalPresentationPossible, nonatomic, readonly) bool minimalPresentationPossible;
@property (nonatomic, readonly) long long minimumSupportedLayoutMode;
@property (nonatomic, readonly) long long preferredLayoutMode;
@property (nonatomic, readonly) SAUIPreferredLayoutModeAssertion *preferredLayoutModeAssertion;
@property (nonatomic, readonly, copy) NSArray *preferredLayoutModeAssertions;
@property (getter=isRequestingMenuPresentation, nonatomic, readonly) bool requestingMenuPresentation;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_behaviorOverridingParticipantSubordinate:(bool)arg1 toParticipant:(id)arg2 passingTest:(id /* block */)arg3;
- (id)_firstParticipantThatRespondsToSelector:(SEL)arg1;
- (void)addBehaviorOverridingParticipant:(id)arg1;
- (id)behaviorOverridingParticipantSubordinateToParticipant:(id)arg1;
- (id)behaviorOverridingParticipantSuperiorToParticipant:(id)arg1;
- (long long)behaviorOverridingRole;
- (id)behaviorOverridingTarget;
- (id)description;
- (id)initWithTarget:(id)arg1;
- (bool)isInteractiveDismissalEnabled;
- (bool)isInteractiveDismissalEnabledForTargetWithOverrider:(id)arg1 isDefaultValue:(bool*)arg2;
- (bool)isMinimalPresentationPossible;
- (bool)isMinimalPresentationPossibleForTargetWithOverrider:(id)arg1 isDefaultValue:(bool*)arg2;
- (bool)isProvidedViewConcentric:(id)arg1 inLayoutMode:(long long)arg2;
- (bool)isProvidedViewConcentric:(id)arg1 inLayoutMode:(long long)arg2 forTargetWithOverrider:(id)arg3 isDefaultValue:(bool*)arg4;
- (bool)isRequestingMenuPresentation;
- (bool)isRequestingMenuPresentationForTargetWithOverrider:(id)arg1 isDefaultValue:(bool*)arg2;
- (void)layoutHostContainerViewDidLayoutSubviews:(id)arg1;
- (void)layoutHostContainerViewDidLayoutSubviews:(id)arg1 forTargetWithOverrider:(id)arg2;
- (void)layoutHostContainerViewWillLayoutSubviews:(id)arg1;
- (void)layoutHostContainerViewWillLayoutSubviews:(id)arg1 forTargetWithOverrider:(id)arg2;
- (long long)layoutMode;
- (long long)layoutModeForTargetWithOverrider:(id)arg1 isDefaultValue:(bool*)arg2;
- (id)layoutModePreference;
- (id)layoutModePreferenceForTargetWithOverrider:(id)arg1 isDefaultValue:(bool*)arg2;
- (id)layoutSpecifyingOverridingParticipantSubordinateToParticipant:(id)arg1 thatRespondsToSelector:(SEL)arg2;
- (id)layoutSpecifyingOverridingParticipantSuperiorToParticipant:(id)arg1 thatRespondsToSelector:(SEL)arg2;
- (id)layoutSpecifyingOverridingTarget;
- (long long)maximumSupportedLayoutMode;
- (long long)maximumSupportedLayoutModeForTargetWithOverrider:(id)arg1 isDefaultValue:(bool*)arg2;
- (long long)minimumSupportedLayoutMode;
- (long long)minimumSupportedLayoutModeForTargetWithOverrider:(id)arg1 isDefaultValue:(bool*)arg2;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })preferredEdgeOutsetsForLayoutMode:(long long)arg1 suggestedOutsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg2 maximumOutsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg3;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })preferredEdgeOutsetsForLayoutMode:(long long)arg1 suggestedOutsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg2 maximumOutsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg3 forTargetWithOverrider:(id)arg4 isDefaultValue:(bool*)arg5;
- (long long)preferredLayoutMode;
- (id)preferredLayoutModeAssertion;
- (id)preferredLayoutModeAssertionForTargetWithOverrider:(id)arg1 isDefaultValue:(bool*)arg2;
- (id)preferredLayoutModeAssertions;
- (long long)preferredLayoutModeForTargetWithOverrider:(id)arg1 isDefaultValue:(bool*)arg2;
- (void)removeBehaviorOverridingParticipant:(id)arg1;
- (void)removeBehaviorOverridingParticipantWithRole:(long long)arg1;
- (void)setLayoutMode:(long long)arg1;
- (void)setLayoutMode:(long long)arg1 reason:(long long)arg2;
- (void)setLayoutMode:(long long)arg1 reason:(long long)arg2 forTargetWithOverrider:(id)arg3;
- (void)setPreferredLayoutMode:(long long)arg1 reason:(long long)arg2;
- (void)setPreferredLayoutMode:(long long)arg1 reason:(long long)arg2 forTargetWithOverrider:(id)arg3;
- (struct CGSize { double x1; double x2; })sizeThatFitsSize:(struct CGSize { double x1; double x2; })arg1 forProvidedView:(id)arg2 inLayoutMode:(long long)arg3;
- (struct CGSize { double x1; double x2; })sizeThatFitsSize:(struct CGSize { double x1; double x2; })arg1 forProvidedView:(id)arg2 inLayoutMode:(long long)arg3 forTargetWithOverrider:(id)arg4 isDefaultValue:(bool*)arg5;

@end
