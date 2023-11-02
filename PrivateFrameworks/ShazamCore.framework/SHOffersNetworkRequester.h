
@interface SHOffersNetworkRequester : NSObject {
    SHStorefront * _storefront;
}

@property (nonatomic, readonly) SHStorefront *storefront;

- (void).cxx_destruct;
- (id)endpointURLWithHost:(id)arg1 path:(id)arg2 storefront:(id)arg3;
- (void)fetchOffersAtURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)offersWithCompletion:(id /* block */)arg1;
- (id)storefront;

@end
