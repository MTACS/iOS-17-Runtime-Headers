
@interface PAEEquirectProjectFilter : PAEFilterDefaultBase

- (bool)addParameters;
- (bool)canThrowRenderOutput:(id)arg1 withInput:(id)arg2 withInfo:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg3;
- (struct PCMatrix44Tmpl<double> { double x1[4][4]; })composeViewMatrix:(union { double x1; struct { /* ? */ } *x2; })arg1 withCameraBehavior:(int)arg2 heroAngle:(double)arg3;
- (double)convertToFOVXFromFOVY:(double)arg1 width:(double)arg2 height:(double)arg3;
- (double)convertToFOVYFromFOVX:(double)arg1 width:(double)arg2 height:(double)arg3;
- (bool)frameCleanup;
- (bool)frameSetup:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg1 hardware:(bool*)arg2 software:(bool*)arg3;
- (void)getEdgeMode:(unsigned int*)arg1 withInfo:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg2;
- (double)getInitialYaw:(union { double x1; struct { /* ? */ } *x2; })arg1;
- (bool)getIsFrontFacing:(union { double x1; struct { /* ? */ } *x2; })arg1;
- (bool)getOutputWidth:(unsigned long long*)arg1 height:(unsigned long long*)arg2 withInput:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; bool x8; double x9; })arg3 withInfo:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg4;
- (struct HGEquirectProjectParams { float x1[3]; float x2[3]; float x3[3]; float x4; float x5; bool x6; float x7; float x8; float x9; float x10; float x11; float x12; int x13; int x14; int x15; int x16; bool x17; bool x18; float x19[4]; float x20[4]; float x21[4]; float x22[4]; })getParams:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg1 withOutputImage:(id)arg2 inputImage:(id)arg3 width:(unsigned long long)arg4 height:(unsigned long long)arg5 outputWidth:(unsigned long long)arg6 outputHeight:(unsigned long long)arg7 xRotation:(double)arg8 yRotation:(double)arg9 zRotation:(double)arg10 cameraBehavior:(int)arg11 paramAPI:(id)arg12;
- (void)getProjectionFOVYDegrees:(float*)arg1 FOVXDegrees:(float*)arg2 withFrameAspect:(double)arg3 atTime:(union { double x1; struct { /* ? */ } *x2; })arg4;
- (void)getQuaternion:(union { double x1; struct { /* ? */ } *x2; })arg1 :(double*)arg2 :(double*)arg3 :(double*)arg4 :(double*)arg5;
- (struct PCMatrix44Tmpl<double> { double x1[4][4]; })getViewMatrix:(union { double x1; struct { /* ? */ } *x2; })arg1;
- (id)initWithAPIManager:(id)arg1;
- (id)properties;
- (bool)variesOverTime;

@end
