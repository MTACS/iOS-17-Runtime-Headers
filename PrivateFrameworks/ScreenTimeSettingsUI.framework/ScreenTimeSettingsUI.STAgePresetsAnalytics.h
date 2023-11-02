
@interface ScreenTimeSettingsUI.STAgePresetsAnalytics : NSObject <ScreenTimeSettingsUI.STAgePresetsAnalyticsProtocol> {
    void sessionId;
}

- (void).cxx_destruct;
- (id)init;
- (void)sendChooseAgeButtonTappedAnalyticsEvent;
- (void)sendEnabledRestrictionsEventWithSelectionType:(long long)arg1 lowerBound:(id)arg2 upperBound:(id)arg3;
- (void)sendPresetsValueChangedAnalyticsEventWithRecommendedPresetId:(id)arg1 fieldName:(id)arg2 recomendedValue:(id)arg3 selectedValue:(id)arg4;
- (void)sendPresetsViewedAnalyticsEventWithIsInitialSetup:(bool)arg1;
- (void)sendResetAgePresetSelectedAnalyticsEvent;
- (void)sendSelectedAgeRangeAnalyticsEventWithLowerBound:(long long)arg1 upperBound:(long long)arg2;
- (void)sendSkippedAnalyticsEvent;

@end
