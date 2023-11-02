
@interface PLAssetsdXPCUserInfo : NSObject <PLXPCUserInfo> {
    PLLibraryServicesManager * _libraryServicesManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithLibraryServicesManager:(id)arg1;
- (id)libraryServicesManager;
- (id)persistentStoreCoordinator;

@end
