
@interface PTMSRResize : NSObject {
    struct __IOSurfaceAccelerator { } * _accelRef;
    NSMutableArray * _additionalSteps;
    int  _allocatedIOSurfaces;
    struct { 
        int hTaps; 
        int vTaps; 
        int hPhases; 
        int vPhases; 
        int prePointBits; 
        int postPointBits; 
    }  _cap;
    struct CGColorSpace { } * _csRGBLinear;
    struct CGColorSpace { } * _csSRGB;
    bool  _hasMSR;
    PTMetalContext * _metalContext;
    struct __IOSurface {} * _outputIOSurface;
    struct __CVBuffer {} * _outputPixelbuffer;
    NSArray * _pyramidRGBA;
    bool  _rotateTargetPixelBuffer;
    struct __CFDictionary { } * _runOptions;
    bool  _sRGB;
    PTUtil * _util;
}

- (void).cxx_destruct;
- (int)_downsample:(struct __IOSurface { }*)arg1 toDest:(struct __IOSurface { }*)arg2 useCustomFilter:(bool)arg3 centerAlignment:(bool)arg4 synchronous:(bool)arg5;
- (int)_rotate:(struct __IOSurface { }*)arg1 toDest:(struct __IOSurface { }*)arg2 synchronous:(bool)arg3;
- (struct __CVBuffer { }*)addAdditionalOutput:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1;
- (void)dealloc;
- (unsigned int)downsampleQuarterSizeToTargetSize:(struct __CVBuffer { }*)arg1;
- (int)downsampleToLayer:(int)arg1;
- (unsigned int)downsampleToQuarterSize:(struct __CVBuffer { }*)arg1;
- (id)init;
- (id)initWithMetalContext:(id)arg1 inputSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg2 targetSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg3 rotateTargetPixelBuffer:(bool)arg4 sRGB:(bool)arg5 sharedResources:(id)arg6;
- (id)pyramidRGBA;
- (struct __CVBuffer {}**)pyramidRGBAPixelBuffer;
- (int)queryCapabilities;
- (unsigned int)rotate:(void *)arg1 crop:(void *)arg2 rotationDegree:(void *)arg3 toDest:(void *)arg4 synchronous:(void *)arg5; // needs 5 arg types, found 4: struct __IOSurface { }*, int, struct __IOSurface { }*, bool
- (int)setCustomFilter:(int)arg1 alignment:(int)arg2 sourceWidth:(unsigned long long)arg3 sourceHeight:(unsigned long long)arg4 destinationWidth:(unsigned long long)arg5 destinationHeight:(unsigned long long)arg6 luma_param:(float)arg7 chroma_param:(float)arg8;
- (id)targetRGBA;
- (struct __CVBuffer { }*)targetRGBAPixelBuffer;

@end
