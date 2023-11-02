
@interface HMDSettingAttachedSettingUpdate : HMFObject {
    NSString * _keyPath;
    HMSettingValue * _settingValue;
}

@property (readonly) NSString *keyPath;
@property (readonly) HMSettingValue *settingValue;

- (void).cxx_destruct;
- (id)initWithKeyPath:(id)arg1 settingValue:(id)arg2;
- (id)keyPath;
- (id)settingValue;

@end
