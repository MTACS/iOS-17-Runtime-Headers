
@protocol ATXClientModelCacheFileHandlerProtocol <NSObject>

@required

- (bool)createCacheFileForClientModelCacheUpdate:(ATXClientModelCacheUpdate *)arg1;
- (bool)deleteCachedSuggestionsFile;
- (NSFileHandle *)readOnlyFileHandleForSuggestionsCache;

@end
