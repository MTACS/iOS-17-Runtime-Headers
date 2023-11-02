
@interface EKFrozenReminderRecurrenceRule : EKFrozenReminderObject

+ (int)convertFromReminderKitFrequency:(long long)arg1;
+ (int)convertFromReminderKitWeekday:(long long)arg1;
+ (long long)convertToReminderKitFrequency:(int)arg1;
+ (long long)convertToReminderKitWeekday:(int)arg1;
+ (Class)meltedClass;

- (id)_recurrenceRule;
- (id)addUpdatedRecurrenceRule:(id)arg1;
- (unsigned long long)count;
- (id)daysOfTheWeekFromREMRecurrenceRule;
- (long long)ekWeekdayToREMWeekday:(long long)arg1;
- (id)endDate;
- (int)firstDayOfTheWeekRaw;
- (int)frequencyRaw;
- (id)initWithAlternateUniverseObject:(id)arg1 inEventStore:(id)arg2 withUpdatedChildObjects:(id)arg3;
- (id)initWithREMObject:(id)arg1 inStore:(id)arg2;
- (id)initWithREMObject:(id)arg1 inStore:(id)arg2 withChanges:(id)arg3;
- (long long)interval;
- (void)loadSpecifierDaysOfTheWeek:(id*)arg1 daysOfTheMonth:(id*)arg2 monthsOfTheYear:(id*)arg3 weeksOfTheYear:(id*)arg4 daysOfTheYear:(id*)arg5 setPositions:(id*)arg6;
- (id)remDaysOfTheWeekFromEKDaysOfTheWeek:(id)arg1;
- (id)remObjectID;
- (long long)remWeekdayToEKWeekday:(long long)arg1;
- (id)specifier;
- (id)uniqueIdentifier;
- (id)uuid;

@end
