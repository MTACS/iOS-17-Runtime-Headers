
@interface HMDCompositeSettingNumberValue : HMDCompositeSettingValue <HMDCompositeSettingsNumberValueProviding> {
    NSNumber * _numberValue;
}

@property (readonly, copy) NSNumber *numberValue;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithValue:(id)arg1;
- (bool)isEqualValue:(id)arg1;
- (id)numberValue;

@end
