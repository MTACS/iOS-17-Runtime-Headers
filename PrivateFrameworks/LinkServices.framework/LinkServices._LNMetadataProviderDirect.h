
@interface LinkServices._LNMetadataProviderDirect : NSObject <LNAutoShortcutsProviderInterface, LNMetadataProviderInterface> {
    void connection;
    void requiresAssertion;
}

- (void).cxx_destruct;
- (id)actionForBundleIdentifier:(id)arg1 andActionIdentifier:(id)arg2 error:(id*)arg3;
- (id)actionsAndSystemProtocolDefaultsForBundleIdentifier:(id)arg1 error:(id*)arg2;
- (id)actionsConformingToSystemProtocol:(id)arg1 withParametersOfTypes:(id)arg2 bundleIdentifier:(id)arg3 error:(id*)arg4;
- (id)actionsConformingToSystemProtocols:(id)arg1 logicalType:(unsigned long long)arg2 bundleIdentifier:(id)arg3 error:(id*)arg4;
- (id)actionsForBundleIdentifier:(id)arg1 andActionIdentifier:(id)arg2 error:(id*)arg3;
- (id)actionsForBundleIdentifier:(id)arg1 error:(id*)arg2;
- (id)actionsWithError:(id*)arg1;
- (id)actionsWithFullyQualifiedIdentifiers:(id)arg1 error:(id*)arg2;
- (id)appShortcutsProviderMangledTypeNameForBundleIdentifier:(id)arg1 error:(id*)arg2;
- (void)autoShortcutsForBundleIdentifier:(id)arg1 localeIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)autoShortcutsForLocaleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)autoShortcutsForLocaleIdentifier:(id)arg1 error:(id*)arg2;
- (id)bundlesWithError:(id*)arg1;
- (id)entitiesForBundleIdentifier:(id)arg1 error:(id*)arg2;
- (id)entitiesWithError:(id*)arg1;
- (id)enumsForBundleIdentifier:(id)arg1 error:(id*)arg2;
- (id)enumsWithError:(id*)arg1;
- (id)init;
- (id)initWithConnection:(id)arg1 options:(long long)arg2 error:(id*)arg3;
- (long long)metadataVersionForBundleIdentifier:(id)arg1 error:(id*)arg2;
- (id)propertiesForIdentifiers:(id)arg1 error:(id*)arg2;
- (id)queriesForBundleIdentifier:(id)arg1 ofType:(id)arg2 error:(id*)arg3;
- (id)queriesWithError:(id*)arg1;

@end
