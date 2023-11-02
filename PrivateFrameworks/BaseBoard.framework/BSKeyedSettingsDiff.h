
@interface BSKeyedSettingsDiff : BSSettingsDiff

+ (Class)_removalClass;
+ (id)diffFromSettings:(id)arg1 toSettings:(id)arg2;
+ (bool)supportsBSXPCSecureCoding;

- (unsigned long long)_diffTypesForKey:(id)arg1;
- (unsigned long long)_diffTypesForSetting:(unsigned long long)arg1;
- (bool)_isKeyed;
- (id)_keyDescriptionForSetting:(unsigned long long)arg1;
- (id)allKeys;
- (id)allSettings;
- (void)applyToSettings:(id)arg1;
- (void)inspectKeyedChangesWithBlock:(id /* block */)arg1;

@end
