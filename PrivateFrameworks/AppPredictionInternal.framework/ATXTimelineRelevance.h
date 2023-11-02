
@interface ATXTimelineRelevance : NSObject {
    ATXTimelineAbuseControlConfig * _abuseControlConfig;
    ATXInfoSuggestionCriterionRegistry * _criterionRegistry;
    <ATXTimelineRelevanceDelegate> * _delegate;
    NSString * _sourceId;
    CHSWidget * _widget;
}

@property (nonatomic) <ATXTimelineRelevanceDelegate> *delegate;
@property (nonatomic, readonly) NSString *sourceId;

+ (unsigned long long)suggestionLayoutOptionsForAvocadoSizeClass:(long long)arg1;

- (void).cxx_destruct;
- (id)delegate;
- (id)generateSuggestionsWithTimelineEntries:(id)arg1 latestInfoSuggestionRelevantNow:(id)arg2;
- (id)infoSuggestionWithTimelineEntry:(id)arg1;
- (id)infoSuggestionsFromTimelineEntries:(id)arg1 latestInfoSuggestionRelevantNow:(id)arg2;
- (id)initWithWidget:(id)arg1 criterionRegistry:(id)arg2 abuseControlConfig:(id)arg3;
- (bool)isWidgetFamilyEligibleForSuggestion;
- (bool)overlapExistsBetween:(id)arg1 andTimelineEntry:(id)arg2;
- (void)processTimelineEntryWithNonPositiveScore:(id)arg1 withPreviousInfoSuggestion:(id)arg2 updatingTimelineEntryToSuggestionMapping:(id)arg3;
- (id)processTimelineEntryWithPositiveScore:(id)arg1 withPreviousInfoSuggestion:(id)arg2 updatingTimelineEntryToSuggestionMapping:(id)arg3;
- (void)setDelegate:(id)arg1;
- (id)sourceId;
- (void)standardizeWidgetSizes;
- (bool)startDatesAreCloseEnoughToMerge:(id)arg1 withTimelineEntry:(id)arg2;

@end
