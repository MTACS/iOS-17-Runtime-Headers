
@interface HFCharacteristicThresholdRangeEventBuilder : HFCharacteristicEventBuilder <HFCharacteristicLikeEvent> {
    HMNumberRange * _thresholdRange;
}

@property (nonatomic, readonly) HMCharacteristic *characteristic;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) id hf_representativeTriggerValue;
@property (readonly) Class superclass;
@property (nonatomic, retain) HMNumberRange *thresholdRange;

+ (bool)_wouldFireForValue:(id)arg1 thresholdRange:(id)arg2 characteristic:(id)arg3;

- (void).cxx_destruct;
- (id)buildNewEventsFromCurrentState;
- (id)compareToObject:(id)arg1;
- (id)comparisonKey;
- (void)copyValuesFromCharacteristicEventBuilder:(id)arg1;
- (unsigned long long)hash;
- (id)hf_representativeTriggerValue;
- (bool)hf_wouldFireForValue:(id)arg1;
- (id)initWithCharacteristic:(id)arg1 thresholdRange:(id)arg2;
- (id)initWithEvent:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)naturalLanguageNameWithOptions:(id)arg1;
- (void)setThresholdRange:(id)arg1;
- (id)thresholdRange;
- (id)triggeringValues;
- (bool)wouldFireForCharacteristic:(id)arg1 value:(id)arg2;

@end
