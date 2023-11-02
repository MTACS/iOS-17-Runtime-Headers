
@interface MSSendLaterContext : NSObject

+ (id)_configuredTitleForFormat:(id)arg1 date:(id)arg2;
+ (id)_nextMondayMorning;
+ (unsigned long long)contextForCurrentDate;
+ (unsigned long long)contextForDate:(id)arg1;
+ (bool)shouldShowSendLaterDisclaimerAlertForContext:(unsigned long long)arg1;
+ (id)titleAndDateForSendLaterContext:(unsigned long long)arg1;

@end
