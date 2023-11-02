
@interface VCPHomeKitMotionAnalyzer : VCPVideoAnalyzer {
    float  _actionScore;
    int  _blockSize;
    float * _diff;
    struct vector<__CVBuffer *, std::allocator<__CVBuffer *>> { 
        struct __CVBuffer {} **__begin_; 
        struct __CVBuffer {} **__end_; 
        struct __compressed_pair<__CVBuffer **, std::allocator<__CVBuffer *>> { 
            struct __CVBuffer {} **__value_; 
        } __end_cap_; 
    }  _frameArray;
    int  _frameHeight;
    int  _frameWidth;
    int  _height;
    int  _heightBlockNum;
    float * _ptrFirst;
    float * _ptrLast;
    NSMutableArray * _regions;
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
    int  _stride;
    int  _width;
    int  _widthBlockNum;
}

@property (readonly) float actionScore;

- (id).cxx_construct;
- (void).cxx_destruct;
- (float)actionScore;
- (int)analyzeFrame:(struct __CVBuffer { }*)arg1 withTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 andDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 flags:(unsigned long long*)arg4;
- (int)calculateFrameDifference:(struct __CVBuffer { }*)arg1;
- (int)computeRegionsofInterest;
- (void)dealloc;
- (id)init;
- (id)regionsOfInterest;
- (int)setPixelBuffer:(struct __CVBuffer { }*)arg1;

@end
