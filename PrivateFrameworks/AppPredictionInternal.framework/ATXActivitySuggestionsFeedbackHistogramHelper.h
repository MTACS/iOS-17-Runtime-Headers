
@interface ATXActivitySuggestionsFeedbackHistogramHelper : NSObject {
    _ATXAppLaunchCategoricalHistogram * _feedbackCategoricalHistogram;
}

+ (id)histogramBundleIdForModeWithUUID:(id)arg1 modeType:(unsigned long long)arg2 origin:(long long)arg3 originAnchorType:(id)arg4;

- (void).cxx_destruct;
- (double)acceptancesForLockScreenSuggestionWithModeUUID:(id)arg1 modeType:(unsigned long long)arg2 origin:(long long)arg3 originAnchorType:(id)arg4;
- (id)init;
- (id)initWithFeedbackCategoricalHistogram:(id)arg1;
- (double)rejectionsForLockScreenSuggestionWithModeUUID:(id)arg1 modeType:(unsigned long long)arg2 origin:(long long)arg3 originAnchorType:(id)arg4;
- (double)suggestionsGivenForLockScreenSuggestionWithModeUUID:(id)arg1 modeType:(unsigned long long)arg2 origin:(long long)arg3 originAnchorType:(id)arg4;
- (void)updateFeedbackHistogramWithEvent:(id)arg1;

@end
