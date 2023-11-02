
@protocol GEOTransitNearbyScheduleCell <NSObject>

@required

- (NSArray *)artworks;
- (NSArray *)departureSequences;
- (NSString *)displayName;
- (bool)isSignificant;

@end
