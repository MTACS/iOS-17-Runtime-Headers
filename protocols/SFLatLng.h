
@protocol SFLatLng <NSObject>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (double)lat;
- (double)lng;
- (void)setLat:(double)arg1;
- (void)setLng:(double)arg1;

@end
