
@interface HPSNumberSetting : HPSSetting

@property (nonatomic, readonly) double doubleValue;
@property (nonatomic, readonly) float floatValue;
@property (nonatomic, readonly) long long integerValue;
@property (nonatomic, readonly, copy) NSNumber *numberValue;

+ (id)settingWithKeyPath:(id)arg1 numberValue:(id)arg2;
+ (Class)valueClass;

- (double)doubleValue;
- (float)floatValue;
- (id)homeAdapterLegacySettingValue;
- (id)initWithKeyPath:(id)arg1 numberValue:(id)arg2;
- (long long)integerValue;
- (id)numberValue;

@end
