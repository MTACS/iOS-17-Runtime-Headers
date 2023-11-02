
@interface PAESlicedScale : PAEFilterDefaultBase

- (bool)addParameters;
- (void)additionalObjectDownScale:(void*)arg1 objectScale:(struct PCVector2<double> { double x1; double x2; })arg2 innerScale:(struct PCVector2<double> { double x1; double x2; })arg3 xLeft:(double)arg4 xRight:(double)arg5 yTop:(double)arg6 yBottom:(double)arg7;
- (void)calculateBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 fromOrigin:(struct PCVector2<double> { double x1; double x2; })arg2 mode:(int)arg3 inputSize:(struct PCVector2<double> { double x1; double x2; })arg4 ignoreOffsets:(bool)arg5 xLeft:(double)arg6 xRight:(double)arg7 yBottom:(double)arg8 yTop:(double)arg9 objectScale:(struct PCVector2<double> { double x1; double x2; })arg10 offset:(struct PCVector2<double> { double x1; double x2; })arg11;
- (bool)canThrowRenderOutput:(id)arg1 withInput:(id)arg2 withInfo:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg3;
- (bool)frameSetup:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg1 inputInfo:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; bool x8; double x9; })arg2 hardware:(bool*)arg3 software:(bool*)arg4;
- (bool)getOutputBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 withInputBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 withInputInfo:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; bool x8; double x9; })arg3 withRenderInfo:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg4;
- (id)initWithAPIManager:(id)arg1;
- (void)innerScaleFromObjectScale:(struct PCVector2<double> { double x1; double x2; })arg1 innerScale:(void*)arg2 xLeft:(double)arg3 xRight:(double)arg4 yTop:(double)arg5 yBottom:(double)arg6 inputSize:(struct PCVector2<double> { double x1; double x2; })arg7 newObjectSize:(void*)arg8 mode:(int)arg9;
- (id)properties;
- (void)wholeTileExpandLeftScale:(double*)arg1 expandRightScale:(double*)arg2 expandBottomScale:(double*)arg3 expandTopScale:(double*)arg4 objectScale:(void*)arg5 xLeft:(double)arg6 xRight:(double)arg7 yBottom:(double)arg8 yTop:(double)arg9;

@end
