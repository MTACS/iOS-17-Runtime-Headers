
@interface HFHomePodTimerControlItem : HFControlItem <NAIdentifiable> {
    <HFMediaProfileContainer> * _mediaProfileContainer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <HFMediaProfileContainer> *mediaProfileContainer;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HFHomeKitSettingsValueManager *valueManager;

+ (id)na_identity;
+ (Class)valueClass;

- (void).cxx_destruct;
- (id)characteristicValuesForValue:(id)arg1;
- (id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2;
- (unsigned long long)hash;
- (id)initWithMediaProfileContainer:(id)arg1 displayResults:(id)arg2;
- (id)initWithValueSource:(id)arg1 characteristicOptions:(id)arg2 displayResults:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)mediaProfileContainer;
- (id)normalizedValueForValue:(id)arg1;
- (id)readValueAndPopulateStandardResults;
- (id)resultsForBatchReadResponse:(id)arg1;
- (id)valueForCharacteristicValues:(id)arg1;
- (id)valueManager;

@end
