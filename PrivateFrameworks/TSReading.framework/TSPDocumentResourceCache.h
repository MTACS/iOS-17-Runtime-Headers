
@interface TSPDocumentResourceCache : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSURL * _cacheURL;
    NSMutableDictionary * _entries;
    long long  _maxCacheSizeInBytes;
}

@property (nonatomic) long long maxCacheSizeInBytes;

+ (id)defaultCacheURL;
+ (id)sharedCache;

- (void).cxx_destruct;
- (id)URLForDocumentResourceDigestString:(id)arg1;
- (bool)beginDocumentResourceAccessForDigestString:(id)arg1;
- (bool)cacheDocumentResourceDigestString:(id)arg1 extension:(id)arg2 sourceURL:(id)arg3 fileSize:(long long)arg4 wasDownloaded:(bool)arg5;
- (void)clearCache;
- (void)endDocumentResourceAccessForDigestString:(id)arg1;
- (id)entryForDigestString:(id)arg1;
- (void)enumerateEntriesFromCacheURLWithHandler:(id /* block */)arg1;
- (id)init;
- (id)initWithCacheURL:(id)arg1;
- (long long)maxCacheSizeInBytes;
- (void)reloadEntries;
- (void)setMaxCacheSizeInBytes:(long long)arg1;
- (void)shrinkCache;
- (void)shrinkCacheWithMaxCacheSizeInBytes:(long long)arg1;

@end
