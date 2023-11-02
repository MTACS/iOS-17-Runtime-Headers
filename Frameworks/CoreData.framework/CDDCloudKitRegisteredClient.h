
@interface CDDCloudKitRegisteredClient : NSManagedObject

@property (nonatomic, retain) NSString *bundleIdentifier;
@property (nonatomic, retain) NSString *containerIdentifier;
@property (nonatomic, retain) NSString *fileProtectionType;
@property (nonatomic, retain) NSSet *scheduledActivities;
@property (nonatomic, retain) NSString *storeConfigurationName;
@property (nonatomic, retain) NSString *storePath;

+ (id)entityName;

@end
