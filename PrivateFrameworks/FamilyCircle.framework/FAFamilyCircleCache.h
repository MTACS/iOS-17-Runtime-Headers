
@interface FAFamilyCircleCache : NSObject {
    ACAccount * _account;
}

@property (nonatomic, readonly) ACAccount *account;

+ (id)cacheQueue;

- (void).cxx_destruct;
- (id)_cacheDataWithFamilyCircle:(id)arg1 serverTag:(id)arg2;
- (id)_cacheURL;
- (id)_cacheURLWithError:(id*)arg1;
- (id)_createCacheFile;
- (id)_fetchData:(id*)arg1;
- (bool)_isCacheDate:(id)arg1 withinDuration:(double)arg2;
- (id)_onQueue:(id /* block */)arg1;
- (id)_username;
- (id)account;
- (id)initWithAccount:(id)arg1;
- (id)invalidate;
- (id)load;
- (id)load:(id*)arg1;
- (id)updateWithFamilyCircle:(id)arg1 serverTag:(id)arg2;

@end
