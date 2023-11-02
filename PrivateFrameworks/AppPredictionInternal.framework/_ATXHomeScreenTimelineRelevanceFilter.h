
@interface _ATXHomeScreenTimelineRelevanceFilter : NSObject {
    ATXInformationStore * _timelineRelevanceStore;
}

- (void).cxx_destruct;
- (void)_cancelAnyExistingScheduledRefresh;
- (bool)_isCurrentTimelineRelevanceScoreZeroForSuggestion:(id)arg1 family:(long long)arg2 intentIndexingHash:(long long)arg3;
- (id)_nextRefreshDateForSuggestion:(id)arg1 familyMask:(unsigned long long)arg2;
- (id)_nextTimelineRelevanceChangeDateRelatedToSuggestions:(id)arg1;
- (void)_scheduleBlendingRefreshAtDate:(id)arg1 reason:(id)arg2;
- (bool)_widgetExistsOnScreen:(id)arg1 homeScreenState:(id)arg2;
- (id)init;
- (id)initWithTimelineRelevanceStore:(id)arg1;
- (id)removeSuggestionsByTimelineRelevanceIfNecessary:(id)arg1 homeScreenState:(id)arg2;
- (void)scheduleBlendingRefreshAtNextTimelineRelevanceChangeRelatedToSuggestions:(id)arg1;

@end
