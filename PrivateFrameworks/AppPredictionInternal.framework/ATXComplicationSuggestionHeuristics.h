
@interface ATXComplicationSuggestionHeuristics : NSObject {
    ATXBluetoothDuetDataProvider * _bluetoothDataProvider;
    _ATXDuetHelper * _duetHelper;
}

+ (id)_countedHomeAccessoryEvents;
+ (unsigned long long)_fetchNumberOfCalendarEventsForStartDate:(id)arg1 endDate:(id)arg2;
+ (unsigned long long)_numCalendarEventsOverLastAndNextWeek;
+ (unsigned long long)_numRemindersOverLastWeek;
+ (unsigned long long)getClimateCountGivenHomeCounts:(id)arg1;
+ (unsigned long long)getLightCountGivenHomeCounts:(id)arg1;
+ (unsigned long long)getSecurityCountGivenHomeCounts:(id)arg1;
+ (unsigned long long)numberOfRemindersSinceDate:(id)arg1;
+ (long long)scoreFromConfidence:(unsigned char)arg1;

- (void).cxx_destruct;
- (unsigned char)_batteryHeuristic;
- (unsigned char)_calendarHeuristic;
- (bool)_confidenceIsValidForPrediction:(unsigned char)arg1;
- (id)_homeHeuristics;
- (unsigned long long)_numBluetoothConnectionsOverLastWeek;
- (unsigned char)_reminderHeuristic;
- (id)complicationHeuristicsDictionary;
- (id)description;
- (id)init;

@end
