
@interface AVConcreteValueTiming : AVValueTiming {
    double  _rate;
    double  _timeStamp;
    double  _value;
}

- (struct { double x1; double x2; })_timing;
- (double)anchorTimeStamp;
- (double)anchorValue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithAnchorValue:(double)arg1 anchorTimeStamp:(double)arg2 rate:(double)arg3;
- (double)rate;

@end
