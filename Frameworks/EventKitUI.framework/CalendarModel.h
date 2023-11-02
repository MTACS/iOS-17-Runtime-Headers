
@interface CalendarModel : CUIKCalendarModel

+ (id)calendarModelWithDataPath:(id)arg1;
+ (id)calendarModelWithEventStore:(id)arg1;
+ (id)new;

- (id)cachedSpecialDayDataForSection:(long long)arg1;
- (id)init;
- (id)initWithDataPath:(id)arg1;
- (id)initWithEventStore:(id)arg1;
- (id)occurrencesForDay:(id)arg1 waitForLoad:(bool)arg2;
- (id)occurrencesForStartDate:(id)arg1 endDate:(id)arg2 preSorted:(bool)arg3 waitForLoad:(bool)arg4;
- (id)occurrencesForStartDay:(id)arg1 endDay:(id)arg2 preSorted:(bool)arg3 waitForLoad:(bool)arg4;
- (id)persistedSceneState;

@end
