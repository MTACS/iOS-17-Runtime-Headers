
@interface SBFolderStatsQueryableMetric : NSObject <SBFAnalyticsBackendEventHandling> {
    PETDistributionEventTracker * _dockAppsTracker;
    PETDistributionEventTracker * _dockFoldersTracker;
    PETDistributionEventTracker * _dockItemsTracker;
    PETDistributionEventTracker * _folderTracker;
    PETDistributionEventTracker * _pageTracker;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)handleEvent:(unsigned long long)arg1 withContext:(id)arg2;
- (id)init;

@end
