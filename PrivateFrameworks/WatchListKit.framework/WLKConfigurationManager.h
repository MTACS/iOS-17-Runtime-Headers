
@interface WLKConfigurationManager : NSObject {
    WLKServerConfigurationResponse * _config;
    double  _extendedCacheExpireDuration;
    NSObject<OS_dispatch_queue> * _fetchQueue;
    WLKSharedFileStorage * _fileCache;
}

@property (nonatomic) double extendedCacheExpireDuration;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_config;
- (id)_configuration;
- (id)_configurationWithOptions:(long long)arg1 cachePolicy:(unsigned long long)arg2 queryParameters:(id)arg3;
- (void)_fetchConfigurationWithOptions:(long long)arg1 cachePolicy:(unsigned long long)arg2 queryParameters:(id)arg3 completion:(id /* block */)arg4;
- (void)_handleLibraryDidChangeNotification:(id)arg1;
- (id)_init;
- (void)_invalidateCache;
- (void)_invalidateNetworkCache;
- (void)_setConfig:(id)arg1;
- (void)_setUtsk:(id)arg1;
- (id)_stringForCachePolicy:(unsigned long long)arg1;
- (id)_utsk;
- (double)extendedCacheExpireDuration;
- (void)fetchConfigurationWithCompletionHandler:(id /* block */)arg1;
- (void)fetchConfigurationWithOptions:(long long)arg1 cachePolicy:(unsigned long long)arg2 queryParameters:(id)arg3 completion:(id /* block */)arg4;
- (id)init;
- (void)setExtendedCacheExpireDuration:(double)arg1;

@end
