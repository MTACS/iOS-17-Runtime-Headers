
@interface ICPaths : NSObject

+ (id)URLForGroupContainerWithIdentifier:(id)arg1;
+ (id)applicationDataContainerURL;
+ (id)applicationDocumentsURL;
+ (id)attributesForGroupContainerDirectory;
+ (id)defaultPreviewImageDirectoryURL;
+ (id)importDocumentsURL;
+ (bool)isReadOnlyPersistentStore;
+ (id)managedObjectModelURL;
+ (id)oldManagedObjectModelURL;
+ (id)persistentStoreURL;
+ (void)resetApplicationDocumentsURL;
+ (void)setApplicationDocumentsURL:(id)arg1;
+ (void)setIsReadOnlyPersistentStore:(bool)arg1;

@end
