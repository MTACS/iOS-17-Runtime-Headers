
@interface MapsSyncManagedHistoryRideShareItem : MapsSyncManagedHistoryItem

@property (nonatomic, copy) NSData *endWaypoint;
@property (nonatomic, copy) NSData *startWaypoint;

+ (Class)wrapperClass;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
