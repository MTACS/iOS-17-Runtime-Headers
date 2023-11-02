
@interface MapsSyncManagedHistoryMultiPointRoute : MapsSyncManagedHistoryItem

@property (nonatomic) bool navigationInterrupted;
@property (nonatomic, retain) NSNumber *requiredCharge;
@property (nonatomic) short routeProgressWaypointIndex;
@property (nonatomic, copy) NSData *routeRequestStorage;
@property (nonatomic, copy) NSData *sharedETAData;
@property (nonatomic) short type;
@property (nonatomic, copy) NSString *vehicleIdentifier;

+ (Class)wrapperClass;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
