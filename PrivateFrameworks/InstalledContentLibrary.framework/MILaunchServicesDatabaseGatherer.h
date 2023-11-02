
@interface MILaunchServicesDatabaseGatherer : NSObject <MIFilesystemScannerDelegate> {
    NSMutableSet * _appExtensions;
    NSMutableSet * _coreServices;
    id /* block */  _enumerator;
    NSMutableSet * _frameworks;
    unsigned long long  _gatherOptions;
    NSMutableSet * _internalApps;
    NSString * _personaUniqueString;
    bool  _shouldUpdateAppExtensionDataContainersWithParentID;
    NSMutableSet * _systemAppPlaceholders;
    NSMutableSet * _systemApps;
    NSMutableSet * _userApps;
}

@property (nonatomic, readonly) NSMutableSet *appExtensions;
@property (nonatomic, readonly) NSMutableSet *coreServices;
@property (nonatomic, readonly) id /* block */ enumerator;
@property (nonatomic, readonly) NSMutableSet *frameworks;
@property (nonatomic, readonly) unsigned long long gatherOptions;
@property (nonatomic, readonly) NSMutableSet *internalApps;
@property (nonatomic, readonly) NSString *personaUniqueString;
@property (nonatomic, readonly) bool shouldUpdateAppExtensionDataContainersWithParentID;
@property (nonatomic, readonly) NSMutableSet *systemAppPlaceholders;
@property (nonatomic, readonly) NSMutableSet *systemApps;
@property (nonatomic, readonly) NSMutableSet *userApps;

+ (id)_createDataContainerAndSetDataProtectionForBundle:(id)arg1 forPersona:(id)arg2 error:(id*)arg3;
+ (id)_createPluginDataContainerForAppexBundle:(id)arg1 forPersona:(id)arg2 setParent:(id)arg3;
+ (id)entryForBundle:(id)arg1 inContainer:(id)arg2 forPersona:(id)arg3 withError:(id*)arg4;
+ (bool)enumerateAppExtensionsInBundle:(id)arg1 forPersona:(id)arg2 updatingAppExtensionParentID:(bool)arg3 ensureAppExtensionsAreExecutable:(bool)arg4 installProfiles:(bool)arg5 error:(id*)arg6 enumerator:(id /* block */)arg7;
+ (id)fetchInfoForBundle:(id)arg1 forPersona:(id)arg2 inContainer:(id)arg3 withError:(id*)arg4;

- (void).cxx_destruct;
- (bool)_markDriverKitExtensionsExecutableInBundle:(id)arg1 withError:(id*)arg2;
- (bool)_scanAppExtensionsInBundle:(id)arg1 inBundleContainer:(id)arg2 withError:(id*)arg3;
- (bool)_scanBundle:(id)arg1 inContainer:(id)arg2 addingToBundleSet:(id)arg3 enumeratingEntry:(id)arg4 withError:(id*)arg5;
- (id)_setForEntry:(id)arg1;
- (id)appExtensions;
- (id)coreServices;
- (id /* block */)enumerator;
- (void)errorOccurred:(id)arg1;
- (id)frameworks;
- (unsigned long long)gatherOptions;
- (id)initWithOptions:(unsigned long long)arg1 enumerator:(id /* block */)arg2;
- (id)initWithOptions:(unsigned long long)arg1 personaUniqueString:(id)arg2 enumerator:(id /* block */)arg3;
- (id)internalApps;
- (bool)performGatherWithError:(id*)arg1;
- (id)personaUniqueString;
- (bool)scanAppExtensionsInFrameworkBundle:(id)arg1 withError:(id*)arg2;
- (bool)scanExecutableBundle:(id)arg1 inContainer:(id)arg2 forPersona:(id)arg3 withError:(id*)arg4;
- (bool)shouldUpdateAppExtensionDataContainersWithParentID;
- (id)systemAppPlaceholders;
- (id)systemApps;
- (id)userApps;

@end
