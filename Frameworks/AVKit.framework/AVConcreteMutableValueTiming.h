
@interface AVConcreteMutableValueTiming : AVMutableValueTiming {
    double  _rate;
    double  _timeStamp;
    double  _value;
}

- (struct { double x1; double x2; })_timing;
- (double)anchorTimeStamp;
- (double)anchorValue;
- (id)initWithAnchorValue:(double)arg1 anchorTimeStamp:(double)arg2 rate:(double)arg3;
- (double)rate;
- (void)setAnchorTimeStamp:(double)arg1;
- (void)setAnchorValue:(double)arg1;
- (void)setRate:(double)arg1;

@end
