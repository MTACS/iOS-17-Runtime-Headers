
@interface _GEOTransitNearbySchedule : NSObject <GEOTransitNearbySchedule> {
    NSArray * _categories;
}

@property (nonatomic, readonly) NSArray *categories;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)nearbyScheduleCategoriesFromSchedule:(id)arg1 departureSequenceContainers:(id)arg2 scheduledDepartureSequences:(id)arg3 incidents:(id)arg4;

- (void).cxx_destruct;
- (id)categories;
- (id)initWithNearbySchedule:(id)arg1 departureSequenceContainers:(id)arg2 scheduledDepartureSequences:(id)arg3 incidents:(id)arg4 stopInfo:(id)arg5;

@end
