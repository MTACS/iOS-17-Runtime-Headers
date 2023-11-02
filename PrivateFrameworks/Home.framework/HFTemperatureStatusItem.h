
@interface HFTemperatureStatusItem : HFAbstractRangeStatusItem

+ (unsigned long long)abstractCurrentModeInResponse:(id)arg1;
+ (unsigned long long)abstractTargetModeInResponse:(id)arg1;
+ (id)controllableServiceTypes;
+ (id)currentModeCharacteristicTypes;
+ (id)currentValueCharacteristicType;
+ (id)customValueFormatter;
+ (id /* block */)displayValueComparator;
+ (bool)isPercentRange;
+ (id)maximumTargetValueCharacteristicType;
+ (id)minimumTargetValueCharacteristicType;
+ (id)overrideValueDisplayRange;
+ (id)sensorServiceTypes;
+ (bool)shouldShowAverageForRange:(id)arg1;
+ (unsigned long long)statusItemCategory;
+ (id)targetModeCharacteristicTypes;
+ (id)targetValueCharacteristicType;
+ (id)titleStringForState:(long long)arg1;
+ (id)unknownValueDescriptionString;

- (id)defaultTitleForRepresentedHomeKitObjects:(id)arg1;
- (id)iconDescriptorForRepresentedHomeKitObjects:(id)arg1;

@end
