
@interface ATXWidgetSuggestionAbuseGuard : NSObject {
    ATXTimelineAbuseControlConfig * _config;
    ATXInformationFilter * _filter;
    NSDate * _scheduledRefreshDate;
    ATXInformationStore * _store;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_invalidatePreviousVerdicts;
- (void)_scheduleRefreshNoLaterThanDate:(id)arg1;
- (id)init;
- (id)initWithConfig:(id)arg1 store:(id)arg2;
- (bool)shouldDemoteSuggestionsForWidget:(id)arg1 kind:(id)arg2 intent:(id)arg3;

@end
