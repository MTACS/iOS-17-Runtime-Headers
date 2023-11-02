
@interface RSCVPixelRotate : NSObject {
    bool  _isCrop;
    unsigned int  _outputPixelFormat;
    struct CGSize { 
        double width; 
        double height; 
    }  _outputResolution;
    struct __CVPixelBufferPool { } * _pixelBufferCreatePool;
    struct __CVBuffer { } * _rotatePixelBuffer;
    struct OpaqueVTPixelRotationSession { } * _sessionRotate;
}

- (void)dealloc;

@end
