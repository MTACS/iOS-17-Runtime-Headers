
@interface PTDisparityFilterEMA_LKT : NSObject <PTAbstractDisparityFilter> {
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
    int  _frameIndex;
    PTMetalContext * _metalContext;
    PTOpticalFlow * _opticalFlow;
    <MTLComputePipelineState> * _temporalFilterEMA_LKT;
    <MTLComputePipelineState> * _temporalFilterEMA_LKTDisparityNormal;
    <MTLComputePipelineState> * _temporalFilterEMA_LKTNormal;
    PTUtil * _util;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (int)emaFilterDisparity:(id)arg1 inDisplacement:(id)arg2 inDisparityPrev:(id)arg3 inDisparity:(id)arg4 outDisparity:(id)arg5 frameIndex:(int)arg6 scale:(float)arg7;
- (int)emaFilterDisparityNormal:(id)arg1 inDisplacement:(id)arg2 inDisparityPrev:(id)arg3 inDisparity:(id)arg4 outDisparity:(id)arg5 inNormalPrev:(id)arg6 inNormal:(id)arg7 outNormal:(id)arg8 frameIndex:(int)arg9;
- (int)gaussEMAFilterNormal:(id)arg1 inDisplacement:(id)arg2 inNormalPrev:(id)arg3 inNormal:(id)arg4 outNormal:(id)arg5 frameIndex:(int)arg6;
- (id)initWithMetalContext:(id)arg1;
- (id)initWithMetalContext:(id)arg1 disparitySize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg2 disparityFilteredSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg3 disparityPixelFormat:(unsigned long long)arg4 colorSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg5 colorPixelFormat:(unsigned long long)arg6 sensorPort:(id)arg7;
- (int)prepareFilter:(id)arg1 inRGBA:(id)arg2 outDisplacement:(id)arg3;
- (void)reset;
- (int)temporalDisparityFilter:(id)arg1 inDisplacement:(id)arg2 inDisparityPrev:(id)arg3 inDisparity:(id)arg4 outDisparity:(id)arg5 disparityBias:(float)arg6;
- (int)temporalDisparityFilter:(id)arg1 inDisplacement:(id)arg2 inStatePrev:(id)arg3 inDisparity:(id)arg4 outDisparity:(id)arg5 outState:(id)arg6;

@end
