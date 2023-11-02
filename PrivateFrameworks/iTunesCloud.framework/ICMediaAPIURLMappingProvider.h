
@interface ICMediaAPIURLMappingProvider : NSObject

+ (id)sharedProvider;

- (id)_cacheFileURL;
- (id)_loadCacheDictionary;
- (void)_saveCachedResponsePayload:(id)arg1 eTag:(id)arg2;
- (void)clearCachedURLMappings;
- (id)getCurrentURLMappingSet;
- (void)setCurrentURLMappingSet:(id)arg1;
- (void)updateURLMappingsWithCompletion:(id /* block */)arg1;

@end
