
@interface BCSMegashardFetcher : NSObject {
    <BCSConfigCaching> * _configCache;
    <BCSMegashardRemoteFetching> * _megashardRemoteFetcher;
    <BCSMetricFactoryProtocol> * _metricFactory;
    <BCSShardCacheQueryable> * _shardCache;
    <BCSShardCacheSkipping> * _shardCacheSkipper;
    <BCSShardItemInstantiating> * _shardInstantiator;
    long long  _shardType;
    NSMutableSet * _triggers;
    long long  _type;
    <BCSUserDefaultsProviding> * _userDefaults;
}

- (void).cxx_destruct;
- (void)addFetchTrigger:(id)arg1;
- (id)initWithShardType:(long long)arg1 configCache:(id)arg2 shardCache:(id)arg3 shardCacheSkipper:(id)arg4 shardInstantiator:(id)arg5 megashardRemoteFetcher:(id)arg6 userDefaults:(id)arg7 metricFactory:(id)arg8;

@end
