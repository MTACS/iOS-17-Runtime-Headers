
@interface _PXAppleMusicMediaProviderRequest : NSObject {
    PXAppleMusicAsset * _asset;
    PXAudioRequestOptions * _options;
    long long  _requestID;
    id /* block */  _resultHandler;
    long long  _signpostID;
}

@property (nonatomic, readonly) PXAppleMusicAsset *asset;
@property (nonatomic, readonly) PXAudioRequestOptions *options;
@property (nonatomic, readonly) long long requestID;
@property (nonatomic, readonly) id /* block */ resultHandler;
@property (nonatomic) long long signpostID;

- (void).cxx_destruct;
- (id)asset;
- (id)init;
- (id)initWithAsset:(id)arg1 options:(id)arg2 requestID:(long long)arg3 resultHandler:(id /* block */)arg4;
- (id)options;
- (long long)requestID;
- (id /* block */)resultHandler;
- (void)setSignpostID:(long long)arg1;
- (long long)signpostID;

@end
