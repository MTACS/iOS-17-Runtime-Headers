
@interface BLStreamingKeyRequest : ICRequestOperation {
    AVAssetResourceLoadingRequest * _loadingRequest;
    MPMediaItem * _mediaItem;
    BLStoreItemMetadataRequest * _metadataRequest;
    ICSecureKeyDeliveryRequest * _secureKeyRequest;
}

- (void).cxx_destruct;
- (void)_performStreamingKeyRequestForHLSAsset:(id)arg1;
- (void)execute;
- (id)initWithMediaItem:(id)arg1 loadingRequest:(id)arg2;
- (void)performRequestWithResponseHandler:(id /* block */)arg1;

@end
