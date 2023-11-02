
@interface PAEEquirectProject : PAEGeneratorDefaultBase

- (bool)addParameters;
- (void)dealloc;
- (bool)frameCleanup;
- (bool)frameSetup:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg1 hardware:(bool*)arg2 software:(bool*)arg3;
- (struct HGEquirectProjectParams { float x1[3]; float x2[3]; float x3[3]; float x4; float x5; bool x6; float x7; float x8; float x9; float x10; float x11; float x12; int x13; int x14; int x15; int x16; bool x17; bool x18; float x19[4]; float x20[4]; float x21[4]; float x22[4]; })getParams:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg1 :(id)arg2 :(id)arg3 :(id)arg4;
- (double)getProjectionFOVYDegrees:(union { double x1; struct { /* ? */ } *x2; })arg1;
- (struct PCMatrix44Tmpl<float> { float x1[4][4]; })getViewMatrix:(union { double x1; struct { /* ? */ } *x2; })arg1;
- (id)initWithAPIManager:(id)arg1;
- (id)properties;
- (bool)renderOutput:(id)arg1 withInfo:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg2;
- (bool)variesOverTime;

@end
