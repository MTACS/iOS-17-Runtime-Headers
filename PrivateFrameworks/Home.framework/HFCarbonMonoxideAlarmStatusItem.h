
@interface HFCarbonMonoxideAlarmStatusItem : HFAbstractAlarmStatusItem

+ (id)serviceTypes;

- (id)defaultTitleForRepresentedHomeKitObjects:(id)arg1;
- (id)iconDescription;
- (id)iconDescriptorForRepresentedHomeKitObjects:(id)arg1;
- (id)statusDescriptionAllNormal;
- (id)statusDescriptionMultipleTriggered:(unsigned long long)arg1;
- (id)statusDescriptionOneTriggered;

@end
