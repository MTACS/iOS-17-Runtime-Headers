
@interface HealthPlatformCore.PluginData : NSManagedObject

@property (nonatomic, copy) NSData *data;
@property (nonatomic, retain) _TtC18HealthPlatformCore6Plugin *plugin;
@property (nonatomic, copy) NSSet *profiles;
@property (nonatomic, copy) NSString *uniqueIdentifier;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
