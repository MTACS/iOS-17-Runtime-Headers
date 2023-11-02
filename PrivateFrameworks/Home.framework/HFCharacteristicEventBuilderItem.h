
@interface HFCharacteristicEventBuilderItem : HFEventBuilderItem

@property (nonatomic, readonly) NSSet *characteristics;

- (id)_characteristicEventBuilderForCharacteristic:(id)arg1 triggerValue:(id)arg2;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)characteristics;
- (id)setCharacteristics:(id)arg1 triggerValue:(id)arg2;
- (bool)wouldFireForCharacteristic:(id)arg1 value:(id)arg2;

@end
