
@interface MOVStreamFrameTransform : NSObject {
    MIOPixelBufferPool * _pool;
    long long  _rotation;
    struct OpaqueVTPixelRotationSession { } * _rotationSession;
    struct OpaqueVTPixelTransferSession { } * _transferSession;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithRotation:(long long)arg1 flip:(long long)arg2;
- (struct __CVBuffer { }*)transform:(struct __CVBuffer { }*)arg1;

@end
