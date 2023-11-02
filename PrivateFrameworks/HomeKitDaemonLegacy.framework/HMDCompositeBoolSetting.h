
@interface HMDCompositeBoolSetting : HMDCompositeSetting <HMDCompositeSettingsBoolValueProviding> {
    bool  _boolValue;
}

@property (readonly) bool boolValue;

- (id)attributeDescriptions;
- (bool)boolValue;
- (id)initWithValue:(bool)arg1 readVersion:(id)arg2 writeVersion:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualValue:(id)arg1;

@end
