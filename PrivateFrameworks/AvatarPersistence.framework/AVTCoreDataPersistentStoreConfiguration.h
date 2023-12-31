
@interface AVTCoreDataPersistentStoreConfiguration : NSObject

+ (id)createModel;
+ (id)currentManagedObjectModel;
+ (id)localConfigurationWithStoreLocation:(id)arg1 environment:(id)arg2;
+ (id)modelV1;
+ (id)remoteConfigurationWithDaemonClient:(id)arg1 environment:(id)arg2;
+ (id)remoteConfigurationWithEnvironment:(id)arg1;

@end
