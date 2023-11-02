
@protocol _INPBRideStatus <NSObject>

@required

+ (Class)additionalActionItemsType;
+ (Class)waypointsType;

- (int)StringAsPhase:(NSString *)arg1;
- (void)addAdditionalActionItems:(_INPBUserActivity *)arg1;
- (void)addWaypoints:(_INPBLocationValue *)arg1;
- (NSArray *)additionalActionItems;
- (_INPBUserActivity *)additionalActionItemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)additionalActionItemsCount;
- (void)clearAdditionalActionItems;
- (void)clearWaypoints;
- (_INPBRideCompletionStatus *)completionStatus;
- (_INPBRideDriver *)driver;
- (_INPBLocationValue *)dropOffLocation;
- (_INPBTimestamp *)estimatedDropOffDate;
- (_INPBTimestamp *)estimatedPickupDate;
- (_INPBTimestamp *)estimatedPickupEndDate;
- (bool)hasCompletionStatus;
- (bool)hasDriver;
- (bool)hasDropOffLocation;
- (bool)hasEstimatedDropOffDate;
- (bool)hasEstimatedPickupDate;
- (bool)hasEstimatedPickupEndDate;
- (bool)hasPhase;
- (bool)hasPickupLocation;
- (bool)hasRideIdentifier;
- (bool)hasRideOption;
- (bool)hasScheduledPickupTime;
- (bool)hasUserActivityForCancelingInApplication;
- (bool)hasVehicle;
- (int)phase;
- (NSString *)phaseAsString:(int)arg1;
- (_INPBLocationValue *)pickupLocation;
- (NSString *)rideIdentifier;
- (_INPBRideOption *)rideOption;
- (_INPBDateTimeRangeValue *)scheduledPickupTime;
- (void)setAdditionalActionItems:(NSArray *)arg1;
- (void)setCompletionStatus:(_INPBRideCompletionStatus *)arg1;
- (void)setDriver:(_INPBRideDriver *)arg1;
- (void)setDropOffLocation:(_INPBLocationValue *)arg1;
- (void)setEstimatedDropOffDate:(_INPBTimestamp *)arg1;
- (void)setEstimatedPickupDate:(_INPBTimestamp *)arg1;
- (void)setEstimatedPickupEndDate:(_INPBTimestamp *)arg1;
- (void)setHasPhase:(bool)arg1;
- (void)setPhase:(int)arg1;
- (void)setPickupLocation:(_INPBLocationValue *)arg1;
- (void)setRideIdentifier:(NSString *)arg1;
- (void)setRideOption:(_INPBRideOption *)arg1;
- (void)setScheduledPickupTime:(_INPBDateTimeRangeValue *)arg1;
- (void)setUserActivityForCancelingInApplication:(_INPBUserActivity *)arg1;
- (void)setVehicle:(_INPBRideVehicle *)arg1;
- (void)setWaypoints:(NSArray *)arg1;
- (_INPBUserActivity *)userActivityForCancelingInApplication;
- (_INPBRideVehicle *)vehicle;
- (NSArray *)waypoints;
- (_INPBLocationValue *)waypointsAtIndex:(unsigned long long)arg1;
- (unsigned long long)waypointsCount;

@end
