
@protocol SAUILayoutSpecifyingOverriding <SABehaviorOverriding, SAUILayoutSpecifyingPrivate>

@required

- (<SAUILayoutSpecifyingOverridingParticipant> *)layoutSpecifyingOverridingParticipantSubordinateToParticipant:(id <SAUILayoutSpecifyingOverridingParticipant>)arg1 thatRespondsToSelector:(SEL)arg2;
- (<SAUILayoutSpecifyingOverridingParticipant> *)layoutSpecifyingOverridingParticipantSuperiorToParticipant:(id <SAUILayoutSpecifyingOverridingParticipant>)arg1 thatRespondsToSelector:(SEL)arg2;
- (<SAUILayoutSpecifying> *)layoutSpecifyingOverridingTarget;

@end
