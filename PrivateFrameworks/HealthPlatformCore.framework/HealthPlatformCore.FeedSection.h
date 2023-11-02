
@interface HealthPlatformCore.FeedSection : NSManagedObject

@property (nonatomic, retain) _TtC18HealthPlatformCore4Feed *feed;
@property (nonatomic, retain) NSOrderedSet *feedItems;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) bool isCollapsible;
@property (nonatomic) long long sortOrder;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
