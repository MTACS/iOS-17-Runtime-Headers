
@interface AXMFunctionTone : AXMTone {
    id /* block */  _function;
    struct { 
        double *values; 
        double scaleMinimum; 
        double scaleMaximum; 
        double valueMinimum; 
        double valueMaximum; 
        double count; 
    }  _xAxisDescriptor;
    struct { 
        double *values; 
        double scaleMinimum; 
        double scaleMaximum; 
        double valueMinimum; 
        double valueMaximum; 
        double count; 
    }  _yAxisDescriptor;
}

@property (nonatomic, readonly) id /* block */ function;
@property (nonatomic, readonly) struct { double *x1; double x2; double x3; double x4; double x5; double x6; } xAxisDescriptor;
@property (nonatomic, readonly) struct { double *x1; double x2; double x3; double x4; double x5; double x6; } yAxisDescriptor;

- (void).cxx_destruct;
- (double)_xAxisValueForNormalizedPosition:(double)arg1;
- (id /* block */)function;
- (id)initWithUnivariateFunction:(id /* block */)arg1 sampleRate:(double)arg2 envelope:(id)arg3 xAxisDescriptor:(struct { double *x1; double x2; double x3; double x4; double x5; double x6; })arg4 yAxisDescriptor:(struct { double *x1; double x2; double x3; double x4; double x5; double x6; })arg5;
- (void)renderInBuffer:(void*)arg1 atFrame:(unsigned long long)arg2;
- (struct { double *x1; double x2; double x3; double x4; double x5; double x6; })xAxisDescriptor;
- (struct { double *x1; double x2; double x3; double x4; double x5; double x6; })yAxisDescriptor;

@end
