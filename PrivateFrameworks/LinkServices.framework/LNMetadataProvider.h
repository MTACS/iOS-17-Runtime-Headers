
@interface LNMetadataProvider : NSObject <LNMetadataProviderInterface> {
    NSXPCConnection * _connection;
    <LNMetadataProviderInterface> * _directProvider;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    long long  _options;
    <LNMetadataProviderInterface> * _xpcProvider;
}

@property (nonatomic, readonly) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

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
- (id)bundlesWithError:(id*)arg1;
- (id)connection;
- (void)dealloc;
- (id)entitiesForBundleIdentifier:(id)arg1 error:(id*)arg2;
- (id)entitiesWithError:(id*)arg1;
- (id)enumsForBundleIdentifier:(id)arg1 error:(id*)arg2;
- (id)enumsWithError:(id*)arg1;
- (id)init;
- (id)initWithOptions:(long long)arg1;
- (long long)metadataVersionForBundleIdentifier:(id)arg1 error:(id*)arg2;
- (id)queriesForBundleIdentifier:(id)arg1 ofType:(id)arg2 error:(id*)arg3;
- (id)queriesWithError:(id*)arg1;
- (void)registerBundleWithIdentifier:(id)arg1 force:(bool)arg2 reply:(id /* block */)arg3;
- (void)resetWithReply:(id /* block */)arg1;
- (void)scanBundlesWithReply:(id /* block */)arg1;
- (void)unregisterBundleWithIdentifier:(id)arg1 reply:(id /* block */)arg2;

@end
