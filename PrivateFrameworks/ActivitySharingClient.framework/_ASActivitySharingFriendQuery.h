
@interface _ASActivitySharingFriendQuery : NSObject <FIFitnessAppsStateObserverDelegate> {
    void activitySharingClient;
    void fitnessAppsStateObserver;
    void updateHandler;
}

- (void).cxx_destruct;
- (void)fetchAllFriends;
- (void)fitnessAppsStateObserver:(id)arg1 applicationInstallStateDidChangeForBundleIdentifiers:(id)arg2;
- (id)init;
- (id)initWithActivitySharingClient:(id)arg1 updateHandler:(id /* block */)arg2;

@end
