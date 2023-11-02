
@interface CLSLocationOfInterest : NSObject <NSSecureCoding> {
    unsigned long long  _businessItemMuid;
    NSUUID * _identifier;
    CLLocation * _location;
    CLSLitePlacemark * _placemark;
    CLCircularRegion * _placemarkRegion;
    double  _radius;
    long long  _type;
    NSMutableArray * _visits;
}

@property (nonatomic, readonly) unsigned long long businessItemMuid;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) CLLocation *location;
@property (nonatomic, readonly) CLSLitePlacemark *placemark;
@property (nonatomic, readonly) CLCircularRegion *placemarkRegion;
@property (nonatomic, readonly) double radius;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) NSArray *visits;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addVisit:(id)arg1;
- (unsigned long long)businessItemMuid;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 locationOfInterestType:(long long)arg2 location:(id)arg3 placemarkRegion:(id)arg4 businessItemMuid:(unsigned long long)arg5 radius:(double)arg6;
- (bool)isEqual:(id)arg1;
- (id)location;
- (id)placemark;
- (double)placemarkLocationDistanceFromLocation:(id)arg1;
- (id)placemarkRegion;
- (double)radius;
- (void)removeVisit:(id)arg1;
- (long long)type;
- (id)visits;

@end
