
@interface VCPCNNBlurAnalyzer : VCPImageAnalyzer {
    unsigned long long  _revision;
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
    bool  _sdof;
}

@property bool sdof;

+ (id)analyzer;
+ (id)analyzerWithRevision:(unsigned long long)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (float)calculateScoreFromNetworkOutput:(float*)arg1 outChannel:(int)arg2 outHeight:(int)arg3 outWidth:(int)arg4 textureness:(char *)arg5 contrast:(float)arg6 imgWidth:(int)arg7;
- (int)computeCNNBasedSharpness:(struct __CVBuffer { }*)arg1 sharpnessScore:(float*)arg2 textureScore:(float*)arg3 contrast:(float)arg4 cancel:(id /* block */)arg5;
- (int)computeSharpnessScore:(float*)arg1 textureness:(char *)arg2 contrast:(float)arg3 imgWidth:(int)arg4 cancel:(id /* block */)arg5;
- (void)copyBufferFrom:(char *)arg1 fromStride:(long long)arg2 toPtr:(float*)arg3 toStride:(long long)arg4 toWidth:(int)arg5 toHeight:(int)arg6;
- (float*)getInputBuffer:(int)arg1 srcWidth:(int)arg2 cnnInputHeight:(int*)arg3 cnnInputWidth:(int*)arg4;
- (unsigned long long)getRevision;
- (id)init;
- (id)initWithRevision:(unsigned long long)arg1;
- (int)prepareModelForSourceWidth:(int)arg1 andSourceHeight:(int)arg2;
- (int)scaleRegion:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 ofImage:(struct __CVBuffer { }*)arg2 toData:(float*)arg3 withWidth:(int)arg4 andHeight:(int)arg5;
- (bool)sdof;
- (void)setSdof:(bool)arg1;

@end
