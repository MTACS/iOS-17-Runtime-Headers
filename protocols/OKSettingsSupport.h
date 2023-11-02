
@protocol OKSettingsSupport <NSObject>

@required

+ (NSDictionary *)supportedSettings;

- (void)setUserSettingObject:(id)arg1 forKey:(NSString *)arg2;
- (<OKSettingsSupport> *)settingObjectForKey:(NSString *)arg1;

@optional

- (id)initWithSettings:(NSDictionary *)arg1;

@end
