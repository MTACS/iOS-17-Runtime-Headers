
@interface PLAbstractLibraryServicesManagerService : NSObject {
    PLLibraryServicesManager * _libraryServicesManager;
}

@property (nonatomic, readonly) PLLibraryServicesManager *libraryServicesManager;

- (void).cxx_destruct;
- (id)initWithLibraryServicesManager:(id)arg1;
- (id)libraryServicesManager;
- (id)newShortLivedLibraryWithName:(const char *)arg1;

@end
