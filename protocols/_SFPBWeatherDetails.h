
@protocol _SFPBWeatherDetails <NSObject>

@required

- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (_SFPBLatLng *)location;
- (void)setLocation:(_SFPBLatLng *)arg1;

@end
