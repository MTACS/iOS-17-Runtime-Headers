
@interface CLSettingsManagerInternal : CLIntersiloService <CLSettingsManagerProtocol> {
    NSMutableSet * _clients;
    NSMutableDictionary * _settingsDictionary;
}

@property (retain) NSMutableSet *clients;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSMutableDictionary *settingsDictionary;
@property (readonly) Class superclass;
@property (nonatomic) bool valid;

+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;
+ (id)getSilo;
+ (void)performSyncOnSilo:(id)arg1 invoker:(id /* block */)arg2;

- (void)beginService;
- (id)clients;
- (void)endService;
- (void)flush;
- (void)refresh;
- (void)setClients:(id)arg1;
- (void)setSettingsDictionary:(id)arg1;
- (id)settingsDictionary;
- (id)syncgetSetValue:(void *)arg1 forKey:(void *)arg2 withoutNotifying:(void *)arg3; // needs 3 arg types, found 4: id, id, byref /* Warning: Unrecognized filer type: '' using 'void*' */ void*, id
- (id)syncgetSettingsAndRegisterForUpdates:(void *)arg1; // needs 1 arg types, found 2: byref /* Warning: Unrecognized filer type: '' using 'void*' */ void*, id
- (void)unregisterForUpdates:(void *)arg1; // needs 1 arg types, found 2: byref /* Warning: Unrecognized filer type: '' using 'void*' */ void*, id
- (void)updateClientsWithDictionary:(id)arg1;

@end
