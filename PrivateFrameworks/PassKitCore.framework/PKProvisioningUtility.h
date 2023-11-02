
@interface PKProvisioningUtility : NSObject {
    <PKProvisioningUtilityDataHelper> * _dataProvider;
    PKPaymentWebService * _destinationWebService;
    PKPaymentWebService * _managingWebService;
}

@property (nonatomic) <PKProvisioningUtilityDataHelper> *dataProvider;

- (void).cxx_destruct;
- (void)_requestProvisioning:(id)arg1 externalizedAuth:(id)arg2 cloudStoreCoordinatorDelegate:(id)arg3 downloadPasses:(bool)arg4 resolveEnableRequirements:(bool)arg5 onStartPassDownload:(id /* block */)arg6 completion:(id /* block */)arg7;
- (void)_updateRequirementsRequestForSuperEasyProvisioning:(id)arg1 completion:(id /* block */)arg2;
- (id)dataProvider;
- (void)downloadAndIngestPassesForResponse:(id)arg1 cloudStoreCoordinatorDelegate:(id)arg2 ingestionProperties:(id)arg3 completion:(id /* block */)arg4;
- (void)downloadMoreInfoItemsFrom:(id)arg1 metadata:(id)arg2 completion:(id /* block */)arg3;
- (void)ingestProvisioningPassData:(id)arg1 cloudStoreCoordinatorDelegate:(id)arg2 moreInfoURLs:(id)arg3 ingestionProperties:(id)arg4 completion:(id /* block */)arg5;
- (id)init;
- (id)initWithDestinationWebService:(id)arg1 managingWebService:(id)arg2;
- (void)nonceWithCompletion:(id /* block */)arg1;
- (void)requestEligibility:(id)arg1 completion:(id /* block */)arg2;
- (void)requestProvisioning:(id)arg1 completion:(id /* block */)arg2;
- (void)requestProvisioning:(id)arg1 externalizedAuth:(id)arg2 cloudStoreCoordinatorDelegate:(id)arg3 onStartPassDownload:(id /* block */)arg4 completion:(id /* block */)arg5;
- (void)requestRequirements:(id)arg1 completion:(id /* block */)arg2;
- (void)setDataProvider:(id)arg1;
- (void)updateProvisioningRequestForEnableRequirements:(id)arg1 externalizedAuth:(id)arg2 completion:(id /* block */)arg3;

@end
