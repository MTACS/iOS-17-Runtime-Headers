
@interface CRAccNavManeuver : CRAccNavInfo

@property (nonatomic, readonly) unsigned short index;
@property (nonatomic, readonly) unsigned short linkedLaneGuidanceIndex;
@property (nonatomic, readonly) ACCNavigationManeuverUpdateInfo *maneuver;

- (unsigned short)index;
- (unsigned short)linkedLaneGuidanceIndex;
- (id)maneuver;

@end
