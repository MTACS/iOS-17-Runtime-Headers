
@interface FBSProfileManager : NSObject {
    bool  _started;
    NSObject<OS_dispatch_queue> * _workQueue;
    NSSet * _workQueue_managedApplicationBundleIDs;
    NSMutableDictionary * _workQueue_profilesBySignerIdentity;
}

@property (getter=isStarted, nonatomic, readonly) bool started;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_managedAppsChangedNotification:(id)arg1;
- (void)_reloadProfiles;
- (void)_workQueue_reloadManagedApplicationBundleIDs;
- (void)_workQueue_reloadProfiles;
- (void)dealloc;
- (id)init;
- (bool)isManaged:(id)arg1;
- (bool)isStarted;
- (id)profilesForSignerIdentity:(id)arg1;
- (void)startService;

@end
