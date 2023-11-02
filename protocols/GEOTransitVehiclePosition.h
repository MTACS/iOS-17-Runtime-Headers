
@protocol GEOTransitVehiclePosition <NSObject>

@required

- (<GEOTransitArtworkDataSource> *)artworkDataSource;
- (NSString *)colorHexString;
- (struct { double x1; double x2; })coordinate;
- (NSString *)direction;
- (double)heading;
- (NSString *)headsign;
- (NSDate *)timestamp;
- (unsigned long long)tripID;

@end
