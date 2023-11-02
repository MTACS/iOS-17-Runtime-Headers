
@interface ManagedUpNextQueueItem : NSManagedObject

@property (nonatomic, copy) NSDate *dateAdded;
@property (nonatomic) double duration;
@property (nonatomic) long long healthKitActivityType;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) long long index;
@property (nonatomic, copy) NSString *mediaType;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
