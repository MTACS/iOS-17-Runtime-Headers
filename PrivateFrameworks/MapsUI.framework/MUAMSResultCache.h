
@interface MUAMSResultCache : NSObject {
    MUTimeExpirableLRUCache * _amsResultsByAdamIds;
    MUTimeExpirableLRUCache * _amsResultsByBundleIds;
}

- (void).cxx_destruct;
- (id)amsResultForAdamId:(id)arg1;
- (id)amsResultForBundleId:(id)arg1;
- (id)initWithAppAdamIdCacheCount:(unsigned long long)arg1 appAdamIdTimeToLive:(unsigned long long)arg2 bundleIdCacheCount:(unsigned long long)arg3 bundleIdTimeToLive:(unsigned long long)arg4;
- (void)setAMSResult:(id)arg1 forAdamId:(id)arg2;
- (void)setAMSResult:(id)arg1 forBundleId:(id)arg2;

@end
