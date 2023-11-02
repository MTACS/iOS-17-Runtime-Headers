
@interface MapsSyncManagedHistoryDirectionsItem : MapsSyncManagedHistoryItem

@property (nonatomic) bool navigationInterrupted;
@property (nonatomic, copy) NSData *routeRequestStorage;
@property (nonatomic, copy) NSData *sharedETAData;

+ (Class)wrapperClass;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
