
@interface HFCharacteristicTriggerBuilderInterface : HFEventTriggerBuilderInterface

@property (nonatomic, readonly) NSSet *characteristics;

- (id)characteristics;
- (void)removeAllCharacteristics;
- (void)removeCharacteristic:(id)arg1;
- (void)setCharacteristic:(id)arg1 triggerValue:(id)arg2;
- (void)setCharacteristic:(id)arg1 triggerValueRange:(id)arg2;
- (id)thresholdValueForCharacteristic:(id)arg1 thresholdValueRange:(id)arg2;
- (id)triggerValueForCharacteristic:(id)arg1;
- (bool)wouldFireForCharacteristic:(id)arg1 value:(id)arg2;

@end
