
@interface VCPMotionFlowAnalyzer : VCPVideoAnalyzer {
    int  _downScaleHeight;
    int  _downScaleWidth;
    float * _flow;
    int  _flowHeight;
    int  _flowWidth;
    struct vector<__CVBuffer *, std::allocator<__CVBuffer *>> { 
        struct __CVBuffer {} **__begin_; 
        struct __CVBuffer {} **__end_; 
        struct __compressed_pair<__CVBuffer **, std::allocator<__CVBuffer *>> { 
            struct __CVBuffer {} **__value_; 
        } __end_cap_; 
    }  _frameArray;
    int  _frameHeight;
    int  _frameNum;
    int  _frameWidth;
    bool  _initialized;
    VCPMotionFlowRequest * _moflowRequest;
    bool  _scale;
    struct Scaler { 
        struct CF<__CVPixelBufferPool *> { 
            struct __CVPixelBufferPool {} *value_; 
        } pool_; 
        int width_; 
        int height_; 
        unsigned int format_; 
        struct CF<OpaqueVTPixelTransferSession *> { 
            struct OpaqueVTPixelTransferSession {} *value_; 
        } transfer_session_; 
    }  _scaler;
    struct OpaqueVTPixelTransferSession { } * _transferSession;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (int)analyzePixelBuffer:(struct __CVBuffer { }*)arg1 withFrame:(void*)arg2 withTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 andDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4 cancel:(id /* block */)arg5;
- (int)convertFlow:(struct __CVBuffer { }*)arg1;
- (int)convertPixelBuffer:(struct __CVBuffer { }*)arg1 toPixelBuffer:(struct __CVBuffer {}**)arg2 withPixelFormat:(int)arg3;
- (int)createPixelBufferWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 pixelFormat:(int)arg3 pixelBuffer:(struct __CVBuffer {}**)arg4;
- (void)dealloc;
- (int)generateMotionFlow;
- (id)init;
- (int)preProcessing:(struct __CVBuffer { }*)arg1;
- (int)prepareAnalyzerWithCVPixelBuffer:(struct __CVBuffer { }*)arg1 cancel:(id /* block */)arg2;

@end
