
@interface ARLocationEstimationData : NSObject <ARDaemonSecureCoding, ARResultData> {
    double  _heading;
    CLLocation * _location;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double heading;
@property (nonatomic, readonly) CLLocation *location;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (double)heading;
- (id)initWithCoder:(id)arg1;
- (id)initWithCoordinates:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 altitude:(double)arg2 heading:(double)arg3;
- (id)initWithLocation:(id)arg1 heading:(double)arg2;
- (id)location;

@end
