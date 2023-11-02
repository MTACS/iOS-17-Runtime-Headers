
@interface CRAccNavRouteGuidance : CRAccNavInfo

@property (nonatomic, readonly) unsigned short currentLaneGuidanceIndex;
@property (nonatomic, readonly) NSArray *currentManeuverIndexes;
@property (nonatomic, readonly) unsigned char guidanceState;
@property (nonatomic, readonly) bool hasCurrentLaneGuidanceIndex;
@property (nonatomic, readonly) ACCNavigationRouteGuidanceUpdateInfo *routeGuidance;

+ (id)loadingForComponent:(id)arg1;
+ (id)resetForComponent:(id)arg1;

- (unsigned short)currentLaneGuidanceIndex;
- (id)currentManeuverIndexes;
- (unsigned char)guidanceState;
- (bool)hasCurrentLaneGuidanceIndex;
- (id)routeGuidance;

@end
