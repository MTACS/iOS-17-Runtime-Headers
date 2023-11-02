
@interface PAEKeyer : PAEFilterDefaultBase {
    struct PCMutex { 
        int (**_vptr$PCMutex)(); 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } _Mutex; 
    }  _cacheMutex;
    bool  _isMotion;
    int  _lut2DSize;
    bool  _lut2DSizeCached;
    void * _lutsBitmapLoaderCache;
    PAEKeyerMatteTools * _matteTools;
    void * _omSamples;
    PAEKeyerPreprocess * _preprocessTools;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _prevRationalTime;
    union { 
        double frame; 
        struct { /* ? */ } *seconds; 
    }  _prevRectanglesFrame;
    bool  _toggledAdvancedMode;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)addParameters;
- (id)apiManager;
- (double)autokeyAmountToHistoPercent:(double)arg1;
- (bool)canThrowRenderOutput:(id)arg1 withInput:(id)arg2 withInfo:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg3;
- (void)clearKey;
- (void)computeModel:(bool)arg1 atTime:(union { double x1; struct { /* ? */ } *x2; })arg2;
- (void)dealloc;
- (bool)frameSetup:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg1 inputInfo:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; bool x8; double x9; })arg2 hardware:(bool*)arg3 software:(bool*)arg4;
- (id)getBlendOptionsAtTime:(union { double x1; struct { /* ? */ } *x2; })arg1;
- (int)getColorPrimaries;
- (void)getInputWidth:(float*)arg1 height:(float*)arg2 renderInfo:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg3;
- (struct HGRef<HGNode> { struct HGNode {} *x1; })getKeyerNode:(struct HGRef<HGNode> { struct HGNode {} *x1; })arg1 omKeyer:(void*)arg2 atTime:(union { double x1; struct { /* ? */ } *x2; })arg3;
- (id)initWithAPIManager:(id)arg1;
- (bool)is3DHistoExpandedForHDR;
- (bool)isApplyTuningForRec2020;
- (bool)isLumaKey;
- (bool)isLutExpandedForHDR;
- (bool)isSimpleKey;
- (bool)isWideGamutHDR;
- (int)lut2DSize;
- (id)properties;
- (bool)pullInitialKey:(id*)arg1;
- (bool)sampleEdge:(void*)arg1 renderInfo:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; }*)arg2 width:(float)arg3 height:(float)arg4;
- (bool)sampleRect:(void*)arg1 renderInfo:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; }*)arg2 width:(float)arg3 height:(float)arg4;
- (void)setInitialSamples:(void*)arg1;
- (bool)use32x32Histogram;

@end
