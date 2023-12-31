
@interface DEDDiagnosticCollector : NSObject {
    NSArray * _cachedExtensions;
    unsigned long long  _collectionTimeout;
    NSObject<OS_os_log> * _log;
}

@property (retain) NSArray *cachedExtensions;
@property unsigned long long collectionTimeout;
@property (retain) NSObject<OS_os_log> *log;

- (void).cxx_destruct;
- (id)availableDiagnosticExtensions;
- (id)cachedExtensions;
- (void)cleanupItemsWithIdentifier:(id)arg1 parameters:(id)arg2 session:(id)arg3;
- (id)collectItemsWithIdentifier:(id)arg1 parameters:(id)arg2;
- (unsigned long long)collectionTimeout;
- (id)extensionForIdentifier:(id)arg1;
- (id)extensionManager;
- (id)init;
- (bool)isDiagnosticExtensionAvailable;
- (void)loadExtensionTextDataInExtension:(id)arg1 localization:(id)arg2;
- (id)log;
- (void)prepareItemsWithDeferredExtensionInfo:(id)arg1;
- (void)prepareItemsWithIdentifier:(id)arg1 parameters:(id)arg2 session:(id)arg3;
- (void)setCachedExtensions:(id)arg1;
- (void)setCollectionTimeout:(unsigned long long)arg1;
- (void)setLog:(id)arg1;

@end
