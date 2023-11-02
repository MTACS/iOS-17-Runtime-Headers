
@interface PAEHSCurvesEffect : PAEBaseCorrectorEffect {
    int  _gradingMode;
    bool  _preserveLuma;
}

- (void)_registerColorCurveParameter:(int)arg1 name:(id)arg2 red:(double)arg3 green:(double)arg4 blue:(double)arg5;
- (void)_registerHueCurveParameter:(int)arg1 name:(id)arg2;
- (void)_registerOffsetColorCurveParameter:(int)arg1 name:(id)arg2 red:(double)arg3 green:(double)arg4 blue:(double)arg5;
- (void)_setGradingMode:(int)arg1;
- (bool)addParameters;
- (Class)classForCustomParameterID:(unsigned int)arg1;
- (void)dealloc;
- (id)initWithAPIManager:(id)arg1;
- (bool)needsOSCsIn360Groups;
- (bool)overrideRender:(id)arg1 withOutputImage:(id)arg2 inputImage:(id)arg3 input:(void*)arg4 withInfo:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg5;
- (bool)parameterChanged:(id)arg1 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 paramID:(unsigned int)arg3 customChannelData:(id)arg4;
- (bool)resync:(id)arg1 atTime:(union { double x1; struct { /* ? */ } *x2; })arg2 paramID:(unsigned int)arg3 customChannelData:(id*)arg4;
- (void)resyncOnce:(id)arg1 atTime:(union { double x1; struct { /* ? */ } *x2; })arg2;
- (id)shouldDeselectOtherMasks:(id)arg1;
- (bool)useLegacyCoding;

@end
