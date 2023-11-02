
@interface ManagedEngagementBadge : NSManagedObject

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *marketingItemID;
@property (nonatomic, copy) NSString *notificationID;
@property (nonatomic, copy) NSDate *receivedDate;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
