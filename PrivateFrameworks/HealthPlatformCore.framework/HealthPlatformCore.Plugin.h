
@interface HealthPlatformCore.Plugin : NSManagedObject

@property (nonatomic, copy) NSSet *allPluginData;
@property (nonatomic, copy) NSString *package;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
