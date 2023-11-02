
@protocol SFMapPlaceCardSection <SFCardSection>

@required

- (NSData *)detourInfoData;
- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (NSData *)mapsData;
- (void)setDetourInfoData:(NSData *)arg1;
- (void)setMapsData:(NSData *)arg1;
- (void)setShouldSearchDirectionsAlongCurrentRoute:(bool)arg1;
- (void)setType:(NSString *)arg1;
- (bool)shouldSearchDirectionsAlongCurrentRoute;
- (NSString *)type;

@end
