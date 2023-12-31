
@interface TSTDEVValue : NSObject {
    double  _observationInterval;
    double  _tdev;
}

@property (nonatomic, readonly) double observationInterval;
@property (nonatomic, readonly) double tdev;

- (id)description;
- (id)initWithObservationInterval:(double)arg1 andTDEV:(double)arg2;
- (double)observationInterval;
- (double)tdev;

@end
