
@interface CLSPublicEventManager : NSObject {
    CLSPublicEventCache * _cache;
    double  _queryRadius;
}

@property (nonatomic, readonly) CLSPublicEventCache *cache;
@property (nonatomic) double queryRadius;

+ (id)urlForEventsForCacheInvalidation;

- (void).cxx_destruct;
- (id)cache;
- (id)init;
- (id)loadInvalidationTokensAndInvalidateCachesIfNeeded;
- (id)publicEventsByTimeLocationTupleIdentifierForTimeLocationTuples:(id)arg1 progressBlock:(id /* block */)arg2;
- (double)queryRadius;
- (void)saveEventsForCacheInvalidation:(id)arg1;
- (void)setQueryRadius:(double)arg1;

@end
