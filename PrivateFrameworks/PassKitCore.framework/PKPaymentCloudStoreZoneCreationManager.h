
@interface PKPaymentCloudStoreZoneCreationManager : NSObject {
    PKPaymentWebService * _webService;
}

- (void).cxx_destruct;
- (id)initWithWebService:(id)arg1;
- (void)triggerCloudStoreZoneCreationIfNeededForProvisioningRequest:(id)arg1 completion:(id /* block */)arg2;

@end
