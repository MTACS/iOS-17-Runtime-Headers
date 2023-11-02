
@interface _PXAudioAssetImageProviderRequest : NSObject <PXAudioAssetImageProviderRequest> {
    <PXDisplayAsset> * _asset;
    long long  _contentMode;
    PXImageRequestOptions * _options;
    long long  _requestID;
    id /* block */  _resultHandler;
    unsigned long long  _signpostID;
    struct CGSize { 
        double width; 
        double height; 
    }  _targetSize;
}

@property (nonatomic, readonly) <PXDisplayAsset> *asset;
@property (nonatomic, readonly) long long contentMode;
@property (nonatomic, readonly) PXImageRequestOptions *options;
@property (nonatomic, readonly) long long requestID;
@property (nonatomic, readonly) id /* block */ resultHandler;
@property (nonatomic, readonly) unsigned long long signpostID;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } targetSize;

- (void).cxx_destruct;
- (id)asset;
- (long long)contentMode;
- (id)description;
- (id)init;
- (id)initWithAsset:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(id /* block */)arg5 requestID:(long long)arg6 signpostID:(unsigned long long)arg7;
- (id)options;
- (long long)requestID;
- (id /* block */)resultHandler;
- (unsigned long long)signpostID;
- (struct CGSize { double x1; double x2; })targetSize;

@end
