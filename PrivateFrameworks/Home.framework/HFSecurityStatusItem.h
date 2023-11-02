
@interface HFSecurityStatusItem : HFStatusItem <HFServiceLikeStatusItem>

+ (bool)_currentState:(long long)arg1 matchesTargetState:(long long)arg2;
+ (id)_legacy_shortDescriptionForSecuritySystemState:(long long)arg1;
+ (id)_shortDescriptionForSecuritySystemState:(long long)arg1;
+ (id)serviceTypes;

- (id)_subclass_updateWithOptions:(id)arg1;
- (id)iconDescriptorForRepresentedHomeKitObjects:(id)arg1;

@end
