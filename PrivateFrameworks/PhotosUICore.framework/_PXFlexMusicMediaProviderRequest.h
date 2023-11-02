
@interface _PXFlexMusicMediaProviderRequest : NSObject {
    PXFlexMusicAsset * _asset;
    PXAudioRequestOptions * _options;
    long long  _requestID;
    id /* block */  _resultHandler;
}

@property (nonatomic, readonly) PXFlexMusicAsset *asset;
@property (nonatomic, readonly) PXAudioRequestOptions *options;
@property (nonatomic, readonly) long long requestID;
@property (nonatomic, readonly) id /* block */ resultHandler;

- (void).cxx_destruct;
- (id)asset;
- (id)init;
- (id)initWithAsset:(id)arg1 options:(id)arg2 requestID:(long long)arg3 resultHandler:(id /* block */)arg4;
- (id)options;
- (long long)requestID;
- (id /* block */)resultHandler;

@end
