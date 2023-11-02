
@interface PTProxySettings : PTSettings {
    PTProxySettingsDefinition * _definition;
    NSMutableDictionary * _values;
}

@property (nonatomic, readonly) PTProxySettingsDefinition *definition;

+ (id)new;
+ (id)proxyWithDefinition:(id)arg1;
+ (id)settingsFromArchiveDictionary:(id)arg1;
+ (id)settingsOrProxyWithDefinition:(id)arg1;

- (void).cxx_destruct;
- (id)_createChildForKey:(id)arg1;
- (id)_initWithDefinition:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)definition;
- (id)init;
- (id)initWithDefaultValues;
- (id)module;
- (void)restoreDefaultValues;
- (void)restoreFromArchiveDictionary:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;

@end
