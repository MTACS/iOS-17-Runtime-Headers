
@interface FCCDailyGoalLocalizer : NSObject

+ (id)_keyForEventType:(id)arg1 aboveAverage:(bool)arg2;
+ (id)_keyForGoalType:(long long)arg1;
+ (id)_keyForGoalTypes:(id)arg1;
+ (id)_keyForTimeOfDayAtDate:(id)arg1;
+ (id)_localizeCount:(double)arg1 forKey:(id)arg2 experienceType:(unsigned long long)arg3;
+ (id)localizedAppName;
+ (id)localizedDescriptionForGoalsCompleted:(id)arg1 singleGoalExceeded:(bool)arg2 date:(id)arg3 firstName:(id)arg4 isWheelchairUser:(bool)arg5 experienceType:(unsigned long long)arg6 isStandalone:(bool)arg7;
+ (id)localizedDescriptionForIncompleteGoalTypes:(id)arg1 percentComplete:(double)arg2 value:(double)arg3 valueRemaining:(double)arg4 date:(id)arg5 firstName:(id)arg6 moveUnit:(id)arg7 isWheelchairUser:(bool)arg8 progressEventIdentifier:(id)arg9 minutesToWalkToCompleteRing:(long long)arg10 hasCurrentMoveStreak:(bool)arg11 experienceType:(unsigned long long)arg12 isStandalone:(bool)arg13;
+ (id)localizedTitleForGoalsCompleted:(id)arg1 isWheelchairUser:(bool)arg2 experienceType:(unsigned long long)arg3;
+ (id)localizedTitleForIncompleteGoalTypes:(id)arg1 percentComplete:(double)arg2 valueRemaining:(double)arg3 progressEventIdentifier:(id)arg4 experienceType:(unsigned long long)arg5 isStandalone:(bool)arg6;

@end
