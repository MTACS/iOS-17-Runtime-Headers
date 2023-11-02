
@interface VCPMoFlowSingleEspresso : VCPImageMotionFlowAnalyzer {
    float * _flow;
    bool  _flushModel;
    bool  _forceCPU;
    NSArray * _inputNames;
    struct vector<float *, std::allocator<float *>> { 
        float **__begin_; 
        float **__end_; 
        struct __compressed_pair<float **, std::allocator<float *>> { 
            float **__value_; 
        } __end_cap_; 
    }  _inputsData;
    VCPCNNModelEspresso * _modelEspresso;
    NSURL * _netFileUrl;
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
    bool  _sharedModel;
}

+ (id)sharedModel:(id)arg1 inputNames:(id)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (int)analyzeImages:(struct __CVBuffer { }*)arg1 secondImage:(struct __CVBuffer { }*)arg2 cancel:(id /* block */)arg3;
- (int)configForAspectRatio:(id)arg1;
- (int)copyImage:(struct __CVBuffer { }*)arg1 toData:(float*)arg2 withChannels:(int)arg3;
- (int)createInput:(float*)arg1 withBuffer:(struct __CVBuffer { }*)arg2 cnnInputHeight:(int)arg3 cnnInputWidth:(int)arg4;
- (void)dealloc;
- (int)flowScalingTo:(struct __CVBuffer { }*)arg1 flowBufferY:(struct __CVBuffer { }*)arg2 scalerX:(float)arg3 scalerY:(float)arg4;
- (int)flowScalingTo:(struct __CVBuffer { }*)arg1 scalerX:(float)arg2 scalerY:(float)arg3;
- (int)getFlowToBuffer:(struct __CVBuffer { }*)arg1;
- (float*)getFlowWithHeight:(int*)arg1 andWidth:(int*)arg2;
- (int)prepareModel;
- (int)prepareWithLightweightOption:(bool)arg1 aspectRatio:(id)arg2 forceCPU:(bool)arg3 sharedModel:(bool)arg4 flushModel:(bool)arg5;
- (int)reInitModel;
- (int)updateModelForAspectRatio:(id)arg1 computationAccuracy:(unsigned int)arg2;

@end
