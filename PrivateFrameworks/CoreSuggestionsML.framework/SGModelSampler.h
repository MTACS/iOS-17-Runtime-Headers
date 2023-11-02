
@interface SGModelSampler : NSObject {
    double  _dynamicLabelRate;
    double  _negativeRate;
    double  _positiveRate;
    _PASRng * _rng;
}

- (void).cxx_destruct;
- (id)initWithPositiveRate:(double)arg1 dynamicLabelRate:(double)arg2 negativeRate:(double)arg3 rng:(id)arg4;
- (bool)shouldSampleForLabel:(id)arg1 isDynamicLabel:(bool)arg2;

@end
