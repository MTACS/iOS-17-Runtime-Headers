
@interface ATXDegenerateStackAnalyzer : NSObject {
    ATXSuggestionDeduplicator * _deduplicator;
    ATXInformationStore * _informationStore;
}

- (void).cxx_destruct;
- (bool)_hasWidgetHadTimelineDonations:(id)arg1 startDate:(id)arg2;
- (bool)_isWidgetEligibleForHeuristicFallback:(id)arg1;
- (id)_simulatedInfoSuggestionForWidget:(id)arg1;
- (bool)_wouldBlendingDeduplicateWidget:(id)arg1 inStack:(id)arg2 againstOtherWidgetsOnPage:(id)arg3;
- (bool)areAllSmartStacksPossiblyDegenerateInPages:(id)arg1 usingTimelineEntriesSinceDate:(id)arg2;
- (id)init;
- (id)initWithInformationStore:(id)arg1;
- (bool)isSmartStackPossiblyDegenerate:(id)arg1 onPage:(id)arg2 usingTimelineEntriesSinceDate:(id)arg3;

@end
