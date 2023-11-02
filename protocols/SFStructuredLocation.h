
@protocol SFStructuredLocation <NSObject>

@required

- (NSDictionary *)dictionaryRepresentation;
- (SFLatLng *)geoLocation;
- (NSData *)jsonData;
- (double)radius;
- (void)setGeoLocation:(SFLatLng *)arg1;
- (void)setRadius:(double)arg1;
- (void)setTitle:(NSString *)arg1;
- (NSString *)title;

@end
