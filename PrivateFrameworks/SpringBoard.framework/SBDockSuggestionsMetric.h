
@interface SBDockSuggestionsMetric : NSObject <SBFAnalyticsBackendEventHandling> {
    PETDistributionEventTracker * _distTracker;
    PETScalarEventTracker * _enabledTracker;
    NSMutableDictionary * _indexToSuggestionType;
    NSArray * _trackers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_trackEvent:(bool)arg1 withPayload:(id)arg2;
- (bool)handleEvent:(unsigned long long)arg1 withContext:(id)arg2;
- (id)init;

@end
