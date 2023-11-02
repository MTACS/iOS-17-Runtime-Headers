
@interface HFAbstractRangeStatusItem : HFStatusItem <HFServiceLikeStatusItem>

+ (id)_defaultValueFormatter;
+ (unsigned long long)abstractCurrentModeInResponse:(id)arg1;
+ (unsigned long long)abstractTargetModeInResponse:(id)arg1;
+ (unsigned long long)badgeTypeForState:(long long)arg1;
+ (id)controllableServiceTypes;
+ (id)currentModeCharacteristicTypes;
+ (long long)currentStateForResponses:(id)arg1;
+ (id)currentValueCharacteristicType;
+ (id)customValueFormatter;
+ (id)descriptionStringForCharacteristicType:(id)arg1 withResponses:(id)arg2;
+ (id /* block */)displayValueComparator;
+ (id)formatValue:(id)arg1 forCharacteristic:(id)arg2;
+ (bool)isPercentRange;
+ (id)maximumTargetValueCharacteristicType;
+ (id)minimumTargetValueCharacteristicType;
+ (id)overrideValueDisplayRange;
+ (id)sensorServiceTypes;
+ (id)serviceTypes;
+ (bool)shouldShowAverageForRange:(id)arg1;
+ (unsigned long long)statusItemCategory;
+ (id)targetModeCharacteristicTypes;
+ (id)targetValueCharacteristicType;
+ (id)titleStringForState:(long long)arg1;
+ (id)unknownValueDescriptionString;
+ (id)valueRangeForCharacteristicType:(id)arg1 withResponses:(id)arg2;

- (id)_subclass_updateWithOptions:(id)arg1;
- (id)iconDescriptorForRepresentedHomeKitObjects:(id)arg1;

@end
