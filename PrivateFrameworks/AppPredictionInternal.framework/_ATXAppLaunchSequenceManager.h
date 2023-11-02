
@interface _ATXAppLaunchSequenceManager : NSObject <ATXActionKeyRemovableProtocol, ATXBundleIdRemovableProtocol> {
    NSMapTable * _appActionLaunchSequence;
    NSMapTable * _appLaunchSequence;
    _ATXDataStore * _datastore;
    NSString * _lastAppActionLaunch;
    NSDate * _lastAppActionLaunchDate;
    NSObject<OS_dispatch_queue> * _syncQueue;
    _ATXInternalUninstallNotification * _uninstallNotificationListener;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)addBundleIdToLaunchSequence:(id)arg1 date:(id)arg2;
- (void)decayAllAppActionLaunchSequencesWithHalfLifeInDays:(double)arg1;
- (void)decayAllLaunchSequencesWithHalfLifeInDays:(double)arg1;
- (void)deleteAllLaunchesForAppActions:(id)arg1;
- (void)deleteAllLaunchesForBundles:(id)arg1;
- (id)init;
- (id)initWithDataStore:(id)arg1;
- (id)initWithInMemoryStore;
- (id)launchSequence;
- (id)launchSequenceForAppAction:(id)arg1;
- (id)launchSequenceForBundle:(id)arg1;
- (void)removeActionKeys:(id)arg1;
- (void)removeBundleIds:(id)arg1;
- (id)syncQueue;

@end
