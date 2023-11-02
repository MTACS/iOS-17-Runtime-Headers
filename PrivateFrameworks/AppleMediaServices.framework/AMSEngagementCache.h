
@interface AMSEngagementCache : NSObject {
    AMSEngagementCacheDatabase * _database;
}

@property (nonatomic, retain) AMSEngagementCacheDatabase *database;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)cacheResponse:(id)arg1 filter:(id)arg2 expiration:(id)arg3;
- (id)cachedResponseForEvent:(id)arg1;
- (id)database;
- (void)dealloc;
- (id)initWithFileURL:(id)arg1;
- (void)setDatabase:(id)arg1;

@end
