
@protocol ScreenTimeSettingsUI.STAgePresetsAnalyticsProtocol

@required

- (void)sendChooseAgeButtonTappedAnalyticsEvent;
- (void)sendEnabledRestrictionsEventWithSelectionType:(long long)arg1 lowerBound:(NSNumber *)arg2 upperBound:(NSNumber *)arg3;
- (void)sendPresetsValueChangedAnalyticsEventWithRecommendedPresetId:(NSString *)arg1 fieldName:(NSString *)arg2 recomendedValue:(id)arg3 selectedValue:(id)arg4;
- (void)sendPresetsViewedAnalyticsEventWithIsInitialSetup:(bool)arg1;
- (void)sendResetAgePresetSelectedAnalyticsEvent;
- (void)sendSelectedAgeRangeAnalyticsEventWithLowerBound:(long long)arg1 upperBound:(long long)arg2;
- (void)sendSkippedAnalyticsEvent;

@end
