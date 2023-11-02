
@interface FCProductLookup : NSObject <SKProductsRequestDelegate> {
    NSNumber * _appAdamID;
    NSString * _bundleID;
    NSString * _offerName;
    SKProduct * _product;
    NSError * _productLookupError;
    NSObject<OS_dispatch_group> * _productRequestGroup;
    SKProductsRequest * _request;
    NSNumber * _storeExternalVersionID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)productsRequest:(id)arg1 didReceiveResponse:(id)arg2;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)requestDidFinish:(id)arg1;

@end
