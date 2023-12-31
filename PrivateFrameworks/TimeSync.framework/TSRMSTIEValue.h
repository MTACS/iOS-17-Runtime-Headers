
@interface TSRMSTIEValue : NSObject {
    double  _observationInterval;
    double  _rmstie;
}

@property (nonatomic, readonly) double observationInterval;
@property (nonatomic, readonly) double rmstie;

- (id)description;
- (id)initWithObservationInterval:(double)arg1 andRMSTIE:(double)arg2;
- (double)observationInterval;
- (double)rmstie;

@end
