
@interface PRDeviceScore : NSObject {
    PRAngleMeasurement * _angle;
    NSData * _btAddress;
    long long  _proximity;
    PRRangeMeasurement * _range;
    double  _score;
    double  _scoreUncertainty;
    double  _timestamp;
}

@property (readonly) PRAngleMeasurement *angle;
@property (readonly) NSData *btAddress;
@property (readonly) long long proximity;
@property (readonly) PRRangeMeasurement *range;
@property (readonly) double score;
@property (readonly) double scoreUncertainty;
@property (nonatomic) double timestamp;

- (void).cxx_destruct;
- (id)angle;
- (id)btAddress;
- (id)init;
- (id)initWithValues:(id)arg1 proximity:(long long)arg2 range:(id)arg3 angle:(id)arg4 score:(double)arg5 scoreUncertainty:(double)arg6;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPRDeviceScore:(id)arg1;
- (long long)proximity;
- (id)range;
- (double)score;
- (double)scoreUncertainty;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;

@end
