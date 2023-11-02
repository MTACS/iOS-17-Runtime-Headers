
@protocol PCInterfaceUsabilityMonitorDelegate <NSObject>

@optional

- (void)interfaceLinkQualityChanged:(NSObject<PCInterfaceUsabilityMonitorProtocol> *)arg1 previousLinkQuality:(int)arg2;
- (void)interfaceRadioHotnessChanged:(NSObject<PCInterfaceUsabilityMonitorProtocol> *)arg1;
- (void)interfaceReachabilityChanged:(NSObject<PCInterfaceUsabilityMonitorProtocol> *)arg1;

@end
