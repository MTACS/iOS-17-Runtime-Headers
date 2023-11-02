
@interface FigM2MController : NSObject {
    struct __IOSurfaceAccelerator { } * _accelRef;
    struct { 
        int hTaps; 
        int vTaps; 
        int hPhases; 
        int vPhases; 
        int prePointBits; 
        int postPointBits; 
        struct CGSize { 
            double width; 
            double height; 
        } maxUpscale; 
        struct CGSize { 
            double width; 
            double height; 
        } maxDownscale; 
    }  _cap;
    struct __CFDictionary { } * _runOptions;
    bool  _useCustomCoeff;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } maxDownscale;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } maxUpscale;

- (int)_transform:(struct __CVBuffer { }*)arg1 srcRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 dst:(struct __CVBuffer { }*)arg3 dstRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 symmetricTransform:(unsigned int)arg5 sync_m2m:(bool)arg6;
- (int)clearHistorgramMode;
- (int)copyHistogram:(struct { unsigned int x1; unsigned int x2[384]; unsigned int *x3; unsigned int *x4; unsigned int *x5; }*)arg1;
- (void)dealloc;
- (int)downsample:(struct __CVBuffer { }*)arg1 dst:(struct __CVBuffer { }*)arg2 sync_m2m:(bool)arg3;
- (id)init;
- (struct CGSize { double x1; double x2; })maxDownscale;
- (struct CGSize { double x1; double x2; })maxUpscale;
- (int)queryCapabilities;
- (int)setCustomFilter:(int)arg1 alignment:(int)arg2 sourceWidth:(unsigned long long)arg3 sourceHeight:(unsigned long long)arg4 destinationWidth:(unsigned long long)arg5 destinationHeight:(unsigned long long)arg6 luma_param:(float)arg7 chroma_param:(float)arg8;
- (int)setCustomFilter:(int)arg1 alignment:(int)arg2 src:(struct __CVBuffer { }*)arg3 dst:(struct __CVBuffer { }*)arg4 luma_param:(float)arg5 chroma_param:(float)arg6;
- (int)setHistogramMode:(int)arg1 dstRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (int)transform:(struct __CVBuffer { }*)arg1 srcRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 dst:(struct __CVBuffer { }*)arg3 dstRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 rotate:(int)arg5 flipX:(bool)arg6 flipY:(bool)arg7 sync_m2m:(bool)arg8;
- (int)transform:(struct __CVBuffer { }*)arg1 srcRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 dst:(struct __CVBuffer { }*)arg3 dstRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 rotate:(int)arg5 sync_m2m:(bool)arg6;
- (int)transform:(struct __CVBuffer { }*)arg1 srcRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 dst:(struct __CVBuffer { }*)arg3 sync_m2m:(bool)arg4;

@end
