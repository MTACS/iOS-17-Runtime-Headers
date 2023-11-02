
@interface HMDCompositeSettingBoolValue : HMDCompositeSettingValue <HMDCompositeSettingsBoolValueProviding> {
    bool  _boolValue;
}

@property (readonly) bool boolValue;

- (id)attributeDescriptions;
- (bool)boolValue;
- (id)initWithValue:(bool)arg1;
- (bool)isEqualValue:(id)arg1;

@end
