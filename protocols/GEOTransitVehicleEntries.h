
@protocol GEOTransitVehicleEntries <NSObject>

@required

- (unsigned long long)firstTripID;
- (unsigned long long)tripIDForNextUpcomingDeparture;
- (NSArray *)tripIDs;
- (NSArray *)upcomingTripIDs;

@end
