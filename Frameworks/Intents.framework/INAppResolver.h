
@interface INAppResolver : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _cacheLock;
    NSMutableDictionary * _cachedResults;
    INExecutionCounterpartMapper * _counterpartMapper;
    INExecutionFrameworkMapper * _frameworkMapper;
    INAppResolverOptions * _globalOptions;
    NSMutableDictionary * _intentClassNameToResolverOptions;
    INLinkActionProvider * _linkActionProvider;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _resolverOptionsLock;
    INSystemAppMapper * _systemAppMapper;
}

@property (nonatomic, readonly) INExecutionCounterpartMapper *_counterpartMapper;
@property (nonatomic, readonly) INExecutionFrameworkMapper *_frameworkMapper;
@property (nonatomic, readonly) INSystemAppMapper *_systemAppMapper;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } cacheLock;
@property (nonatomic, readonly) NSMutableDictionary *cachedResults;
@property (nonatomic, readonly) INAppResolverOptions *globalOptions;
@property (nonatomic, readonly) NSMutableDictionary *intentClassNameToResolverOptions;
@property (nonatomic, readonly) INLinkActionProvider *linkActionProvider;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } resolverOptionsLock;

+ (void)initialize;
+ (id)sharedResolver;
+ (id)supportedIntentsOverridesForThirdPartyBundleIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)_counterpartMapper;
- (id)_frameworkMapper;
- (id)_optionsForIntentClassName:(id)arg1;
- (id)_resolvedAppIntentMatchingDescriptor:(id)arg1 availableActions:(id)arg2 availableEntities:(id)arg3;
- (id)_resolvedAppMatchingDescriptor:(id)arg1;
- (id)_resolvedIntentMatchingDescriptor:(id)arg1;
- (id)_resolvedUserActivityMatchingDescriptor:(id)arg1;
- (id)_systemAppMapper;
- (bool)cacheHasResultForDescriptor:(id)arg1;
- (struct os_unfair_lock_s { unsigned int x1; })cacheLock;
- (void)cacheResult:(id)arg1 forDescriptor:(id)arg2;
- (id)cachedResultForKey:(id)arg1;
- (id)cachedResults;
- (id)counterpartIdentifiersForLocalIdentifier:(id)arg1;
- (void)dealloc;
- (id)globalOptions;
- (id)init;
- (void)installedApplicationsDidChange:(id)arg1;
- (id)intentClassNameToResolverOptions;
- (void)invalidateCache;
- (id)linkActionProvider;
- (id)localIdentifiersForCounterpartIdentifier:(id)arg1;
- (id)optionsForCurrentContextWithIntentClassName:(id)arg1;
- (id)resolveDescriptorByLinkingFileProvidersToFilesApp:(id)arg1;
- (id)resolveDescriptorBySwappingIdentifiersWithExtensionIfApplicable:(id)arg1;
- (id)resolvedAppIntentMatchingDescriptor:(id)arg1 availableActions:(id)arg2 availableEntities:(id)arg3;
- (id)resolvedAppMatchingDescriptor:(id)arg1;
- (id)resolvedIntentMatchingDescriptor:(id)arg1;
- (id)resolvedUserActivityMatchingDescriptor:(id)arg1;
- (struct os_unfair_lock_s { unsigned int x1; })resolverOptionsLock;
- (void)setOptions:(id)arg1;
- (void)setOptions:(id)arg1 forIntentClassName:(id)arg2;

@end
