
@interface SASettingGetAirplaneMode : SASettingGetBool

+ (id)getAirplaneMode;
+ (id)getAirplaneModeWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)mutatingCommand;
- (bool)requiresResponse;

@end
