
@interface VCPPreAnalysisImageLoader : NSObject {
    VCPSceneProcessingImageManager * _imageManager;
    VCPPoolBasedPixelBufferCreator * _monochromeBufferCreator;
    struct CF<OpaqueVTPixelTransferSession *> { 
        struct OpaqueVTPixelTransferSession {} *value_; 
    }  _transferSession;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (int)_convertFromBuffer:(struct __CVBuffer { }*)arg1 toLumaPixelBuffer:(struct __CVBuffer {}**)arg2 abnormalDimension:(unsigned long long)arg3;
- (int)_createPixelBufferWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 pixelFormat:(int)arg3 pixelBuffer:(struct __CVBuffer {}**)arg4;
- (id)initWithMonochromeBufferCreator:(id)arg1;
- (int)loadImageURL:(id)arg1 abnormalDimension:(unsigned long long)arg2 withNonPanoPreWarmSizes:(id)arg3 toColorPixelBuffer:(struct __CVBuffer {}**)arg4 lumaPixelBuffer:(struct __CVBuffer {}**)arg5 andImage:(id*)arg6;

@end
