
@interface FBSSettingsDiff : NSObject <BSSettingDescriptionProvider, BSXPCCoding> {
    BSSettingsDiff * _diff;
    BSSettingsDiff * _legacyDiff;
    BSSettingsDiff * _legacyLocalDiff;
    BSSettingsDiff * _localDiff;
    Class  _settingsClass;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)_settingsClass;
+ (id)diffFromSettings:(id)arg1 toSettings:(id)arg2;

- (void).cxx_destruct;
- (bool)_isSignifcant;
- (bool)containsProperty:(SEL)arg1;
- (bool)containsPropertyFromExtension:(Class)arg1;
- (bool)containsSettingNamed:(id)arg1;
- (id)description;
- (void)encodeWithXPCDictionary:(id)arg1;
- (void)evaluateWithInspector:(id)arg1 context:(void*)arg2;
- (id)init;
- (id)initWithChangesFromSettings:(id)arg1 toSettings:(id)arg2;
- (id)initWithXPCDictionary:(id)arg1;
- (void)inspectChangesWithBlock:(id /* block */)arg1;
- (void)inspectOtherChangesWithBlock:(id /* block */)arg1;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)settings:(id)arg1 keyDescriptionForSetting:(unsigned long long)arg2;
- (id)settings:(id)arg1 valueDescriptionForFlag:(long long)arg2 object:(id)arg3 ofSetting:(unsigned long long)arg4;
- (id)settingsByApplyingToMutableCopyOfSettings:(id)arg1;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;

@end
