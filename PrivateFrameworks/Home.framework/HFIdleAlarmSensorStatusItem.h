
@interface HFIdleAlarmSensorStatusItem : HFAbstractGroupedStatusItem

+ (id)sortKey;
+ (id)statusItemClasses;

- (id)_subclass_updateWithOptions:(id)arg1;
- (id)iconDescriptorForRepresentedHomeKitObjects:(id)arg1;
- (bool)shouldEncapsulateItem:(id)arg1;

@end
