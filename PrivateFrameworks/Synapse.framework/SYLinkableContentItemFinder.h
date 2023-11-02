
@interface SYLinkableContentItemFinder : NSObject {
    FBSDisplayLayoutMonitor * __displayLayoutMonitor;
    NSArray * __foregroundAppBundleIDs;
    long long  __foregroundAppLoadRetriesRemaining;
    NSObject<OS_dispatch_queue> * __itemFinderQueue;
    <SYLinkableContentItemFinderDelegate> * _delegate;
}

@property (nonatomic, readonly) FBSDisplayLayoutMonitor *_displayLayoutMonitor;
@property (nonatomic, copy) NSArray *_foregroundAppBundleIDs;
@property (nonatomic) long long _foregroundAppLoadRetriesRemaining;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_itemFinderQueue;
@property <SYLinkableContentItemFinderDelegate> *delegate;

- (void).cxx_destruct;
- (void)_activityFetchingFinishedWithActivities:(id)arg1 appBundleIDs:(id)arg2 foregroundBundleIDs:(id)arg3 completion:(id /* block */)arg4;
- (id)_currentForegroundAppBundleIDs;
- (id)_displayLayoutMonitor;
- (void)_fetchActiveLinkableUserActivitiesExcluding:(id)arg1 completion:(id /* block */)arg2;
- (id)_foregroundAppBundleIDs;
- (long long)_foregroundAppLoadRetriesRemaining;
- (id)_itemFinderQueue;
- (bool)_shouldIncludeAsLinkableUserActivity:(id)arg1 bundleID:(id)arg2 foregroundBundleIDs:(id)arg3 excludedActivities:(id)arg4;
- (void)_updateForegroundAppsFromDisplayLayout:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)fetchLinkableContentItemsExcludingActivities:(id)arg1 completion:(id /* block */)arg2;
- (void)handleRemoteCurrentActivityDidChange;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)set_foregroundAppBundleIDs:(id)arg1;
- (void)set_foregroundAppLoadRetriesRemaining:(long long)arg1;

@end
