
@protocol GEOTransitNearbyScheduleCategory <NSObject>

@required

- (<GEOTransitArtworkDataSource> *)artwork;
- (NSString *)displayName;
- (NSArray *)groups;

@end
