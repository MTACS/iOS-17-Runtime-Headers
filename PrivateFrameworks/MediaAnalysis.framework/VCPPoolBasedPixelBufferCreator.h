
@interface VCPPoolBasedPixelBufferCreator : NSObject {
    long long  _bufferHeight;
    long long  _bufferWidth;
    unsigned int  _pixelFormat;
    struct CF<__CVPixelBufferPool *> { 
        struct __CVPixelBufferPool {} *value_; 
    }  _pool;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (int)_createPixelBufferPool:(struct __CVPixelBufferPool {}**)arg1 withBufferWidth:(long long)arg2 bufferHeight:(long long)arg3 andPixelFormat:(unsigned int)arg4;
- (int)createPixelBuffer:(struct __CVBuffer {}**)arg1;
- (id)initWithBufferWidth:(long long)arg1 bufferHeight:(long long)arg2 andPixelFormat:(unsigned int)arg3;

@end
