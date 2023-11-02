
@interface HealthPlatformCore.Keyword : NSManagedObject

@property (nonatomic, copy) NSSet *feedItems;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) long long sortOrder;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
