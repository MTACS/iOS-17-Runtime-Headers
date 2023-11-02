
@interface CTGeofenceInfo : NSObject <NSCopying, NSSecureCoding> {
    NSString * _geofenceId;
    NSNumber * _latitude;
    NSNumber * _longitude;
    NSNumber * _radius;
}

@property (nonatomic, retain) NSString *geofenceId;
@property (nonatomic, retain) NSNumber *latitude;
@property (nonatomic, retain) NSNumber *longitude;
@property (nonatomic, retain) NSNumber *radius;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)geofenceId;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)latitude;
- (id)longitude;
- (id)radius;
- (void)setGeofenceId:(id)arg1;
- (void)setLatitude:(id)arg1;
- (void)setLongitude:(id)arg1;
- (void)setRadius:(id)arg1;

@end
