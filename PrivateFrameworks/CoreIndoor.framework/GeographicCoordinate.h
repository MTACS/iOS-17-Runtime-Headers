
@interface GeographicCoordinate : NSObject {
    double  _altitude;
    double  _latitude;
    double  _longitude;
}

@property (nonatomic) double altitude;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;

+ (id)fromECEFCoordinate:(id)arg1;

- (double)altitude;
- (id)init;
- (id)initFromECEFCoordinate:(id)arg1;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2 andAltitude:(double)arg3;
- (double)latitude;
- (double)longitude;
- (void)setAltitude:(double)arg1;
- (void)setFromECEFCoordinate:(id)arg1;
- (void)setFromLatitude:(double)arg1 longitude:(double)arg2 andAltitude:(double)arg3;
- (void)setLatitude:(double)arg1;
- (void)setLongitude:(double)arg1;

@end
