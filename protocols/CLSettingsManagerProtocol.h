
@protocol CLSettingsManagerProtocol <CLIntersiloServiceProtocol>

@required

- (void)flush;
- (void)refresh;
- (NSDictionary *)syncgetSetValue:(id)arg1 forKey:(NSString *)arg2 withoutNotifying:(byref <CLSettingsManagerClientProtocol> *)arg3;
- (NSDictionary *)syncgetSettingsAndRegisterForUpdates:(byref <CLSettingsManagerClientProtocol> *)arg1;
- (void)unregisterForUpdates:(byref <CLSettingsManagerClientProtocol> *)arg1;

@end
