
@interface HMDCompositeNumberSetting : HMDCompositeSetting <HMDCompositeSettingsNumberValueProviding> {
    NSNumber * _numberValue;
}

@property (readonly, copy) NSNumber *numberValue;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithValue:(id)arg1 readVersion:(id)arg2 writeVersion:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualValue:(id)arg1;
- (id)numberValue;

@end
