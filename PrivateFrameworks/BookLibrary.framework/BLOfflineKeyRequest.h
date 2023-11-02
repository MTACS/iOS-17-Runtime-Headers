
@interface BLOfflineKeyRequest : ICRequestOperation {
    ICStoreHLSAssetInfo * _assetInfo;
    NSString * _identity;
    MPMediaItem * _mediaItem;
    BLStoreItemMetadataRequest * _metadataRequest;
    NSData * _persistentKeyData;
    ICStoreRequestContext * _requestContext;
    BLSecureOfflineKeyDeliveryRequest * _secureKeyRequest;
}

- (void).cxx_destruct;
- (void)_performOfflineKeyRequest;
- (void)dealloc;
- (void)execute;
- (void)finishWithError:(id)arg1;
- (id)initWithMediaItem:(id)arg1 identity:(id)arg2;
- (void)performRequestWithResponseHandler:(id /* block */)arg1;

@end
