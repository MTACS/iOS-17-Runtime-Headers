
@interface STPersistenceConfiguration : NSObject

+ (id)getLocalPersistentXPCStoreDescription;
+ (id)localPersistentXPCStoreDescription;
+ (id)managedObjectModel;
+ (id)managedObjectModelURL;
+ (id)persistentStoreDescriptionForConfigurationName:(id)arg1 type:(id)arg2;
+ (id)persistentStoreURLForConfigurationName:(id)arg1;

@end
