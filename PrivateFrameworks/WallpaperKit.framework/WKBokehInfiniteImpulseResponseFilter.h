
@interface WKBokehInfiniteImpulseResponseFilter : NSObject {
    unsigned long long  _count;
    double * _fbC;
    double * _ffC;
    double * _inputHistory;
    double * _outputHistory;
    double  _zeroGradientThreshold;
}

- (void)dealloc;
- (id)initWithCount:(unsigned long long)arg1 feedforwardCoefficients:(double*)arg2 feedbackCoefficients:(double*)arg3;

@end
