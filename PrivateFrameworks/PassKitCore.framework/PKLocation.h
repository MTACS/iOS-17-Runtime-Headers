
@interface PKLocation : NSObject <NSSecureCoding> {
    double  _altitude;
    bool  _hasAltitude;
    _Atomic unsigned long long  _hash;
    _Atomic bool  _hashComputed;
    double  _latitude;
    double  _longitude;
    double  _maxDistance;
    NSString * _name;
    NSString * _relevantText;
}

@property (nonatomic) double altitude;
@property (nonatomic, readonly) struct CLLocationCoordinate2D { double x1; double x2; } coordinate;
@property (nonatomic, readonly) bool hasAltitude;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) double maxDistance;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *relevantText;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CLLocation;
- (double)altitude;
- (struct CLLocationCoordinate2D { double x1; double x2; })coordinate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasAltitude;
- (bool)hasEqualCoordinatesToLocation:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (double)latitude;
- (double)longitude;
- (double)maxDistance;
- (id)name;
- (id)relevantText;
- (void)setAltitude:(double)arg1;
- (void)setLatitude:(double)arg1;
- (void)setLongitude:(double)arg1;
- (void)setMaxDistance:(double)arg1;
- (void)setName:(id)arg1;
- (void)setRelevantText:(id)arg1;

@end
