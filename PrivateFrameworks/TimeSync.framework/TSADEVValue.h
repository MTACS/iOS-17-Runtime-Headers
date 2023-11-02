
@interface TSADEVValue : NSObject {
    double  _adev;
    double  _observationInterval;
}

@property (nonatomic, readonly) double adev;
@property (nonatomic, readonly) double observationInterval;

- (double)adev;
- (id)description;
- (id)initWithObservationInterval:(double)arg1 andADEV:(double)arg2;
- (double)observationInterval;

@end
