
@interface TSMADEVValue : NSObject {
    double  _madev;
    double  _observationInterval;
}

@property (nonatomic, readonly) double madev;
@property (nonatomic, readonly) double observationInterval;

- (id)description;
- (id)initWithObservationInterval:(double)arg1 andMADEV:(double)arg2;
- (double)madev;
- (double)observationInterval;

@end
