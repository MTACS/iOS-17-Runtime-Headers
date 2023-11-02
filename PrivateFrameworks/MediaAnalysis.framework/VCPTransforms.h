
@interface VCPTransforms : NSObject {
    int  _minSize;
    struct Scaler { 
        struct CF<__CVPixelBufferPool *> { 
            struct __CVPixelBufferPool {} *value_; 
        } pool_; 
        int width_; 
        int height_; 
        unsigned int format_; 
        struct CF<OpaqueVTPixelTransferSession *> { 
            struct OpaqueVTPixelTransferSession {} *value_; 
        } transfer_session_; 
    }  _scaler;
    int  _transformedImageHeight;
    int  _transformedImageWidth;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct __CVBuffer { }*)cropAndScale:(struct __CVBuffer { }*)arg1 regionCrop:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)initImageTransform:(int)arg1 transformedImageWidth:(int)arg2 transformedImageHeight:(int)arg3;

@end
