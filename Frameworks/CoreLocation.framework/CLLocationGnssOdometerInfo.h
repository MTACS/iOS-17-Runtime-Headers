
@interface CLLocationGnssOdometerInfo : NSObject <NSCopying, NSSecureCoding> {
    double  _deltaDistance;
    double  _deltaDistanceAccuracy;
    double  _odometer;
}

@property (nonatomic, readonly) double deltaDistance;
@property (nonatomic, readonly) double deltaDistanceAccuracy;
@property (nonatomic, readonly) double odometer;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)deltaDistance;
- (double)deltaDistanceAccuracy;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOdometer:(double)arg1 deltaDistance:(double)arg2 deltaDistanceAccuracy:(double)arg3;
- (double)odometer;

@end
