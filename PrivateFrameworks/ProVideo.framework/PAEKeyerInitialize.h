
@interface PAEKeyerInitialize : NSObject {
    id  _apiManager;
    PAEKeyer * _keyer;
}

+ (void)addCorner:(const struct Vec3f { float x1[3]; }*)arg1 toSamples:(void*)arg2 corner:(const struct Vec3f { float x1[3]; }*)arg3 clrScreen:(int)arg4 clrA:(int)arg5 clrB:(int)arg6;
+ (void)setInitialSamples:(void*)arg1 autokeySetupUtil:(id)arg2 sampleBoxHalfDim:(float)arg3;

- (bool)calculateInitialMatteWithInfo:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg1 omSamples:(void*)arg2 colorPrimaries:(int)arg3 screenColor:(int*)arg4 minGreenHueAngle:(float)arg5 maxGreenHueAngle:(float)arg6 greenChroma:(float)arg7 minBlueHueAngle:(float)arg8 maxBlueHueAngle:(float)arg9 blueChroma:(float)arg10 histoPercentageIncluded:(float)arg11 use32x32x32:(bool)arg12 simpleKey:(bool)arg13;
- (void)calculateInitialSamples:(void*)arg1 percentageOfBaseColorIncluded:(float)arg2 use32x32x32:(bool)arg3 autokeySetupUtil:(id)arg4 samples:(void*)arg5 scale:(float)arg6;
- (void)dealloc;
- (bool)findSampleRectsWithInfo:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg1 screenColor:(int*)arg2 colorPrimaries:(int)arg3 width:(int)arg4 height:(int)arg5 minGreenHueAngle:(float)arg6 maxGreenHueAngle:(float)arg7 greenChroma:(float)arg8 minBlueHueAngle:(float)arg9 maxBlueHueAngle:(float)arg10 blueChroma:(float)arg11 histoPercentageIncluded:(float)arg12 omSamples:(void*)arg13 viewingSetupMatte:(bool)arg14 use32x32Histogram:(bool)arg15 simpleKey:(bool)arg16;
- (id)initWithAPIManager:(id)arg1 keyer:(id)arg2;
- (void*)newHisto3d:(bool)arg1 image:(id)arg2;

@end
