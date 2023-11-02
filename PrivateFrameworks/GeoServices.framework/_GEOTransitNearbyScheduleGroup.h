
@interface _GEOTransitNearbyScheduleGroup : NSObject <GEOTransitNearbyScheduleGroup> {
    NSArray * _incidents;
    NSArray * _lineCells;
    GEOPDTransitScheduleGroup * _transitScheduleGroup;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) long long groupType;
@property (nonatomic, readonly) bool hasWalkingDetails;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *incidents;
@property (nonatomic, readonly) NSArray *lineCells;
@property (nonatomic, readonly) unsigned long long maxWalkingDistance;
@property (nonatomic, readonly) unsigned long long maxWalkingTime;
@property (nonatomic, readonly) unsigned long long minWalkingDistance;
@property (nonatomic, readonly) unsigned long long minWalkingTime;
@property (nonatomic, readonly) NSString *pinnedDisplayName;
@property (readonly) Class superclass;

+ (id)lineSectionsForNearbyTransitGroup:(id)arg1 departureSequenceContainers:(id)arg2 departureSequences:(id)arg3;

- (void).cxx_destruct;
- (id)displayName;
- (long long)groupType;
- (bool)hasWalkingDetails;
- (id)incidents;
- (id)initWithTransitScheduleGroup:(id)arg1 departureSequenceContainers:(id)arg2 scheduledDepartureSequences:(id)arg3 incidentsMap:(id)arg4;
- (id)lineCells;
- (unsigned long long)maxWalkingDistance;
- (unsigned long long)maxWalkingTime;
- (unsigned long long)minWalkingDistance;
- (unsigned long long)minWalkingTime;
- (id)pinnedDisplayName;

@end
