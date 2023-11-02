
@interface HFAirQualitySensorStatusItem : HFStatusItem <HFServiceLikeStatusItem>

+ (id)serviceTypes;

- (id)_subclass_updateWithOptions:(id)arg1;
- (bool)canRepresentAbnormalAndNormalHomeKitObjectsTogether;
- (id)defaultTitleForRepresentedHomeKitObjects:(id)arg1;
- (id)iconDescriptorForRepresentedHomeKitObjects:(id)arg1;

@end
