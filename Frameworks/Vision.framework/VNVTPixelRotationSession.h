
@interface VNVTPixelRotationSession : VNVTSession {
    struct OpaqueVTPixelRotationSession { } * _pixelRotationSession;
    unsigned int  _rotation;
}

- (void)dealloc;

@end
