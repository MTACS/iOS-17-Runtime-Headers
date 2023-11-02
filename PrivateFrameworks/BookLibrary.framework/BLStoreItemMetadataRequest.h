
@interface BLStoreItemMetadataRequest : ICRequestOperation {
    ICBuyProductRequest * _buyProductRequest;
    MPMediaItem * _mediaItem;
    ICStoreRequestContext * _requestContext;
    ICStoreMediaResponseItem * _storeMetadata;
}

- (void).cxx_destruct;
- (void)_performBuyProductRequest;
- (id)_responseDictionaryForKeyCertificateURL:(id)arg1 keyServerURL:(id)arg2;
- (void)execute;
- (id)initWithRequestContext:(id)arg1 mediaItem:(id)arg2;
- (void)performRequestWithResponseHandler:(id /* block */)arg1;

@end
