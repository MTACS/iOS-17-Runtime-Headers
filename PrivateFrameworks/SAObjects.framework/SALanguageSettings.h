
@interface SALanguageSettings : SABaseClientBoundCommand

@property (nonatomic, copy) NSDictionary *configuredLocales;

+ (id)languageSettings;
+ (id)languageSettingsWithDictionary:(id)arg1 context:(id)arg2;

- (id)configuredLocales;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)mutatingCommand;
- (bool)requiresResponse;
- (void)setConfiguredLocales:(id)arg1;

@end
