
@interface RBLaunchdJobManager : NSObject {
    <RBBundlePropertiesManaging> * _bundlePropertiesManager;
    RBContainerManager * _containerManager;
    <RBLaunchdInterfacing> * _launchdInterface;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _lock_jobsByIdentifier;
    NSMutableDictionary * _lock_monitoredJobsByIdentifier;
    NSMutableOrderedSet * _lock_reslideIdentities;
    NSObject<OS_dispatch_queue> * _logQueue;
    RBPersonaManager * _personaManager;
}

+ (id)lastExitStatusForLabel:(id)arg1 error:(out id*)arg2;

- (void).cxx_destruct;
- (bool)_addAppPropertiesToData:(id)arg1 forIdentity:(id)arg2 context:(id)arg3 actualIdentity:(id*)arg4 error:(id*)arg5;
- (bool)_addContainerPropertiesFromExtensionContext:(id)arg1 toServiceDict:(id)arg2;
- (void)_addDextPropertiesToData:(id)arg1 forIdentity:(id)arg2 context:(id)arg3;
- (void)_addExtensionContainerURL:(id)arg1 toServiceDict:(id)arg2;
- (void)_addExtensionEnvironmentFromContainerURL:(id)arg1 toServiceDict:(id)arg2;
- (bool)_addPersonaFromExtensionContext:(id)arg1 toServiceDict:(id)arg2;
- (void)_addReslideIdentityIfNeeded:(id)arg1 exitStatus:(id)arg2;
- (void)_addSharedPropertiesToData:(id)arg1 forIdentity:(id)arg2 context:(id)arg3;
- (void)_addStandardAppPropertiesToData:(id)arg1;
- (id)_containerURLForExtensionContext:(id)arg1;
- (id)_createAndSubmitExtensionJob:(id)arg1 UUID:(id)arg2 error:(id*)arg3;
- (id)_createLaunchdJobWithIdentity:(id)arg1 context:(id)arg2 actualIdentity:(id*)arg3 error:(id*)arg4;
- (id)_generateDataWithIdentity:(id)arg1 context:(id)arg2 actualIdentity:(id*)arg3 error:(id*)arg4;
- (bool)_isRunningBoardLaunched:(id)arg1;
- (bool)_removeJobWithInstance:(id)arg1 orJob:(id)arg2 error:(out id*)arg3;
- (id)createAndLaunchWithIdentity:(id)arg1 context:(id)arg2 error:(out id*)arg3;
- (id)initWithLaunchdInterface:(id)arg1 personaManager:(id)arg2 containerManager:(id)arg3 bundlePropertiesManager:(id)arg4;
- (void)invokeOnProcessDeath:(id)arg1 handler:(id /* block */)arg2 onQueue:(id)arg3;
- (bool)removeJobWithInstance:(id)arg1 error:(out id*)arg2;
- (id)synchronizeJobs;
- (unsigned long long)test_trackedJobCount;

@end
