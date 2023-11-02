
@interface VCPImageBlurAnalyzer : VCPBlurAnalyzer {
    VCPCNNBlurAnalyzer * _blurAnalyzer;
    float  _contrast;
    VCPCNNData * _faceInput;
    VCPCNNModel * _faceModel;
    NSArray * _faces;
    NSArray * _framePTSResults;
    NSArray * _homographyResults;
    float  _imageExposureTime;
    float  _livePhotoStillDisplayTime;
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
    float  _sharpness;
    float  _sharpnessBlocks;
    float  _textureScore;
    bool  _useGPU;
}

@property (readonly) float sharpness;
@property (readonly) float textureScore;

- (id).cxx_construct;
- (void).cxx_destruct;
- (int)analyzePixelBuffer:(struct __CVBuffer { }*)arg1 flags:(unsigned long long*)arg2 results:(id*)arg3 cancel:(id /* block */)arg4;
- (int)analyzePixelBuffer:(struct __CVBuffer { }*)arg1 flags:(unsigned long long*)arg2 withPreAnalysisScore:(float)arg3 results:(id*)arg4 cancel:(id /* block */)arg5;
- (int)computeCNNFaceSharpness:(struct __CVBuffer { }*)arg1 result:(float*)arg2 cancel:(id /* block */)arg3;
- (int)computeGyroSharpness:(float*)arg1;
- (int)computeLocalSharpness:(struct __CVBuffer { }*)arg1;
- (int)computeSharpnessScore:(float*)arg1 forFacesInImage:(struct __CVBuffer { }*)arg2;
- (float)estimateDistance:(id)arg1 prevHomography:(id)arg2;
- (float)getFaceScoreFromOutput:(id)arg1 ratio:(float)arg2;
- (id)initWithFaceResults:(id)arg1 sdof:(bool)arg2;
- (id)initWithFaceResults:(id)arg1 sdof:(bool)arg2 revision:(unsigned long long)arg3;
- (int)prepareFaceBlurModel:(bool)arg1;
- (int)scaleRegion:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 ofImage:(struct __CVBuffer { }*)arg2 toData:(id)arg3 withWidth:(int)arg4 andHeight:(int)arg5;
- (void)setFaceResults:(id)arg1;
- (void)setGyroSharpnessParam:(id)arg1 homographyResults:(id)arg2 livePhotoStillDisplayTime:(float)arg3 imageExposureTime:(float)arg4;
- (float)sharpness;
- (void)spatialPooling;
- (float)textureScore;

@end
