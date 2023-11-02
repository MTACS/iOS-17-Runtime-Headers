
@interface ADStereoExecutor : ADExecutor {
    struct __CVBuffer { } * _auxColor;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _auxColorROI;
    struct __CVBuffer { } * _disparity;
    ADStereoExecutorParameters * _executorParameters;
    bool  _isPrepared;
    struct __CVBuffer { } * _itmChunkyAuxColor;
    struct __CVBuffer { } * _itmChunkyRefColor;
    struct __CVBuffer { } * _itmCroppedScaledAuxColor;
    struct __CVBuffer { } * _itmCroppedScaledRefColor;
    struct __CVBuffer { } * _itmRotatedAuxColor;
    struct __CVBuffer { } * _itmRotatedRefColor;
    ADStereoPipeline * _pipeline;
    struct __CVBuffer { } * _refColor;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _refColorROI;
}

@property (nonatomic, copy) ADStereoExecutorParameters *executorParameters;
@property (nonatomic, readonly, retain) ADStereoPipeline *pipeline;

- (void).cxx_destruct;
- (long long)allocateIntermediateBuffers;
- (void)dealloc;
- (void)deallocateEspressoBuffers;
- (long long)executeWithRefColor:(struct __CVBuffer { }*)arg1 auxColor:(struct __CVBuffer { }*)arg2 outDisparityMap:(struct __CVBuffer {}**)arg3;
- (id)executorParameters;
- (id)initWithInputAlignment:(unsigned long long)arg1 andPrioritization:(long long)arg2;
- (id)initWithInputAlignment:(unsigned long long)arg1 prioritization:(long long)arg2 andParameters:(id)arg3;
- (long long)numberOfExecutionSteps;
- (id)pipeline;
- (long long)prepareForEngineType:(unsigned long long)arg1;
- (long long)prepareWithBestEngine;
- (void)setExecutorParameters:(id)arg1;

@end
