
@interface CLSBusinessCacheEntry : NSManagedObject

@property (nonatomic, retain) NSSet *businessItems;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) double radius;
@property (nonatomic) double updateTimestamp;

+ (id)entityName;

@end
