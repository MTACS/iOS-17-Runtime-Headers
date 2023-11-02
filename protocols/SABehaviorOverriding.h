
@protocol SABehaviorOverriding <NSObject>

@required

- (void)addBehaviorOverridingParticipant:(id <SABehaviorOverridingParticipant>)arg1;
- (<SABehaviorOverridingParticipant> *)behaviorOverridingParticipantSubordinateToParticipant:(id <SABehaviorOverridingParticipant>)arg1;
- (<SABehaviorOverridingParticipant> *)behaviorOverridingParticipantSuperiorToParticipant:(id <SABehaviorOverridingParticipant>)arg1;
- (id)behaviorOverridingTarget;
- (void)removeBehaviorOverridingParticipant:(id <SABehaviorOverridingParticipant>)arg1;
- (void)removeBehaviorOverridingParticipantWithRole:(long long)arg1;

@end
