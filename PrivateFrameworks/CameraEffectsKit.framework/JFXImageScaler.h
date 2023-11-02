
@interface JFXImageScaler : NSObject {
    bool  _useCPU;
    struct OpaqueVTPixelTransferSession { } * _vtPixelTransferSession;
}

- (void)dealloc;
- (id)initForCPU:(bool)arg1;
- (void)scaleImage:(struct __CVBuffer { }*)arg1 destinationImage:(struct __CVBuffer { }*)arg2;

@end
