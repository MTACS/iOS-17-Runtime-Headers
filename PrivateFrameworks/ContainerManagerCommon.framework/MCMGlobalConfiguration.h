
@interface MCMGlobalConfiguration : NSObject {
    unsigned int  _bundleContainerMode;
    MCMPOSIXUser * _bundleContainerOwner;
    NSURL * _cachesDirectory;
    MCMContainerClassPathCache * _classPathCache;
    MCMPOSIXUser * _currentUser;
    MCMPOSIXUser * _defaultUser;
    NSURL * _homeDirectory;
    bool  _isInternalImage;
    bool  _kernelUpcallEnabled;
    MCMLibraryRepair * _libraryRepair;
    MCMManagedPathRegistry * _managedPathRegistry;
    unsigned int  _runmode;
    NSURL * _sharedContainersDirectory;
    unsigned int  _systemContainerMode;
    MCMPOSIXUser * _systemContainerOwner;
    unsigned int  _userContainerMode;
}

@property (nonatomic, readonly) NSArray *appUserDataItemNames;
@property (nonatomic, readonly) unsigned int bundleContainerMode;
@property (nonatomic, readonly) MCMPOSIXUser *bundleContainerOwner;
@property (nonatomic, readonly) MCMContainerClassPathCache *classPathCache;
@property (nonatomic, readonly) MCMPOSIXUser *currentUser;
@property (nonatomic, readonly) MCMPOSIXUser *defaultUser;
@property (nonatomic, readonly) NSArray *excludedFromAppUserData;
@property (nonatomic) bool isInternalImage;
@property (nonatomic, readonly) bool kernelUpcallEnabled;
@property (nonatomic, readonly) MCMLibraryRepair *libraryRepair;
@property (nonatomic, readonly) MCMManagedPathRegistry *managedPathRegistry;
@property (nonatomic, readonly) unsigned int runmode;
@property (nonatomic, readonly) NSURL *sharedContainersDirectory;
@property (nonatomic, readonly) unsigned int systemContainerMode;
@property (nonatomic, readonly) MCMPOSIXUser *systemContainerOwner;
@property (nonatomic, readonly) unsigned int userContainerMode;

- (void).cxx_destruct;
- (id)appUserDataItemNames;
- (unsigned int)bundleContainerMode;
- (id)bundleContainerOwner;
- (id)classPathCache;
- (id)currentUser;
- (id)defaultUser;
- (unsigned int)dispositionForContainerClass:(unsigned long long)arg1;
- (unsigned int)dispositionForContainerClass:(unsigned long long)arg1 forUser:(id)arg2;
- (id)excludedFromAppUserData;
- (bool)handlesGlobalContainers;
- (bool)handlesUserContainers;
- (id)initWithRunMode:(unsigned int)arg1 userContainerMode:(unsigned int)arg2 bundleContainerMode:(unsigned int)arg3 bundleContainerOwner:(id)arg4 systemContainerMode:(unsigned int)arg5 systemContainerOwner:(id)arg6 defaultUser:(id)arg7 kernelUpcallEnabled:(bool)arg8;
- (bool)isGlobalBundleContainerWithContainerClass:(unsigned long long)arg1;
- (bool)isGlobalContainerClass:(unsigned long long)arg1;
- (bool)isGlobalSystemContainerWithContainerClass:(unsigned long long)arg1;
- (bool)isInternalImage;
- (bool)isPerUserBundleContainerWithContainerClass:(unsigned long long)arg1;
- (bool)isUnsupportedBundleContainerWithContainerClass:(unsigned long long)arg1;
- (bool)isUnsupportedSystemContainerWithContainerClass:(unsigned long long)arg1;
- (bool)isUserBundleContainerWithContainerClass:(unsigned long long)arg1;
- (bool)isUserSystemContainerWithContainerClass:(unsigned long long)arg1;
- (bool)kernelUpcallEnabled;
- (id)libraryRepair;
- (id)managedPathRegistry;
- (unsigned int)runmode;
- (void)setIsInternalImage:(bool)arg1;
- (id)sharedContainersDirectory;
- (void)signpostFirstContainerClass:(unsigned long long)arg1;
- (unsigned int)systemContainerMode;
- (id)systemContainerOwner;
- (unsigned int)userContainerMode;

@end
