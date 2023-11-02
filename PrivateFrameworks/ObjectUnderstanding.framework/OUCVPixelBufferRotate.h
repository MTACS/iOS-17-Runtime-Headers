
@interface OUCVPixelBufferRotate : NSObject {
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

- (struct OpaqueVTPixelRotationSession { }*)_createRotationSessionByRotationDegree:(int)arg1;
- (void)dealloc;
- (id)initForRotationDegree:(int)arg1 resolution:(struct CGSize { double x1; double x2; })arg2 pixelFormat:(unsigned int)arg3;
- (struct __CVBuffer { }*)rotateImage:(struct __CVBuffer { }*)arg1;

@end
