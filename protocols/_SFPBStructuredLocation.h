
@protocol _SFPBStructuredLocation <NSObject>

@required

- (_SFPBLatLng *)geoLocation;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (double)radius;
- (void)setGeoLocation:(_SFPBLatLng *)arg1;
- (void)setRadius:(double)arg1;
- (void)setTitle:(NSString *)arg1;
- (NSString *)title;

@end
