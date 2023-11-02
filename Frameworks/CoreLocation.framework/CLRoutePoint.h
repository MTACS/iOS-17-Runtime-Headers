
@interface CLRoutePoint : NSObject <NSCopying, NSSecureCoding> {
    double  _altitude_m;
    double  _latitude_deg;
    double  _longitude_deg;
    double  _odometer_m;
    int  _signalEnvironmentType;
    double  _timestamp_s;
}

@property (nonatomic, readonly) double altitude_m;
@property (nonatomic, readonly) double latitude_deg;
@property (nonatomic, readonly) double longitude_deg;
@property (nonatomic, readonly) double odometer_m;
@property (nonatomic, readonly) int signalEnvironmentType;
@property (nonatomic, readonly) double timestamp_s;

// Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation

+ (bool)supportsSecureCoding;

- (double)altitude_m;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2 altitude:(double)arg3 odometer:(double)arg4 timestamp:(double)arg5 signalEnvironmentType:(int)arg6;
- (bool)isEqual:(id)arg1;
- (double)latitude_deg;
- (double)longitude_deg;
- (double)odometer_m;
- (int)signalEnvironmentType;
- (double)timestamp_s;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

- (id)codableRepresentationForSync;

@end
