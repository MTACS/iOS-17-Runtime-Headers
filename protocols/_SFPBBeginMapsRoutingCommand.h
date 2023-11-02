
@protocol _SFPBBeginMapsRoutingCommand <NSObject>

@required

- (int)directionsMode;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (_SFPBLatLng *)location;
- (NSData *)mapsData;
- (NSString *)name;
- (void)setDirectionsMode:(int)arg1;
- (void)setLocation:(_SFPBLatLng *)arg1;
- (void)setMapsData:(NSData *)arg1;
- (void)setName:(NSString *)arg1;
- (void)setShouldSearchDirectionsAlongCurrentRoute:(bool)arg1;
- (bool)shouldSearchDirectionsAlongCurrentRoute;

@end
