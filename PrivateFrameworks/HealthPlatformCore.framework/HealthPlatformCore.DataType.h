
@interface HealthPlatformCore.DataType : NSManagedObject

@property (nonatomic) long long codeRaw;
@property (nonatomic, copy) NSSet *feedItems;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
