
@interface ATXUICacheManager : NSObject {
    NSString * _cacheBasePath;
}

- (void).cxx_destruct;
- (double)cacheAgeForConsumerSubTypeString:(id)arg1;
- (id)cacheFilePathForConsumerSubType:(unsigned char)arg1;
- (id)cacheFilePathForConsumerSubTypeString:(id)arg1;
- (id)cachedLayoutForConsumerSubType:(unsigned char)arg1 expectedClass:(Class)arg2;
- (id)consumerSubTypeStringsWithNonEmptyCachedLayout;
- (id)dataFromFileHandle:(id)arg1;
- (bool)deleteCacheFileForConsumerSubType:(unsigned char)arg1;
- (id)init;
- (id)initWithCacheBasePath:(id)arg1;
- (id)serializeLayout:(id)arg1;
- (bool)updateCachedLayout:(id)arg1 consumerSubType:(unsigned char)arg2;
- (bool)writeSerializedDataToCacheFile:(id)arg1 path:(id)arg2;

@end
