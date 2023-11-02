
@interface MapsSyncManagedSharedTripBlockedItem : NSManagedObject

@property (nonatomic, copy) NSDate *createTime;
@property (nonatomic) long long expiryTime;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) NSDate *modificationTime;
@property (nonatomic, copy) NSString *sharedTripIdentifier;

+ (Class)wrapperClass;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
