
@protocol GEOTransitNearbyScheduleGroup <NSObject>

@required

- (NSString *)displayName;
- (long long)groupType;
- (bool)hasWalkingDetails;
- (NSArray *)incidents;
- (NSArray *)lineCells;
- (unsigned long long)maxWalkingDistance;
- (unsigned long long)maxWalkingTime;
- (unsigned long long)minWalkingDistance;
- (unsigned long long)minWalkingTime;
- (NSString *)pinnedDisplayName;

@end
