
@interface BWScalingSession : NSObject {
    BWPixelBufferPool * _intermediateBufferPool;
    struct { 
        int width; 
        int height; 
    }  _intermediateBufferPoolDimensions;
    struct OpaqueVTPixelRotationSession { } * _rotationSession;
    int  _rotationSessionDegrees;
    struct OpaqueVTPixelTransferSession { } * _transferSession;
}

- (void)_ensurePixelTransferSession;
- (id)_newIntermediatePoolWithDimensions:(struct { int x1; int x2; })arg1 pixelFormat:(unsigned int)arg2;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (int)scalePixelBuffer:(struct __CVBuffer { }*)arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 exifOrientation:(int)arg3 intoPixelBuffer:(struct __CVBuffer { }*)arg4 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5;
- (int)scalePixelBuffer:(struct __CVBuffer { }*)arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 intoPixelBuffer:(struct __CVBuffer { }*)arg3 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;

@end
