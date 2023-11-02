
@interface HFMediaControlItem : HFControlItem <HFToggleableControlItem> {
    NSString * _deviceName;
    long long  _mediaAccessoryItemType;
    HFMediaActionSetting * _mediaActionSetting;
    <HFMediaProfileContainer> * _mediaProfileContainer;
    NSString * _mediaRoutingIdentifier;
    <HFMediaValueSource> * _mediaValueSource;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *deviceName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long mediaAccessoryItemType;
@property (nonatomic, retain) HFMediaActionSetting *mediaActionSetting;
@property (nonatomic, readonly) <HFMediaProfileContainer> *mediaProfileContainer;
@property (nonatomic, copy) NSString *mediaRoutingIdentifier;
@property (nonatomic, readonly) <HFMediaValueSource> *mediaValueSource;
@property (readonly) Class superclass;

+ (Class)valueClass;

- (void).cxx_destruct;
- (id)characteristicValuesForValue:(id)arg1;
- (id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2;
- (id)deviceName;
- (id)initWithMediaRoutingIdentifier:(id)arg1 deviceName:(id)arg2 mediaAccessoryItemType:(long long)arg3;
- (id)initWithValueSource:(id)arg1 characteristicOptions:(id)arg2 displayResults:(id)arg3;
- (id)initWithValueSource:(id)arg1 mediaProfileContainer:(id)arg2 mediaAccessoryItemType:(long long)arg3 displayResults:(id)arg4;
- (long long)mapToHMMediaPlaybackState:(long long)arg1;
- (long long)mediaAccessoryItemType;
- (id)mediaActionSetting;
- (id)mediaProfileContainer;
- (id)mediaRoutingIdentifier;
- (id)mediaValueSource;
- (id)normalizedValueForValue:(id)arg1;
- (id)readValueAndPopulateStandardResults;
- (void)setDeviceName:(id)arg1;
- (void)setMediaActionSetting:(id)arg1;
- (void)setMediaRoutingIdentifier:(id)arg1;
- (long long)sortPriority;
- (id)toggleValue;
- (long long)toggledSceneStateFromPrimaryState:(long long)arg1;
- (id)valueForCharacteristicValues:(id)arg1;
- (id)writePrimaryState:(long long)arg1;
- (id)writeValue:(id)arg1;

@end
