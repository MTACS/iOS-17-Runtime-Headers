
@protocol SFWorldMapCardSection <SFCardSection>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSString *)highlightedTimeZoneName;
- (NSData *)jsonData;
- (SFLatLng *)pinLocation;
- (void)setHighlightedTimeZoneName:(NSString *)arg1;
- (void)setPinLocation:(SFLatLng *)arg1;
- (void)setType:(NSString *)arg1;
- (NSString *)type;

@end
