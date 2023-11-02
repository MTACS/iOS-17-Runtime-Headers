
@interface BSKeyedSettings : BSSettings {
    BSMutableIntegerMap * _keyMap;
    NSMutableSet * _keys;
}

+ (Class)_baseClass;
+ (Class)_mutableClass;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_applyToSettings:(id)arg1;
- (id)_keyDescriptionForSetting:(unsigned long long)arg1;
- (void)_removeAllSettings;
- (id)_sortedSettingsForDescription;
- (id)allKeys;
- (bool)boolForKey:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (void)enumerateKeyedFlagsWithBlock:(id /* block */)arg1;
- (void)enumerateKeyedObjectsWithBlock:(id /* block */)arg1;
- (long long)flagForKey:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSettings:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isKeyedSettings;
- (id)keyForSetting:(unsigned long long)arg1;
- (id)objectForKey:(id)arg1;

@end
