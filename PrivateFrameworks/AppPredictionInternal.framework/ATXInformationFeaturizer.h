
@interface ATXInformationFeaturizer : NSObject <ATXInformationFeaturizerProtocol> {
    _ATXAppLaunchHistogram * _appLaunchHistory;
    ATXHomeScreenWidgetFeedback * _widgetFeedback;
}

- (void).cxx_destruct;
- (id)_featureSetForSuggestion:(id)arg1;
- (double)_fetchAppLaunchCountForBundleIdentifier:(id)arg1;
- (double)_fetchAppLaunchPopularityForBundleIdentifier:(id)arg1;
- (double)_fetchFeedbackForWidgetBundleId:(id)arg1 type:(unsigned long long)arg2;
- (void)_lazyLoadAppLaunchHistogram;
- (void)_lazyLoadWidgetFeedbackHistogram;
- (id)featurizeInfoSuggestions:(id)arg1;
- (id)featurizeTimelineWithWidgetBundleId:(id)arg1 widgetKind:(id)arg2 appBundleIdentifier:(id)arg3;
- (id)populateFeatureSetForWidgetBundleId:(id)arg1 widgetKind:(id)arg2 appBundleIdentifier:(id)arg3;

@end
