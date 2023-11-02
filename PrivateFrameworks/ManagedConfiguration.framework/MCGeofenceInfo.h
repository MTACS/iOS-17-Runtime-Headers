
@interface MCGeofenceInfo : NSObject {
    NSString * _geofenceId;
    NSNumber * _latitude;
    NSNumber * _longitude;
    NSNumber * _radius;
}

@property (nonatomic, retain) NSString *geofenceId;
@property (nonatomic, retain) NSNumber *latitude;
@property (nonatomic, retain) NSNumber *longitude;
@property (nonatomic, retain) NSNumber *radius;

- (void).cxx_destruct;
- (id)description;
- (id)geofenceId;
- (id)latitude;
- (id)longitude;
- (id)radius;
- (void)setGeofenceId:(id)arg1;
- (void)setLatitude:(id)arg1;
- (void)setLongitude:(id)arg1;
- (void)setRadius:(id)arg1;

@end
