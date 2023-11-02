
@protocol MTCoreDataContainerConfigProvider

@required

- (NSURL *)databaseFileUrl;
- (NSManagedObjectModel *)managedObjectModel;
- (NSDictionary *)persistentStoreOptions;

@end
