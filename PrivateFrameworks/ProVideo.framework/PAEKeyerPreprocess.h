
@interface PAEKeyerPreprocess : NSObject {
    id  _apiManager;
    PAEKeyer * _keyer;
}

- (bool)addAdvancedParametersWithParamAPI:(id)arg1 paramFlags:(unsigned int)arg2;
- (void)dealloc;
- (bool)doDegrainWithDegrainAmount:(double)arg1 degrainIntensity:(double)arg2 withInfo:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg3 outputNode:(void*)arg4 pcaMatrix:(id)arg5 width:(int)arg6 height:(int)arg7;
- (bool)doPreprocessKeyerFootageWithParamAPI:(id)arg1 withInfo:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg2 linearInput:(bool)arg3 scaleX:(float)arg4 scaleY:(float)arg5 width:(float)arg6 height:(float)arg7 fixDVResult:(void*)arg8 degrainResult:(void*)arg9 outputNode:(void*)arg10;
- (bool)findGrainRegionWithInfo:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg1 coordX:(int*)arg2 coordY:(int*)arg3 width:(int)arg4 height:(int)arg5 minGreenHueAngle:(float)arg6 maxGreenHueAngle:(float)arg7 greenChroma:(float)arg8 minBlueHueAngle:(float)arg9 maxBlueHueAngle:(float)arg10 blueChroma:(float)arg11;
- (void)setKeyer:(id)arg1;

@end
