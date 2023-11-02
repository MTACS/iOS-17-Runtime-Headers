
@interface CLSettingsMirror : CLSettingsDictionary <CLSettingsManagerClientProtocol> {
    <CLSettingsManagerProtocol> * _manager;
    id /* block */  _settingsChangeHandler;
    CLIntersiloUniverse * _universe;
    bool  _valid;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <CLSettingsManagerProtocol> *manager;
@property (nonatomic, copy) id /* block */ settingsChangeHandler;
@property (readonly) Class superclass;
@property (nonatomic, retain) CLIntersiloUniverse *universe;
@property (nonatomic) bool valid;

- (void)dealloc;
- (void)didUpdateSettings:(id)arg1;
- (id)initInUniverse:(id)arg1;
- (void)invalidate;
- (id)manager;
- (void)setArray:(id)arg1 forKey:(id)arg2;
- (void)setBool:(bool)arg1 forKey:(id)arg2;
- (void)setDictionary:(id)arg1 forKey:(id)arg2;
- (void)setDouble:(double)arg1 forKey:(id)arg2;
- (void)setFloat:(float)arg1 forKey:(id)arg2;
- (void)setInt:(int)arg1 forKey:(id)arg2;
- (void)setLong:(long long)arg1 forKey:(id)arg2;
- (void)setManager:(id)arg1;
- (void)setSettingsChangeHandler:(id /* block */)arg1;
- (void)setShort:(short)arg1 forKey:(id)arg2;
- (void)setString:(id)arg1 forKey:(id)arg2;
- (void)setUniverse:(id)arg1;
- (void)setValid:(bool)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id /* block */)settingsChangeHandler;
- (id)universe;
- (bool)valid;

@end
