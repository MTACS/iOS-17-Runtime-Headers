
@interface SASettingOpenBatteryUsage : SASettingOpenSettings <SASettingSettingsAction>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)openBatteryUsage;
+ (id)openBatteryUsageWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;

@end
