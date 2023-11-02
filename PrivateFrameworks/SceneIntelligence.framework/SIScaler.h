
@interface SIScaler : NSObject {
    unsigned long long  _algorithmKey;
    unsigned long long  _outputBufferBytePerRowAlignment;
    unsigned int  _outputPixelFormat;
    struct CGSize { 
        double width; 
        double height; 
    }  _outputResolution;
    struct __CVPixelBufferPool { } * _pool;
    struct OpaqueVTPixelTransferSession { } * _session;
}

- (bool)_imageConformsToOutput:(struct __CVBuffer { }*)arg1;
- (struct __CVBuffer { }*)createScaledImage:(struct __CVBuffer { }*)arg1;
- (void)dealloc;
- (id)initForInputResolution:(struct CGSize { double x1; double x2; })arg1 outputResolution:(struct CGSize { double x1; double x2; })arg2 outputPixelFormat:(unsigned int)arg3;
- (id)initForInputResolution:(struct CGSize { double x1; double x2; })arg1 outputResolution:(struct CGSize { double x1; double x2; })arg2 outputPixelFormat:(unsigned int)arg3 mode:(unsigned long long)arg4;
- (id)initForOutputResolution:(struct CGSize { double x1; double x2; })arg1 outputPixelFormat:(unsigned int)arg2 mode:(unsigned long long)arg3;
- (id)initForOutputResolution:(struct CGSize { double x1; double x2; })arg1 outputPixelFormat:(unsigned int)arg2 mode:(unsigned long long)arg3 algorithmKey:(id)arg4;
- (id)initForOutputResolution:(struct CGSize { double x1; double x2; })arg1 outputPixelFormat:(unsigned int)arg2 mode:(unsigned long long)arg3 bytePerRowAlignment:(unsigned long long)arg4 algorithmKey:(id)arg5;
- (struct __CVBuffer { }*)scaleImage:(struct __CVBuffer { }*)arg1;
- (bool)scaleImage:(struct __CVBuffer { }*)arg1 outputBuffer:(struct __CVBuffer { }*)arg2;

@end
