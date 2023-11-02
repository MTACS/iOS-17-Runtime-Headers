
@protocol SOSPairedDeviceStatusObserver <NSObject>

@optional

- (void)pairedDeviceSOSStatusDidUpdate:(SOSStatus *)arg1 progression:(long long)arg2 shouldHandleThirdParty:(bool)arg3;

@end
