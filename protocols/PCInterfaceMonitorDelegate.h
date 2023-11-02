
@protocol PCInterfaceMonitorDelegate <NSObject>

@optional

- (void)interfaceLinkQualityChanged:(PCInterfaceMonitor *)arg1 previousLinkQuality:(int)arg2;
- (void)interfaceRadioHotnessChanged:(PCInterfaceMonitor *)arg1;
- (void)interfaceReachabilityChanged:(PCInterfaceMonitor *)arg1;

@end
