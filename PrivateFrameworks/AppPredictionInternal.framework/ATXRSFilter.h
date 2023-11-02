
@interface ATXRSFilter : NSObject {
    _ATXAppLaunchHistogramManager * _appLaunchHistogramManager;
}

- (void).cxx_destruct;
- (id)_candidatesByUsingAppLaunchHistogramsToFilterCandidates:(id)arg1;
- (id)filterCandidatesBySuggestionRequirements:(id)arg1;
- (id)init;
- (id)initWithAppLaunchHistogramManager:(id)arg1;

@end
