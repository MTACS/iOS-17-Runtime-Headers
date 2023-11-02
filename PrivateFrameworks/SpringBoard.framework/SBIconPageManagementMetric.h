
@interface SBIconPageManagementMetric : NSObject <SBFAnalyticsBackendEventHandling> {
    PETScalarEventTracker * _pageDeletionTracker;
    PETScalarEventTracker * _pageHidingTracker;
    PETScalarEventTracker * _pageManagementPresentationTracker;
    PETScalarEventTracker * _pageMovementTracker;
    PETDistributionEventTracker * _pagesCountTracker;
    PETDistributionEventTracker * _pagesHiddenTracker;
    PETDistributionEventTracker * _pagesVisibleTracker;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)handleEvent:(unsigned long long)arg1 withContext:(id)arg2;
- (id)init;

@end
