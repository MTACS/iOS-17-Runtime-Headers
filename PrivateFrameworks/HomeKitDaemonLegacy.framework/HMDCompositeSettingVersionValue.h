
@interface HMDCompositeSettingVersionValue : HMDCompositeSettingValue <HMDCompositeSettingsVersionValueProviding> {
    long long  _type;
    HMFVersion * _version;
}

@property (readonly) long long type;
@property (readonly, copy) HMFVersion *version;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithVersion:(id)arg1 type:(long long)arg2;
- (long long)type;
- (id)version;

@end
