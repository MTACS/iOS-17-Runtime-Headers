
@interface PXPeopleCandidateWidgetUtilities : NSObject

+ (id)_dateKeyForDay:(id)arg1;
+ (id)_dateKeyForToday;
+ (id)_dateKeyForTomorrow;
+ (id)_localTimeZoneFormatStringForDate:(id)arg1;
+ (bool)_pastMidnightBufferThreshold;
+ (id)_tomorrow;
+ (id)insertPerson:(id)arg1 forDaysDictionary:(id)arg2;
+ (id)removeAllPreviousNotNowPersonsIfNeededForDaysDictionary:(id)arg1;
+ (bool)shouldFetchCandidatesForPerson:(id)arg1 forDaysDictionary:(id)arg2;

@end
