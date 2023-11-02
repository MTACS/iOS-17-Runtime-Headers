
@interface PKDataReleaseEntityResolver : NSObject {
    PKPaymentService * _paymentService;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (void)_merchantForIdentifier:(id)arg1 withCurrentMerchant:(id)arg2 fromMobileAssetLocalOnly:(bool)arg3 completion:(id /* block */)arg4;
- (void)_merchantFromMapsWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)resolveEntityForRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)resolveEntityForRpIdentifier:(id)arg1 completion:(id /* block */)arg2;

@end
