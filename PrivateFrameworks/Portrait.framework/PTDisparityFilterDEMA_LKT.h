
@interface PTDisparityFilterDEMA_LKT : NSObject <PTAbstractDisparityFilter> {
    <MTLBuffer> * _avgDisplacement;
    NSArray * _demaStates;
    float  _direction;
    struct { 
        unsigned long long width; 
        unsigned long long height; 
        unsigned long long depth; 
    }  _disparityFilteredSize;
    struct { 
        unsigned long long width; 
        unsigned long long height; 
        unsigned long long depth; 
    }  _disparitySize;
    NSString * _dumpInputOutputFolder;
    int  _frameCount;
    PTGlobalReduction * _globalReduction;
    PTMetalContext * _metalContext;
    bool  _motionVisualization;
    PTOpticalFlow * _opticalFlow;
    <MTLComputePipelineState> * _resampleDisparity;
    <MTLSamplerState> * _samplerState;
    <MTLComputePipelineState> * _temporalFilterDEMA_LKT;
    <MTLComputePipelineState> * _temporalFilterDEMA_LKT_VisualizeMotion;
    PTUtil * _util;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (int)copyDisparity:(id)arg1 inDisparity:(id)arg2 outDisparity:(id)arg3;
- (int)exponentialMovingAverageFilter:(id)arg1 inDisplacement:(id)arg2 inDemaPrev:(id)arg3 inDisparity:(id)arg4 outDisparity:(id)arg5 outDEMA:(id)arg6;
- (id)initWithMetalContext:(id)arg1;
- (id)initWithMetalContext:(id)arg1 disparitySize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg2 disparityFilteredSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg3 disparityPixelFormat:(unsigned long long)arg4 colorSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg5 colorPixelFormat:(unsigned long long)arg6 sensorPort:(id)arg7;
- (id)initWithMetalContext:(id)arg1 sensorPort:(id)arg2;
- (int)prepareFilter:(id)arg1 inRGBA:(id)arg2 outDisplacement:(id)arg3;
- (void)reset;
- (int)temporalDisparityFilter:(id)arg1 inDisplacement:(id)arg2 inDisparityPrev:(id)arg3 inDisparity:(id)arg4 outDisparity:(id)arg5 disparityBias:(float)arg6;
- (int)temporalDisparityFilter:(id)arg1 inDisplacement:(id)arg2 inStatePrev:(id)arg3 inDisparity:(id)arg4 outDisparity:(id)arg5 outState:(id)arg6;

@end
