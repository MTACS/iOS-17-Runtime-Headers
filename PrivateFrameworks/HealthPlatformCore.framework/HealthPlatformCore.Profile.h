
@interface HealthPlatformCore.Profile : NSManagedObject

@property (nonatomic, copy) NSSet *allPluginData;
@property (nonatomic, copy) NSData *encodedHKProfileIdentifier;
@property (nonatomic, copy) NSSet *feedItems;
@property (nonatomic, copy) NSUUID *uniqueIdentifier;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
