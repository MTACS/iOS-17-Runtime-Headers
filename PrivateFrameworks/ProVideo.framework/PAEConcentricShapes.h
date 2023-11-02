
@interface PAEConcentricShapes : PAEGeneratorDefaultBase {
    double  _lastHeight;
    double  _lastScale;
    double  _lastWidth;
}

- (bool)addParameters;
- (bool)canThrowRenderOutput:(id)arg1 withInfo:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg2;
- (bool)frameCleanup;
- (bool)frameSetup:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg1 hardware:(bool*)arg2 software:(bool*)arg3;
- (id)initWithAPIManager:(id)arg1;
- (bool)parameterChanged:(unsigned int)arg1;
- (id)properties;
- (bool)variesOverTime;

@end
