
@interface HFDemoModeMediaControlItem : HFControlItem <HFToggleableControlItem> {
    HMAccessory * _accessory;
    HFNullValueSource * _mediaValueSource;
}

@property (nonatomic) HMAccessory *accessory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HFNullValueSource *mediaValueSource;
@property (readonly) Class superclass;

+ (Class)valueClass;

- (void).cxx_destruct;
- (id)accessory;
- (id)characteristicValuesForValue:(id)arg1;
- (id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2;
- (id)initWithDisplayResults:(id)arg1;
- (id)initWithValueSource:(id)arg1 characteristicOptions:(id)arg2 displayResults:(id)arg3;
- (id)mediaValueSource;
- (id)normalizedValueForValue:(id)arg1;
- (id)readValueAndPopulateStandardResults;
- (void)setAccessory:(id)arg1;
- (id)toggleValue;
- (id)valueForCharacteristicValues:(id)arg1;

@end
