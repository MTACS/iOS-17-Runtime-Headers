
@interface MDMUserParser : MDMParser

- (id)_allCommands;
- (id)_allSettingsItems;
- (id)_allowedDeviceQueriesForAccessRights:(unsigned long long)arg1;
- (id)_declarativeManagement:(id)arg1;
- (id)_installProfile:(id)arg1 accessRights:(unsigned long long)arg2;
- (id)_originator;
- (void)_performQuery:(id)arg1 withResultDictionary:(id)arg2;
- (id)_profileList:(id)arg1;
- (id)_removeProfile:(id)arg1;
- (id)_restrictions:(id)arg1;
- (void)_sendAnalyticsMDMCommandEventWithRequest:(id)arg1 response:(id)arg2;
- (void)_userConfigured:(id)arg1 assertion:(id)arg2 completionBlock:(id /* block */)arg3;

@end
