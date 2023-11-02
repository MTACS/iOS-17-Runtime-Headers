
@interface HFCharacteristicMultiValueEventBuilder : HFCharacteristicEventBuilder <HFCharacteristicLikeEvent> {
    <NSCopying> * _representativeTargetValue;
    NSSet * _triggerValues;
}

@property (nonatomic, readonly) HMCharacteristic *characteristic;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) id hf_representativeTriggerValue;
@property (nonatomic, retain) <NSCopying> *representativeTargetValue;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSSet *triggerValues;

- (void).cxx_destruct;
- (id)buildNewEventsFromCurrentState;
- (id)comparisonKey;
- (void)copyValuesFromCharacteristicEventBuilder:(id)arg1;
- (unsigned long long)hash;
- (id)hf_representativeTriggerValue;
- (id)initWithCharacteristic:(id)arg1 values:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)naturalLanguageNameWithOptions:(id)arg1;
- (id)representativeTargetValue;
- (void)setRepresentativeTargetValue:(id)arg1;
- (void)setTriggerValues:(id)arg1;
- (id)triggerValues;
- (id)triggeringValues;
- (bool)wouldFireForCharacteristic:(id)arg1 value:(id)arg2;

@end
