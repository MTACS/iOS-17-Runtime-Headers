
@interface SASettingGetVoiceControl : SASettingGetBool

+ (id)getVoiceControl;
+ (id)getVoiceControlWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)mutatingCommand;
- (bool)requiresResponse;

@end
