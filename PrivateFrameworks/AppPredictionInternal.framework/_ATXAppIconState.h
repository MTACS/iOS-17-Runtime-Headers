
@interface _ATXAppIconState : NSObject {
    _PASSimpleCoalescingTimer * _coalescedReloadOperation;
    int  _dockAppListChangeDarwinNotificationObserver;
    ATXHomeScreenConfigCache * _homeScreenConfigCache;
    int  _homeScreenConfigCacheChangeDarwinNotificationObserver;
    int  _homeScreenTodayPageConfigCacheChangeDarwinNotificationObserver;
    NSDictionary * _iconLocationByBundleId;
    _ATXInternalInstallNotification * _installNotification;
    unsigned long long  _numHomeScreenFolders;
    unsigned long long  _numHomeScreenPages;
    NSArray * _orderedVisiblePageIndices;
    NSMutableIndexSet * _pageIndicesWithAppPredictionPanels;
    NSMutableIndexSet * _pageIndicesWithSuggestionWidgets;
    SBSHomeScreenService * _sbsHomeScreenService;
    NSObject<OS_dispatch_queue> * _syncQueue;
    _ATXInternalUninstallNotification * _uninstallNotification;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_reload;
- (id)allAppsKnownToSpringBoard;
- (id)allDockedApps;
- (id)allFolderApps;
- (id)allInstalledAppsKnownToSpringBoard;
- (bool)appInFolderWithBundleId:(id)arg1;
- (bool)appOnDockWithBundleId:(id)arg1;
- (long long)folderPageNumberForBundleId:(id)arg1;
- (unsigned long long)getFirstVisiblePageIndex;
- (id)init;
- (id)initWithHomeScreenConfigCache:(id)arg1 sbsHomeScreenService:(id)arg2;
- (id)nonFolderAppSetOnPages;
- (unsigned long long)numberOfApps;
- (unsigned long long)numberOfFolders;
- (unsigned long long)numberOfPages;
- (long long)springboardPageLocationForBundleId:(id)arg1;
- (long long)springboardPageNumberForBundleId:(id)arg1;
- (id)springboardPageNumbersWithAppPredictionPanels;
- (id)springboardPageNumbersWithSuggestionsWidgets;

@end
