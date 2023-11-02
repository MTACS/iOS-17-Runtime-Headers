
@interface HUCharacteristicEventOptionItem : HFItem {
    NSSet * _characteristics;
    HUCharacteristicEventOptionItem * _childItem;
    NSNumber * _thresholdValue;
    HMNumberRange * _thresholdValueRange;
    <NSCopying> * _triggerValue;
    HMNumberRange * _triggerValueRange;
}

@property (nonatomic, readonly) NSSet *characteristics;
@property (nonatomic, retain) HUCharacteristicEventOptionItem *childItem;
@property (nonatomic, readonly, copy) HMCharacteristic *mainCharacteristic;
@property (nonatomic, readonly) id representativeTriggerValue;
@property (nonatomic, retain) NSNumber *thresholdValue;
@property (nonatomic, readonly, copy) HMNumberRange *thresholdValueRange;
@property (nonatomic, readonly, copy) <NSCopying> *triggerValue;
@property (nonatomic, readonly, copy) HMNumberRange *triggerValueRange;
@property (nonatomic, readonly, copy) HMNumberRange *triggerValueRangeByApplyingThreshold;
@property (nonatomic, readonly, copy) NSArray *validTriggerValues;
@property (nonatomic, readonly, copy) NSArray *visibleTriggerValues;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)characteristics;
- (id)childItem;
- (id)init;
- (id)initWithCharacteristics:(id)arg1 thresholdValueRange:(id)arg2;
- (id)initWithCharacteristics:(id)arg1 triggerValue:(id)arg2;
- (id)initWithCharacteristics:(id)arg1 triggerValueRange:(id)arg2;
- (bool)isValidThresholdValue:(id)arg1;
- (id)localizedDescriptionForThresholdValue:(id)arg1;
- (id)localizedListDescriptionForThresholdValue:(id)arg1;
- (id)mainCharacteristic;
- (id)representativeTriggerValue;
- (void)setChildItem:(id)arg1;
- (void)setThresholdValue:(id)arg1;
- (id)thresholdValue;
- (id)thresholdValueRange;
- (id)triggerValue;
- (id)triggerValueRange;
- (id)triggerValueRangeByApplyingThreshold;
- (id)validTriggerValues;
- (id)visibleTriggerValues;

@end
