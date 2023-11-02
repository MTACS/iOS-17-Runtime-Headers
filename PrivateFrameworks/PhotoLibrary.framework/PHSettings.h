
@interface PHSettings : _UISettings

+ (id)_defaultsKey;
+ (id)_signatureDictionary;
+ (id)_userDefaults;
+ (id)createSharedSettings;
+ (void)setSuiteName:(id)arg1;
+ (id)sharedSettings;
+ (id)suiteName;

- (id)parentSettings;
- (void)save;

@end
