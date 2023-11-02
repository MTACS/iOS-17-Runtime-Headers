
@protocol SFBeginMapsRoutingCommand <SFCommand>

@required

- (NSDictionary *)dictionaryRepresentation;
- (int)directionsMode;
- (NSData *)jsonData;
- (SFLatLng *)location;
- (NSData *)mapsData;
- (NSString *)name;
- (void)setDirectionsMode:(int)arg1;
- (void)setLocation:(SFLatLng *)arg1;
- (void)setMapsData:(NSData *)arg1;
- (void)setName:(NSString *)arg1;
- (void)setShouldSearchDirectionsAlongCurrentRoute:(bool)arg1;
- (bool)shouldSearchDirectionsAlongCurrentRoute;

@end
