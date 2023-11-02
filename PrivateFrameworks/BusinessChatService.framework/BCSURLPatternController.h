
@interface BCSURLPatternController : NSObject <BCSURLPatternControllerProtocol> {
    <BCSDomainItemCaching> * _cacheManager;
    BCSURLPatternMatchResult * _cachedPatternMatchingResult;
    <BCSMetricFactoryProtocol> * _metricFactory;
}

@property (nonatomic, readonly) <BCSDomainItemCaching> *cacheManager;
@property (nonatomic, retain) BCSURLPatternMatchResult *cachedPatternMatchingResult;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <BCSMetricFactoryProtocol> *metricFactory;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)cacheManager;
- (id)cachedPatternMatchingResult;
- (id)initWithCacheManager:(id)arg1 metricFactory:(id)arg2;
- (void)matchPatternForURL:(id)arg1 forClientBundleID:(id)arg2 completion:(id /* block */)arg3;
- (id)metricFactory;
- (id)mostExplicitMatchingResultFromResults:(id)arg1;
- (void)setCachedPatternMatchingResult:(id)arg1;

@end
