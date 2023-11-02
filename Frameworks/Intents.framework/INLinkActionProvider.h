
@interface INLinkActionProvider : NSObject {
    NSDictionary * _cachedActions;
    NSDictionary * _cachedEntities;
}

@property (nonatomic, readonly) NSDictionary *actionsGroupedByBundleIdentifier;
@property (nonatomic, retain) NSDictionary *cachedActions;
@property (nonatomic, retain) NSDictionary *cachedEntities;
@property (nonatomic, readonly) NSDictionary *entitiesGroupedByBundleIdentifier;

+ (id)sharedProvider;

- (void).cxx_destruct;
- (id)actionsGroupedByBundleIdentifier;
- (void)cacheActions:(id)arg1;
- (void)cacheEntities:(id)arg1;
- (id)cachedActions;
- (id)cachedEntities;
- (id)entitiesGroupedByBundleIdentifier;
- (void)evictCache;
- (id)metadataProvider;
- (void)setCachedActions:(id)arg1;
- (void)setCachedEntities:(id)arg1;
- (id)supportedActionIdentifiersForBundleIdentifier:(id)arg1;
- (id)supportedEntityIdentifiersForBundleIdentifier:(id)arg1;

@end
