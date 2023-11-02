
@interface CoreODIEssentials.DIPURLCache : NSURLCache {
    void logger;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithMemoryCapacity:(long long)arg1 diskCapacity:(long long)arg2 directoryURL:(id)arg3;
- (id)initWithMemoryCapacity:(long long)arg1 diskCapacity:(long long)arg2 diskPath:(id)arg3;
- (void)storeCachedResponse:(id)arg1 forDataTask:(id)arg2;
- (void)storeCachedResponse:(id)arg1 forRequest:(id)arg2;

@end
