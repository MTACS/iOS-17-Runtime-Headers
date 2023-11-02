
@interface SBAppLibraryMetric : NSObject <SBFAnalyticsBackendEventHandling> {
    PETScalarEventTracker * _appDownloadSettingsTracker;
    PETScalarEventTracker * _libraryDockSettingsTracker;
    PETScalarEventTracker * _modalLibraryPresentedTracker;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)handleEvent:(unsigned long long)arg1 withContext:(id)arg2;
- (id)init;

@end
