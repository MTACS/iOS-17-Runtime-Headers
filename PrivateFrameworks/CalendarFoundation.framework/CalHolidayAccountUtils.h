
@interface CalHolidayAccountUtils : NSObject

+ (id)_createUnsavedHolidayAccountWithAccountStore:(id)arg1;
+ (id)_holidayAccountWithAccountStore:(id)arg1;
+ (bool)_isEnabledWithAccount:(id)arg1;
+ (void)ensureHolidayAccountExistsWithAccountStore:(id)arg1;
+ (id)holidayAccountDescription;
+ (bool)holidayCalendarIsEnabledWithAccountStore:(id)arg1;
+ (id)logHandle;
+ (void)setHolidayCalendarIsEnabled:(bool)arg1 withAccountStore:(id)arg2;

@end
