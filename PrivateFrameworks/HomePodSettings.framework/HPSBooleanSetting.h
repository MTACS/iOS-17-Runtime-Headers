
@interface HPSBooleanSetting : HPSSetting

@property (nonatomic, readonly) bool booleanValue;

+ (id)settingWithKeyPath:(id)arg1 booleanValue:(bool)arg2;
+ (Class)valueClass;

- (bool)booleanValue;
- (id)description;
- (id)homeAdapterLegacySettingValue;
- (id)initWithKeyPath:(id)arg1 booleanValue:(bool)arg2;

@end
