
@interface PCMapLocation : NSObject <NSCopying, NSSecureCoding> {
    NSString * _airportCode;
    NSString * _airportName;
    NSString * _countryName;
    float  _latitude;
    NSString * _locationName;
    float  _longitude;
    NSString * _name;
}

@property (nonatomic, retain) NSString *airportCode;
@property (nonatomic, retain) NSString *airportName;
@property (nonatomic, retain) NSString *countryName;
@property (nonatomic) float latitude;
@property (nonatomic, retain) NSString *locationName;
@property (nonatomic) float longitude;
@property (nonatomic, retain) NSString *name;

+ (id)dictionaryFromArrayOfLocations:(id)arg1;
+ (void)removeLocationsFromArray:(id)arg1 withinDistance:(float)arg2 ofSameLocationsInDictionary:(id)arg3;
+ (bool)supportsSecureCoding;

- (id)airportCode;
- (id)airportName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)countryName;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasSamePositionAsLocation:(id)arg1 tolerance:(float)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqualToLocation:(id)arg1;
- (float)latitude;
- (id)locationName;
- (float)longitude;
- (id)name;
- (void)setAirportCode:(id)arg1;
- (void)setAirportName:(id)arg1;
- (void)setCountryName:(id)arg1;
- (void)setLatitude:(float)arg1;
- (void)setLocationName:(id)arg1;
- (void)setLongitude:(float)arg1;
- (void)setName:(id)arg1;
- (id)stringRepresentation;

@end
