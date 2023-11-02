
@interface PAEAddNoise : PAEFilterDefaultBase

- (bool)addParameters;
- (bool)canThrowRenderOutput:(id)arg1 withInput:(id)arg2 withInfo:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg3;
- (id)dynamicPropertiesAtTime:(union { double x1; struct { /* ? */ } *x2; })arg1 withError:(id*)arg2;
- (bool)frameSetup:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg1 inputInfo:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; bool x8; double x9; })arg2 hardware:(bool*)arg3 software:(bool*)arg4;
- (id)initWithAPIManager:(id)arg1;
- (struct HGRef<HGNode> { struct HGNode {} *x1; })noiseNodeWithWidth:(int)arg1 height:(int)arg2 noiseType:(int)arg3 isMono:(bool)arg4 frameNum:(double)arg5 autoAnimate:(bool)arg6 randomSeed:(int)arg7 inputPixelTransform:(struct PCMatrix44Tmpl<double> { double x1[4][4]; })arg8 outputPixelTransform:(struct PCMatrix44Tmpl<double> { double x1[4][4]; })arg9 outputInvPixelTransform:(struct PCMatrix44Tmpl<double> { double x1[4][4]; })arg10 is360:(bool)arg11;
- (bool)parameterChanged:(unsigned int)arg1;
- (id)properties;
- (struct HGRef<HGNode> { struct HGNode {} *x1; })translateNode:(struct HGRef<HGNode> { struct HGNode {} *x1; })arg1 byAmount:(struct PCVector2<double> { double x1; double x2; })arg2 andCropTo:(struct HGRect { int x1; int x2; int x3; int x4; })arg3;
- (bool)variesOverTime;

@end
