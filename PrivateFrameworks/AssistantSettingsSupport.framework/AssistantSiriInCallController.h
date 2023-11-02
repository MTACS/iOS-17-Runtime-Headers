
@interface AssistantSiriInCallController : PSListController

+ (Class)_config;
+ (id)bundle;
+ (bool)isSettingEnabled;
+ (bool)isSettingSupported;
+ (id)localizedSettingName;

- (id)_localizedFooterText;
- (id)_localizedHangUpTriggerPhrase;
- (id)enabled:(id)arg1;
- (void)setEnabled:(id)arg1 specifier:(id)arg2;
- (id)specifiers;

@end
