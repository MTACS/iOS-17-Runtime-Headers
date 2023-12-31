
@protocol PLAssetContainerList <NSObject, PLDiagnosticsProvider>

@required

- (bool)canEditContainers;
- (NSOrderedSet *)containers;
- (unsigned long long)containersCount;
- (NSString *)containersRelationshipName;
- (bool)isEmpty;
- (NSManagedObjectContext *)managedObjectContext;
- (PLPhotoLibrary *)photoLibrary;

@end
