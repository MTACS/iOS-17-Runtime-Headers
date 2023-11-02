
@protocol GEOTransitTripStop <NSObject>

@required

- (<GEOTransitDeparture> *)departure;
- (NSString *)displayName;
- (bool)isHidden;
- (NSArray *)labelItems;
- (GEOLatLng *)location;
- (unsigned long long)stationIdentifier;
- (GEOStyleAttributes *)styleAttributes;
- (NSTimeZone *)timeZone;

@end
