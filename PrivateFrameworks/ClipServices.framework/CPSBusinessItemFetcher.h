
@interface CPSBusinessItemFetcher : NSObject <CPSBusinessItemFetching> {
    BCSBusinessQueryService * _businessQueryService;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)fetchBusinessMetadataForURL:(id)arg1 availabilityHandler:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)fetchBusinessMetadataForURL:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchBusinessMetadataForURLHash:(id)arg1 completion:(id /* block */)arg2;

@end
