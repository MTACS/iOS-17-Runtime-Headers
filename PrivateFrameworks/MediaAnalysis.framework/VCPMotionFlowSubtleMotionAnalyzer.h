
@interface VCPMotionFlowSubtleMotionAnalyzer : VCPVideoAnalyzer {
    float * _block;
    int  _blockSize;
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
    VCPImageMotionFlowAnalyzer * _motionFlowAnalyzer;
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
    int  _sceneType;
    float  _subtleMotionScore;
    struct OpaqueVTPixelTransferSession { } * _transferSession;
    bool  _useR2D2;
}

@property (readonly) float subtleMotionScore;

+ (bool)enableR2D2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (int)analyzePixelBuffer:(struct __CVBuffer { }*)arg1 withFrame:(void*)arg2 withTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 andDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4 hasSubtleScene:(int)arg5 cancel:(id /* block */)arg6;
- (int)convertFlow:(struct __CVBuffer { }*)arg1;
- (int)convertPixelBuffer:(struct __CVBuffer { }*)arg1 toPixelBuffer:(struct __CVBuffer {}**)arg2 withPixelFormat:(int)arg3;
- (int)createPixelBufferWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 pixelFormat:(int)arg3 pixelBuffer:(struct __CVBuffer {}**)arg4;
- (void)dealloc;
- (int)generateMotionFlow;
- (int)generateSubleMotionScore:(void*)arg1;
- (id)init;
- (int)preProcessing:(struct __CVBuffer { }*)arg1;
- (int)prepareAnalyzerWithCVPixelBuffer:(struct __CVBuffer { }*)arg1 cancel:(id /* block */)arg2;
- (float)subtleMotionScore;

@end
