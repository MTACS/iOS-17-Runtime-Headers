
@interface HKClinicalProviderServiceStore : NSObject <HKClinicalProviderServiceStoreClientInterface, _HKXPCExportable> {
    HKTaskServerProxyProvider * _proxyProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)taskIdentifier;

- (void).cxx_destruct;
- (void)_fetchServerProxyWithHandler:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (void)cancelInFlightSearchQueriesWithCompletion:(id /* block */)arg1;
- (void)connectionInvalidated;
- (id)exportedInterface;
- (void)fetchLogoDataForBrand:(id)arg1 scaleKey:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchLogoDataForFeaturedBrandsAtScaleKey:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchRemoteGatewayWithExternalID:(id)arg1 batchID:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchRemoteProviderWithExternalID:(id)arg1 batchID:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchRemoteSearchResultsPageForQuery:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initWithHealthStore:(id)arg1;
- (id)remoteInterface;

@end
