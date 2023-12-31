
@interface FCVanityURLRedirectService : NSObject {
    <FCContentContext> * _contentContext;
    FCFetchedValueManager * _vanityURLMappingManager;
}

@property (nonatomic, readonly) <FCContentContext> *contentContext;
@property (nonatomic, readonly) FCFetchedValueManager *vanityURLMappingManager;

- (void).cxx_destruct;
- (id)_destinationURLForURL:(id)arg1;
- (void)acquireHoldTokenOnUnderlyingAssets;
- (id)contentContext;
- (id)destinationURLForURL:(id)arg1;
- (bool)hasRedirectForURL:(id)arg1;
- (id)init;
- (id)initWithContentContext:(id)arg1;
- (void)resolveURL:(id)arg1 withQualityOfService:(long long)arg2 completion:(id /* block */)arg3;
- (void)updateUnderlyingMappingWithQualityOfService:(long long)arg1 completion:(id /* block */)arg2;
- (id)vanityURLMappingManager;

@end
