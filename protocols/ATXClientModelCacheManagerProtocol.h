
@protocol ATXClientModelCacheManagerProtocol <NSObject>

@required

- (double)cacheAgeForClientModel:(NSString *)arg1;
- (NSDictionary *)cachedSuggestionsForAllClientModels;
- (ATXClientModelCacheUpdate *)cachedSuggestionsForClientModel:(NSString *)arg1;
- (NSDate *)lastCacheUpdateDateForClientModel:(NSString *)arg1;
- (void)updateCachedSuggestions:(ATXClientModelCacheUpdate *)arg1;

@end
