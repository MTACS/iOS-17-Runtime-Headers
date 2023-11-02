
@interface _PXVisualIntelligenceRequest : NSObject {
    <PXDisplayAsset> * _asset;
    struct CGImage { } * _cgImage;
    long long  _cgImageOrPixelBufferOrientation;
    UIImage * _image;
    struct __CVBuffer { } * _pixelBuffer;
    int  _requestID;
    id /* block */  _resultHandler;
    int  _vkRequestID;
}

@property (nonatomic, readonly) <PXDisplayAsset> *asset;
@property (nonatomic, readonly) struct CGImage { }*cgImage;
@property (nonatomic, readonly) long long cgImageOrPixelBufferOrientation;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, readonly) struct __CVBuffer { }*pixelBuffer;
@property (nonatomic, readonly) int requestID;
@property (nonatomic, readonly) id /* block */ resultHandler;
@property (nonatomic, readonly) VKCImageAnalyzerRequest *vkImageRequest;
@property (nonatomic) int vkRequestID;

- (void).cxx_destruct;
- (id)asset;
- (struct CGImage { }*)cgImage;
- (long long)cgImageOrPixelBufferOrientation;
- (void)dealloc;
- (id)image;
- (id)initWithAsset:(id)arg1 cgImage:(struct CGImage { }*)arg2 orientation:(long long)arg3 requestID:(int)arg4 resultHandler:(id /* block */)arg5;
- (id)initWithAsset:(id)arg1 image:(id)arg2 requestID:(int)arg3 resultHandler:(id /* block */)arg4;
- (id)initWithAsset:(id)arg1 pixelBuffer:(struct __CVBuffer { }*)arg2 orientation:(long long)arg3 requestID:(int)arg4 resultHandler:(id /* block */)arg5;
- (id)initWithAsset:(id)arg1 requestID:(int)arg2 resultHandler:(id /* block */)arg3;
- (struct __CVBuffer { }*)pixelBuffer;
- (int)requestID;
- (id /* block */)resultHandler;
- (void)setVkRequestID:(int)arg1;
- (id)vkImageRequest;
- (int)vkRequestID;

@end
