
@interface SSTimeZoneLocation : NSObject {
    NSString * _countryCode;
    NSString * _countryName;
    bool  _isCaptial;
    NSNumber * _latitude;
    NSString * _location;
    NSNumber * _longitude;
    NSTimeZone * _timeZone;
}

@property (retain) NSString *countryCode;
@property (retain) NSString *countryName;
@property bool isCaptial;
@property (retain) NSNumber *latitude;
@property (retain) NSString *location;
@property (retain) NSNumber *longitude;
@property (retain) NSTimeZone *timeZone;

- (void).cxx_destruct;
- (id)countryCode;
- (id)countryName;
- (bool)isCaptial;
- (id)latitude;
- (id)location;
- (id)longitude;
- (void)setCountryCode:(id)arg1;
- (void)setCountryName:(id)arg1;
- (void)setIsCaptial:(bool)arg1;
- (void)setLatitude:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setLongitude:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (id)timeZone;

@end
