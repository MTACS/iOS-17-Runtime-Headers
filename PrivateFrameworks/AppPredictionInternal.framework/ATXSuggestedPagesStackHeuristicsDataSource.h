
@interface ATXSuggestedPagesStackHeuristicsDataSource : NSObject <ATXSuggestedPagesWidgetDataSource>

- (bool)_hasAlarmActivity;
- (bool)_hasSignificantHomeAccessoryEvents;
- (bool)_hasTVInterest;
- (id)_widgetsForDrivingMode;
- (id)_widgetsForExerciseMode;
- (id)_widgetsForGamingMode;
- (id)_widgetsForMindfulnessMode;
- (id)_widgetsForPersonalMode;
- (id)_widgetsForReadingMode;
- (id)_widgetsForSleepMode;
- (id)_widgetsForWorkMode;
- (id)provideWidgetsForPageType:(long long)arg1 environment:(id)arg2;

@end
