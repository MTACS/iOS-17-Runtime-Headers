
@interface HPSSiriLanguageSetting : HPSSetting

+ (id)settingWithKeyPath:(id)arg1 languageValue:(id)arg2;
+ (Class)valueClass;

- (id)initWithKeyPath:(id)arg1;
- (id)initWithKeyPath:(id)arg1 languageValue:(id)arg2;
- (id)languageValue;
- (id)languages;

@end
