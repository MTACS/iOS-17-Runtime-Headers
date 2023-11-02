
@interface ATXTVWidgetLogHarvester : NSObject {
    NSMutableDictionary * _tvWidgetMetrics;
}

+ (id)_stringForWidgetSuggestionEventType:(long long)arg1;

- (void).cxx_destruct;
- (id)dryRunResult;
- (void)generateTVWidgetMetrics;
- (id)init;
- (void)sendToCoreAnalytics;
- (id)shouldSuggestTVWidgetWithDefaults:(id)arg1;

@end
