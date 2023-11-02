
@interface PTDisparityPostProcessing : NSObject {
    struct { 
        unsigned long long width; 
        unsigned long long height; 
        unsigned long long depth; 
    }  _colorSize;
    <PTAbstractDisparityFilter> * _disparityFilter;
    struct { 
        unsigned long long width; 
        unsigned long long height; 
        unsigned long long depth; 
    }  _disparitySize;
    struct { 
        unsigned long long width; 
        unsigned long long height; 
        unsigned long long depth; 
    }  _filteredDisparitySize;
    PTMetalContext * _metalContext;
}

+ (int)prewarmForMediaserverd;
+ (int)prewarmWithDescriptor:(id)arg1;

- (void).cxx_destruct;
- (int)computeOpticalFlow:(id)arg1 outDisplacement:(id)arg2;
- (id)initWithCommandQueue:(id)arg1 disparitySize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg2 filteredDisparitySize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg3 disparityPixelFormat:(unsigned long long)arg4 colorSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg5 colorPixelFormat:(unsigned long long)arg6 sensorPort:(id)arg7;
- (id)initWithDescriptor:(id)arg1;
- (void)reset;
- (int)temporalDisparityFilter:(id)arg1 inDisplacement:(id)arg2 inDisparityFilteredPrev:(id)arg3 outDisparityFiltered:(id)arg4 disparityBias:(float)arg5;
- (int)temporalDisparityFilter:(id)arg1 inStatePrev:(id)arg2 inDisparity:(id)arg3 outDisparityFiltered:(id)arg4 outState:(id)arg5;

@end
