
@interface CalRecurrenceRuleDescriptionGenerator : NSObject

+ (id)_andDaysOfWeekString:(id)arg1;
+ (id)_customDayCombinationDescription:(id)arg1;
+ (id)_dayOfMonthAsString:(long long)arg1;
+ (id)_daysOfWeek;
+ (id)_numberedWeekDayString:(id)arg1;
+ (id)_orDaysOfWeekString:(id)arg1;
+ (id)_weekDayPositionAsString:(long long)arg1;
+ (long long)daysTypeForDayArray:(id)arg1;
+ (id)humanReadableDescriptionWithStartDate:(id)arg1 ofRecurrenceRuleICSString:(id)arg2 isConcise:(bool)arg3;
+ (id)localizedOfMonthStringForMonth:(id)arg1;

@end
