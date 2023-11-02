
@interface FCWebURLResolutionEndpointConnection : NSObject <FCWebURLResolutionEndpointConnection> {
    NBHashBucketer * _bucketer;
    NSURL * _cachesDirectoryURL;
    NBURLCanonicalizer * _canonicalizer;
    <FCCoreConfigurationManager> * _configurationManager;
    NBURLHasher * _hasher;
    NFLazy * _lazyStoreFrontIDPromise;
}

@property (nonatomic, readonly) NBHashBucketer *bucketer;
@property (nonatomic, readonly, copy) NSURL *cachesDirectoryURL;
@property (nonatomic, readonly) NBURLCanonicalizer *canonicalizer;
@property (nonatomic, readonly) <FCCoreConfigurationManager> *configurationManager;
@property (nonatomic, readonly) NBURLHasher *hasher;
@property (nonatomic, readonly) NFLazy *lazyStoreFrontIDPromise;

+ (id)_bloomFilterScheduler;
+ (id)_sharedProxyingScheduler;

- (void).cxx_destruct;
- (id)_articleIDWithHash:(id)arg1 lists:(id)arg2 storeFrontID:(id)arg3;
- (id)_assetHost;
- (id)_bloomFilterError;
- (id)_fetchBloomFilterInfoPromiseWithQualityOfService:(long long)arg1;
- (id)_fetchConfigIfNeededPromiseWithCoreConfiguration:(id)arg1 qualityOfService:(long long)arg2;
- (id)_fetchConfigPromiseWithQualityOfService:(long long)arg1;
- (id)_fetchCoreConfigurationIfNeededPromiseWithQualityOfService:(long long)arg1;
- (void)_fetchListsPromiseThroughProxy:(bool)arg1 withResourceURL:(id)arg2 qualityOfService:(long long)arg3 completion:(id /* block */)arg4;
- (id)_fetchListsPromiseWithConfig:(id)arg1 coreConfiguration:(id)arg2 hash:(id)arg3 qualityOfService:(long long)arg4;
- (id)_hashOfURLWithWebURL:(id)arg1 config:(id)arg2;
- (id)bucketer;
- (id)cachesDirectoryURL;
- (id)canonicalizer;
- (id)configurationManager;
- (void)fetchWebURLBloomFilterInfoWithQualityOfService:(long long)arg1 completion:(id /* block */)arg2;
- (id)hasher;
- (id)init;
- (id)initWithConfigurationManager:(id)arg1 cachesDirectoryURL:(id)arg2;
- (id)lazyStoreFrontIDPromise;
- (void)resolveWebURL:(id)arg1 withQualityOfService:(long long)arg2 completion:(id /* block */)arg3;

@end
