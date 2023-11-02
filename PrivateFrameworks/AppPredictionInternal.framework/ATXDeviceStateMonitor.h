
@interface ATXDeviceStateMonitor : NSObject <ATXDeviceStateMonitorProtocol>

+ (id)SSID;
+ (bool)airplaneMode;
+ (bool)onWifi;
+ (void)setAirplaneMode:(bool)arg1;
+ (void)setSSID:(id)arg1;
+ (void)startMockingSystem;
+ (void)stopMockingSystem;

@end
