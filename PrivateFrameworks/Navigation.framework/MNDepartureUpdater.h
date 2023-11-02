
@interface MNDepartureUpdater : NSObject {
    GEOComposedRouteLeg * _arrivalLeg;
    NSMutableDictionary * _conditionScores;
    NSArray * _conditions;
    GEOComposedRoute * _route;
}

@property (nonatomic, readonly) GEOComposedRouteLeg *arrivalLeg;
@property (nonatomic, readonly) unsigned long long arrivalWaypointLegIndex;
@property (nonatomic, readonly) GEOComposedRoute *route;

- (void).cxx_destruct;
- (id)_arrivalRegionsDepartureConditions;
- (id)_defaultDepartureConditions;
- (void)_initConditions;
- (bool)allowDepartureForLocation:(id)arg1;
- (id)arrivalLeg;
- (unsigned long long)arrivalWaypointLegIndex;
- (id)initWithRoute:(id)arg1 arrivalLegIndex:(unsigned long long)arg2;
- (id)route;

@end
