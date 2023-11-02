
@interface SBExternalGlobalDefaults : BSAbstractDefaultDomain

@property (nonatomic, retain) NSArray *keyboards;
@property (nonatomic, retain) NSArray *languages;
@property (nonatomic, retain) NSString *locale;

+ (bool)__useDynamicMethodResolution;

- (void)flushExternalCaches;
- (id)init;
- (id)keyboards;
- (id)languages;
- (id)locale;
- (void)removeFormattedPhoneNumberFromGlobalPreferences;
- (void)setKeyboards:(id)arg1;
- (void)setLanguages:(id)arg1;
- (void)setLocale:(id)arg1;

@end
