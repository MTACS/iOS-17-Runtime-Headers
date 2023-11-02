
@interface VCPModelR2D2 : VCPImageMotionFlowAnalyzer {
    VCPBackwarp * _backwarp;
    VCPCorrelation * _correlation;
    VCPFlowFeatureExtractor * _featureExtractor;
    struct __CVBuffer { } * _firstBuffer;
    VCPFlowDecoder * _flowDecoder;
    NSObject<OS_dispatch_semaphore> * _flowDecoderSemaphore;
    struct { 
        struct { 
            int channels; 
            int height; 
            int width; 
        } featureShape[7]; 
        struct __CVBuffer {} *feature[7]; 
    }  _imageFeature;
    int  _numLevels;
    struct __CVBuffer { } * _outputFlow;
    NSString * _resConfig;
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
    struct __CVBuffer { } * _secondBuffer;
    int  _startLevel;
    struct { 
        struct __CVBuffer {} *correlations[7]; 
        struct __CVBuffer {} *flows[7]; 
        struct __CVBuffer {} *upscaledFlows[7]; 
        struct __CVBuffer {} *warpedBuffers[7]; 
    }  _storage;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (int)allocateCorreleationBuffer:(struct __CVBuffer {}**)arg1 forLevel:(unsigned int)arg2;
- (int)allocateFeatures;
- (int)allocateInputAndOutputBuffers;
- (int)allocateStorages;
- (int)analyzeImages:(struct __CVBuffer { }*)arg1 secondImage:(struct __CVBuffer { }*)arg2 cancel:(id /* block */)arg3;
- (int)configForAspectRatio:(id)arg1;
- (int)copyImage:(struct __CVBuffer { }*)arg1 toBuffer:(struct __CVBuffer { }*)arg2 withChannels:(int)arg3;
- (int)createInput:(struct __CVBuffer { }*)arg1 withImage:(struct __CVBuffer { }*)arg2 modelInputHeight:(int)arg3 modelInputWidth:(int)arg4;
- (int)createModules:(id /* block */)arg1;
- (void)dealloc;
- (int)estimateFlowForLevel:(int)arg1 upperFlow:(struct __CVBuffer { }*)arg2 outputFlow:(struct __CVBuffer { }*)arg3;
- (int)estimateMotionFlow:(struct __CVBuffer { }*)arg1;
- (int)extractFeatureFromImage:(struct __CVBuffer { }*)arg1 toFeature:(struct { struct { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1[7]; struct __CVBuffer {} *x2[7]; }*)arg2;
- (int)extractFeaturesFromFirst:(struct __CVBuffer { }*)arg1 andSecond:(struct __CVBuffer { }*)arg2;
- (int)flowScalingTo:(struct __CVBuffer { }*)arg1 flowBufferY:(struct __CVBuffer { }*)arg2 scalerX:(float)arg3 scalerY:(float)arg4;
- (int)flowScalingTo:(struct __CVBuffer { }*)arg1 scalerX:(float)arg2 scalerY:(float)arg3;
- (int)getFlowToBuffer:(struct __CVBuffer { }*)arg1;
- (int)prepareWithLightweightOption:(bool)arg1 aspectRatio:(id)arg2 numLevels:(int)arg3 startLevel:(int)arg4 cancel:(id /* block */)arg5;
- (void)releaseFeatureBuffers;
- (int)releaseInputAndOutputBuffers;
- (void)releaseMemory;
- (void)releaseStorages;
- (int)updateModelForAspectRatio:(id)arg1 computationAccuracy:(unsigned int)arg2;
- (int)updateModulesWithConfig:(id)arg1;

@end
