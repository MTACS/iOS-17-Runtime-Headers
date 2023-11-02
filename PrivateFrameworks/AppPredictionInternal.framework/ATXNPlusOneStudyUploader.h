
@interface ATXNPlusOneStudyUploader : NSObject

- (id)_applyPrivacyFilterToEvents:(id)arg1;
- (id)_emptyEventsForAllWidgetDescriptorsOnDeviceWithActivity:(id)arg1;
- (id)_preparedEventsFromEmptyEvents:(id)arg1 activity:(id)arg2;
- (id)_preparedEvents_appLaunchPopularity:(id)arg1 activity:(id)arg2;
- (id)_preparedEvents_appPushNotificationEnabled:(id)arg1 activity:(id)arg2;
- (id)_preparedEvents_appScreenTimeCategory:(id)arg1 activity:(id)arg2;
- (id)_preparedEvents_numAppLaunches:(id)arg1 activity:(id)arg2;
- (id)_preparedEvents_suggestionCounts:(id)arg1 activity:(id)arg2;
- (id)_preparedEvents_widgetExistsOnScreen:(id)arg1 activity:(id)arg2;
- (bool)_processClientModelUpdateStreamFromStartTime:(double)arg1 shortcutSuggestionHandler:(id /* block */)arg2 infoSuggestionHandler:(id /* block */)arg3 activity:(id)arg4;
- (void)_sendEventsToCoreAnalytics:(id)arg1;
- (void)dryRunResultFilterByExtensionBundleId:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)uploadStudyDataToCoreAnalyticsWithActivity:(id)arg1;

@end
