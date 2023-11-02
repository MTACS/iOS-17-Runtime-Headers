
@interface HFCharacteristicValueEventBuilder : HFCharacteristicEventBuilder <HFCharacteristicLikeEvent> {
    <NSCopying> * _triggerValue;
}

@property (nonatomic, readonly) HMCharacteristic *characteristic;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) id hf_representativeTriggerValue;
@property (readonly) Class superclass;
@property (nonatomic, retain) <NSCopying> *triggerValue;

- (void).cxx_destruct;
- (id)buildNewEventsFromCurrentState;
- (id)compareToObject:(id)arg1;
- (id)comparisonKey;
- (void)copyValuesFromCharacteristicEventBuilder:(id)arg1;
- (unsigned long long)hash;
- (id)hf_representativeTriggerValue;
- (id)initWithCharacteristic:(id)arg1 triggerValue:(id)arg2;
- (id)initWithEvent:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)naturalLanguageNameWithOptions:(id)arg1;
- (void)setTriggerValue:(id)arg1;
- (id)triggerValue;
- (id)triggeringValues;
- (bool)wouldFireForCharacteristic:(id)arg1 value:(id)arg2;

@end
