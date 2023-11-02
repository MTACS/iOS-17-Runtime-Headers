
@interface HUProgrammableSwitchEventOptionItem : HUCharacteristicEventOptionItem {
    <HFCharacteristicValueSource> * _valueSource;
}

@property (nonatomic, readonly) HMCharacteristic *characteristic;
@property (nonatomic, retain) <HFCharacteristicValueSource> *valueSource;

+ (id)_buildOutTriggerEditorOptionsForCharacteristic:(id)arg1 triggerValue:(id)arg2 latestResults:(id)arg3;
+ (id)_longformTitleForCharacteristic:(id)arg1 latestResults:(id)arg2;
+ (id)_sectionTitleForCharacteristic:(id)arg1 latestResults:(id)arg2;
+ (id)_shortformTitleForLatestResults:(id)arg1;
+ (id)_triggerBuilderContextAwareTitleForCharacteristic:(id)arg1 latestResults:(id)arg2;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)characteristic;
- (id)initWithCharacteristic:(id)arg1 triggerValue:(id)arg2 valueSource:(id)arg3;
- (id)initWithCharacteristics:(id)arg1 thresholdValueRange:(id)arg2;
- (id)initWithCharacteristics:(id)arg1 triggerValue:(id)arg2;
- (id)initWithCharacteristics:(id)arg1 triggerValueRange:(id)arg2;
- (void)setValueSource:(id)arg1;
- (id)valueSource;

@end
