
@interface CPLBatteryMonitor : NSObject

+ (void)_updateBatteryWithBatteryEntry:(unsigned int)arg1;
+ (double)batteryLevel;
+ (id)delegate;
+ (id)powerStatus;
+ (id)powerStatusPlist;
+ (void)setDelegate:(id)arg1;
+ (void)startMonitoringPowerEvents;

@end
