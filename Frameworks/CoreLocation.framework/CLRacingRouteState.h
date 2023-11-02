
@interface CLRacingRouteState : NSObject <NSCopying, NSSecureCoding> {
    double  _altitude;
    double  _averagePace;
    double  _distanceAlongReference;
    double  _distanceSinceStart;
    double  _latitude;
    double  _longitude;
    double  _odometer;
    double  _offRouteDistance;
    double  _offRouteTime;
    double  _timeSinceStart;
    double  _timestamp;
}

@property (nonatomic, readonly) double altitude;
@property (nonatomic, readonly) double averagePace;
@property (nonatomic, readonly) double distanceAlongReference;
@property (nonatomic, readonly) double distanceSinceStart;
@property (nonatomic, readonly) double latitude;
@property (nonatomic, readonly) double longitude;
@property (nonatomic, readonly) double odometer;
@property (nonatomic, readonly) double offRouteDistance;
@property (nonatomic, readonly) double offRouteTime;
@property (nonatomic, readonly) double timeSinceStart;
@property (nonatomic, readonly) double timestamp;

+ (bool)supportsSecureCoding;

- (double)altitude;
- (double)averagePace;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)distanceAlongReference;
- (double)distanceSinceStart;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2 altitude:(double)arg3 odometer:(double)arg4 timestamp:(double)arg5 timeSinceStart:(double)arg6 offRouteTime:(double)arg7 distanceSinceStart:(double)arg8 offRouteDistance:(double)arg9 averagePace:(double)arg10 distanceAlongReference:(double)arg11;
- (double)latitude;
- (double)longitude;
- (double)odometer;
- (double)offRouteDistance;
- (double)offRouteTime;
- (double)timeSinceStart;
- (double)timestamp;

@end
