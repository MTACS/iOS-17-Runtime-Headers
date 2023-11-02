
@interface _LNAutoShortcutsProviderXPC : NSObject <LNAutoShortcutsProviderInterface> {
    NSXPCConnection * _connection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)autoShortcutsForBundleIdentifier:(id)arg1 localeIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)autoShortcutsForLocaleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)autoShortcutsForLocaleIdentifier:(id)arg1 error:(id*)arg2;
- (id)initWithConnection:(id)arg1;
- (id)propertiesForIdentifiers:(id)arg1 error:(id*)arg2;

@end
