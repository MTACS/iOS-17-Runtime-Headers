
@interface PLPhotoLibraryOpener : NSObject {
    PLLibraryServicesManager * _libraryServicesManager;
    bool  _reportInProgressUpgrades;
}

@property (readonly) PLLibraryServicesManager *libraryServicesManager;

+ (bool)canAutomaticallyCreateLibrary;

- (void).cxx_destruct;
- (bool)createPhotoLibraryDatabaseWithOptions:(id)arg1 error:(id*)arg2;
- (id)initWithLibraryServicesManager:(id)arg1 reportInProgressUpgrades:(bool)arg2;
- (id)libraryServicesManager;
- (bool)lightweightPermissionCheckWithError:(id*)arg1;
- (bool)lightweightPermissionCheckWithPath:(id)arg1 isDir:(bool)arg2 error:(id*)arg3;
- (bool)openPhotoLibraryDatabaseWithAutoUpgrade:(bool)arg1 autoCreate:(bool)arg2 error:(id*)arg3;

@end
