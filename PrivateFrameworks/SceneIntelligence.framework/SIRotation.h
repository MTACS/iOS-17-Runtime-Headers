
@interface SIRotation : NSObject {
    unsigned long long  _algorithmKey;
    bool  _isCrop;
    unsigned int  _outputPixelFormat;
    struct CGSize { 
        double width; 
        double height; 
    }  _outputResolution;
    struct __CVPixelBufferPool { } * _pixelBufferCreatePool;
    int  _rotationDegree;
    struct OpaqueVTPixelRotationSession { } * _sessionRotate;
}

- (struct __CVBuffer { }*)_createCVPixelBufferWithResolution:(struct CGSize { double x1; double x2; })arg1 pixelFormat:(unsigned int)arg2;
- (struct OpaqueVTPixelRotationSession { }*)_createRotationSessionByRotationDegree:(int)arg1;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })getCenterCropSrcSize:(struct CGSize { double x1; double x2; })arg1 dstSize:(struct CGSize { double x1; double x2; })arg2;
- (id)getInputRotateOrientation;
- (id)initForRotationDegree:(int)arg1 resolution:(struct CGSize { double x1; double x2; })arg2 pixelFormat:(unsigned int)arg3 algorithmKey:(id)arg4;
- (struct __CVBuffer { }*)rotateAndCropImage:(struct __CVBuffer { }*)arg1;
- (bool)rotateAndCropImage:(struct __CVBuffer { }*)arg1 outputBuffer:(struct __CVBuffer { }*)arg2;
- (struct __CVBuffer { }*)rotateImage:(struct __CVBuffer { }*)arg1;
- (bool)rotateImage:(struct __CVBuffer { }*)arg1 outputBuffer:(struct __CVBuffer { }*)arg2;

@end
