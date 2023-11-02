
@interface HFCharacteristicEventBuilder : HFEventBuilder <NAEquatable> {
    HMCharacteristic * _characteristic;
}

@property (nonatomic, readonly) HMCharacteristic *characteristic;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

+ (id)characteristicEventBuildersForEvents:(id)arg1 inHome:(id)arg2;

- (void).cxx_destruct;
- (id)_initWithCharacteristic:(id)arg1;
- (id)_initWithEvent:(id)arg1;
- (id)characteristic;
- (void)copyValuesFromCharacteristicEventBuilder:(id)arg1;
- (id)eventType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)triggeringValues;
- (bool)wouldFireForCharacteristic:(id)arg1 value:(id)arg2;

// Image: /System/Library/PrivateFrameworks/HomeRecommendationEngine.framework/HomeRecommendationEngine

- (id)recommendableObjectsInvolved;

@end
