
@interface GEORouteRestrictionZoneInfo : NSObject <NSSecureCoding> {
    int  _restrictionZoneImpact;
    NSArray * _zoneIDs;
}

@property (nonatomic, readonly) int restrictionZoneImpact;
@property (nonatomic, readonly) NSArray *zoneIDs;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithGeoRoute:(id)arg1;
- (id)initWithGeoWaypointRoute:(id)arg1;
- (int)restrictionZoneImpact;
- (id)zoneIDs;

@end
