
@interface MapsSyncManagedHistoryEvDirectionsItem : MapsSyncManagedHistoryDirectionsItem

@property (nonatomic) double requiredCharge;
@property (nonatomic, copy) NSString *vehicleIdentifier;

+ (Class)wrapperClass;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
