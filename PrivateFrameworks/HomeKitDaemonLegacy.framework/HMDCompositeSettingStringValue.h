
@interface HMDCompositeSettingStringValue : HMDCompositeSettingValue <HMDCompositeSettingsStringValueProviding> {
    NSString * _stringValue;
}

@property (readonly, copy) NSString *stringValue;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithValue:(id)arg1;
- (bool)isEqualValue:(id)arg1;
- (id)stringValue;

@end
