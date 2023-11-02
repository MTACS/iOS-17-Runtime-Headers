
@interface _UIActivityApplicationExtensionDiscovery : NSObject {
    NSArray * _extensionPointIdentifiers;
    id /* block */  _fetchShortcutsBlock;
}

@property (nonatomic, copy) NSArray *extensionPointIdentifiers;
@property (nonatomic, copy) id /* block */ fetchShortcutsBlock;

+ (id)extensionBasedActivityForExtension:(id)arg1;
+ (id)extensionMatchingDictionariesForExtensionItems:(id)arg1;
+ (void)registerContinuousExtensionsDiscoveryOnLaunch;

- (void).cxx_destruct;
- (id)_extensionsForMatchingContext:(id)arg1 error:(id*)arg2;
- (id)activitiesForMatchingContext:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (id)extensionPointIdentifiers;
- (id /* block */)fetchShortcutsBlock;
- (id)init;
- (id)initWithExtensionPointIdentifiers:(id)arg1;
- (void)primeWithDiscoveryContext:(id)arg1;
- (id)reportExtensionsCacheResult;
- (void)setExtensionPointIdentifiers:(id)arg1;
- (void)setFetchShortcutsBlock:(id /* block */)arg1;

@end
