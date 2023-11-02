
@interface MovingAverage : NSObject {
    unsigned long long  _arraySize;
    float  _currentAverage;
    float  _scalingFactor;
    NSMutableArray * _values;
}

- (void).cxx_destruct;
- (float)add:(float)arg1 overflow:(bool)arg2;
- (id)description;
- (float)getAvg;
- (float)getStdDev;
- (id)initWithSize:(unsigned long long)arg1 withScalingFactor:(float)arg2;

@end
