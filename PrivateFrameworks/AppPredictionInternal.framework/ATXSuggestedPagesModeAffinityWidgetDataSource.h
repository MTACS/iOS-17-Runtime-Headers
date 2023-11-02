
@interface ATXSuggestedPagesModeAffinityWidgetDataSource : NSObject <ATXSuggestedPagesWidgetDataSource>

- (double)_fetchScoreThresholdForWidgetModeAffinityModel;
- (id)_widgetIdentifierWithoutIntentForCHSWidget:(id)arg1;
- (id)_widgetIdentifierWithoutIntentForWidget:(id)arg1;
- (id)fetchWidgetsPassingThresholdForMode:(unsigned long long)arg1 forSize:(unsigned long long)arg2;
- (id)provideWidgetsForPageType:(long long)arg1 environment:(id)arg2;

@end
