
@protocol _SFPBMapRegion <NSObject>

@required

- (double)altitudeInMeters;
- (double)eastLng;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (double)northLat;
- (void)setAltitudeInMeters:(double)arg1;
- (void)setEastLng:(double)arg1;
- (void)setNorthLat:(double)arg1;
- (void)setSouthLat:(double)arg1;
- (void)setWestLng:(double)arg1;
- (double)southLat;
- (double)westLng;

@end
