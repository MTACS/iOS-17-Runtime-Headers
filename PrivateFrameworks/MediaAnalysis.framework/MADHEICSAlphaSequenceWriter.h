
@interface MADHEICSAlphaSequenceWriter : MADAlphaSequenceWriter {
    struct CF<__CVPixelBufferPool *> { 
        struct __CVPixelBufferPool {} *value_; 
    }  _alphaPixelBufferPool;
    struct CF<CMPhotoCompressionSession *> { 
        struct CMPhotoCompressionSession {} *value_; 
    }  _compressionSession;
    NSDictionary * _crop;
    struct CF<__CVPixelBufferPool *> { 
        struct __CVPixelBufferPool {} *value_; 
    }  _imagePixelBufferPool;
    long long  _sequenceIndex;
    int  _status;
}

+ (int)getOutputWidth:(unsigned long long*)arg1 outputHeight:(unsigned long long*)arg2 sequenceData:(id)arg3;
+ (id)transcodeSequenceData:(id)arg1 maxDimension:(unsigned long long)arg2 outputWidth:(unsigned long long*)arg3 outputHeight:(unsigned long long*)arg4;

- (id).cxx_construct;
- (void).cxx_destruct;
- (int)_addPixelBuffer420Alpha:(struct __CVBuffer { }*)arg1 withTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (int)_addPixelBufferBGRA:(struct __CVBuffer { }*)arg1 withTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (int)_createCompressionSessionLazy;
- (int)_finishWithEndTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 outputData:(id*)arg2;
- (int)addPixelBuffer:(struct __CVBuffer { }*)arg1 withTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (int)copyInputPlaneIndex:(unsigned long long)arg1 inputPixelBuffer:(struct __CVBuffer { }*)arg2 toOutputPlaneIndex:(unsigned long long)arg3 outputPixelBuffer:(struct __CVBuffer { }*)arg4 bytesPerPixel:(unsigned long long)arg5;
- (int)createPixelBufferPool:(struct __CVPixelBufferPool {}**)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 pixelFormat:(int)arg4;
- (int)demuxPixelBuffer:(struct __CVBuffer { }*)arg1 imagePixelBuffer:(struct __CVBuffer {}**)arg2 alphaPixelBuffer:(struct __CVBuffer {}**)arg3;
- (id)finishWithEndTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)initWithFrameCount:(unsigned long long)arg1 crop:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2;

@end
