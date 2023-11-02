
@interface BFMCatalogServiceBridge : NSObject {
    BFMCatalogService * _service;
}

@property (nonatomic, retain) BFMCatalogService *service;

- (void).cxx_destruct;
- (void)fetchMixedAssetsWithBookIds:(id)arg1 audiobookIds:(id)arg2 relationships:(id)arg3 views:(id)arg4 additionalParameters:(id)arg5 batchSize:(long long)arg6 completionHandler:(id /* block */)arg7;
- (void)fetchMixedSeriesWithBookSeriesIds:(id)arg1 audiobookSeriesIds:(id)arg2 relationships:(id)arg3 views:(id)arg4 additionalParameters:(id)arg5 batchSize:(long long)arg6 completionHandler:(id /* block */)arg7;
- (void)fetchResourcesWithAdamIDs:(id)arg1 relationships:(id)arg2 views:(id)arg3 additionalParameters:(id)arg4 batchSize:(long long)arg5 completionHandler:(id /* block */)arg6;
- (id)initWithBridgedConfig:(id)arg1;
- (id)initWithConfig:(id)arg1;
- (id)service;
- (void)setService:(id)arg1;

@end
