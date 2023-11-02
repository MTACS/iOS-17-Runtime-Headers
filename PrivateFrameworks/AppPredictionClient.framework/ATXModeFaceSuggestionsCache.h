
@interface ATXModeFaceSuggestionsCache : NSObject

- (id)_cacheForUUID:(id)arg1;
- (id)_suggestedFacesDirectoryURL;
- (void)cacheSuggestedFaces:(id)arg1 forModeUUID:(id)arg2;
- (id)cachedSuggestedFacesForModeUUID:(id)arg1;
- (void)evictCachedSuggestedFaces;

@end
