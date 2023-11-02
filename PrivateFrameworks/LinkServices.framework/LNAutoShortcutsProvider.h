
@interface LNAutoShortcutsProvider : NSObject <LNAutoShortcutsProviderInterface> {
    NSXPCConnection * _connection;
    <LNAutoShortcutsProviderInterface> * _directAccess;
    <LNAutoShortcutsProviderInterface> * _xpcAccess;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)autoShortcutsForApplicationRecord:(id)arg1 localeIdentifier:(id)arg2;
- (void)autoShortcutsForBundleIdentifier:(id)arg1 localeIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)autoShortcutsForLocaleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)autoShortcutsForLocaleIdentifier:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithOptions:(long long)arg1;
- (id)propertiesForIdentifiers:(id)arg1 error:(id*)arg2;
- (void)retrieveActionForBundleIdentifier:(id)arg1 appShortcutIdentifier:(id)arg2 parameterIdentifier:(id)arg3 completion:(id /* block */)arg4;
- (void)retrieveActionForBundleIdentifier:(id)arg1 basePhraseTemplate:(id)arg2 actionIdentifier:(id)arg3 parameterIdentifier:(id)arg4 completion:(id /* block */)arg5;
- (void)retrieveActionForLocalizedPhrase:(id)arg1 completion:(id /* block */)arg2;

@end
