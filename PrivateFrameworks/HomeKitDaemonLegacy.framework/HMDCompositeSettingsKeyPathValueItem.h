
@interface HMDCompositeSettingsKeyPathValueItem : NSObject {
    NSString * _keyPath;
    HMDCompositeSettingValue * _value;
}

@property (readonly, copy) NSString *keyPath;
@property (readonly, copy) HMDCompositeSettingValue *value;

- (void).cxx_destruct;
- (id)initWithKeyPath:(id)arg1 value:(id)arg2;
- (id)keyPath;
- (id)value;

@end
