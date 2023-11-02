
@interface SaturationDetection : NSObject {
    NetworkQualityConfiguration * _config;
    float  _currentAverage;
    MovingAverage * _instAvg;
    long long  _instValues;
    long long  _minRuntime;
    MovingAverage * _movingAvg;
    bool  _saturated;
    float  _saturationValue;
    float  _scalingFactor;
    NSDate * _start;
    NSString * name;
}

- (void).cxx_destruct;
- (bool)add:(float)arg1;
- (float)getAverage;
- (float)getSaturation;
- (id)initWithConfig:(id)arg1;
- (id)initWithConfig:(id)arg1 withScalingFactor:(float)arg2;

@end
