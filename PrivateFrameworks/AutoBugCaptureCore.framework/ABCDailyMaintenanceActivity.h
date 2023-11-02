
@interface ABCDailyMaintenanceActivity : ABCPeriodicMaintenanceActivity

+ (const char *)periodicActivityID;
+ (long long)periodicActivityInterval;
+ (id)sharedInstance;

@end
