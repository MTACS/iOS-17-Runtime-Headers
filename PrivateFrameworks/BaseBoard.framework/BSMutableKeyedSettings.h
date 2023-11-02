
@interface BSMutableKeyedSettings : BSKeyedSettings <BSMutableSettings>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)_isMutable;
- (void)applySettings:(id)arg1;
- (void)removeAllSettings;
- (void)setFlag:(long long)arg1 forKey:(id)arg2;
- (void)setFlag:(long long)arg1 forSetting:(unsigned long long)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forSetting:(unsigned long long)arg2;

@end
