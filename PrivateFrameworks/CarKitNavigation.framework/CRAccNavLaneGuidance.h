
@interface CRAccNavLaneGuidance : CRAccNavInfo

@property (nonatomic, readonly) unsigned short index;
@property (nonatomic, readonly) ACCNavigationLaneGuidanceInfo *laneGuidance;

- (unsigned short)index;
- (id)laneGuidance;

@end
