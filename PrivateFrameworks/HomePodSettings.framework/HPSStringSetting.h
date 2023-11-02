
@interface HPSStringSetting : HPSSetting

@property (nonatomic, readonly, copy) NSString *stringValue;

+ (id)settingWithKeyPath:(id)arg1 stringValue:(id)arg2;
+ (Class)valueClass;

- (id)homeAdapterLegacySettingValue;
- (id)initWithKeyPath:(id)arg1 stringValue:(id)arg2;
- (id)stringValue;

@end
