
@protocol FCNewsWidgetConfiguration <NSObject>

@required

- (double)parsecPopulationCeiling;
- (double)parsecPopulationFloor;
- (NSString *)widgetConfigID;
- (long long)widgetMinimumArticleExposureDurationToBePreseenInMilliseconds;
- (unsigned int)widgetMinimumNumberOfTimesPreseenToBeSeen;

@optional

- (long long)smallWidgetSystemHoneymoonDuration;
- (long long)smallWidgetSystemReloadInterval;
- (long long)smallWidgetSystemReloadIntervalHoneymoon;
- (long long)smallWidgetSystemReloadJitterMax;
- (long long)smallWidgetSystemReloadJitterMaxHoneymoon;
- (bool)userSegmentationInWidgetAllowed;
- (bool)widgetAnalyticsEnabled;
- (bool)widgetContentPrefetchEnabled;
- (long long)widgetSystemHoneymoonDuration;
- (long long)widgetSystemReloadInterval;
- (long long)widgetSystemReloadIntervalHoneymoon;
- (long long)widgetSystemReloadJitterMax;
- (long long)widgetSystemReloadJitterMaxHoneymoon;
- (bool)widgetXavierEnabled;

@end
