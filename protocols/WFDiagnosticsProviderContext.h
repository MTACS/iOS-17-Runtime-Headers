
@protocol WFDiagnosticsProviderContext <WFProviderContext>

@required

- (NSString *)BSSID;
- (NSString *)adviceString;
- (NSString *)awdl;
- (NSString *)beaconPER;
- (NSString *)bluetooth;
- (bool)captive;
- (NSString *)cca;
- (NSNumber *)channel;
- (NSString *)channelPerformance;
- (NSString *)channelString;
- (NSString *)channelWidth;
- (NSString *)coexFooter;
- (NSString *)deployment;
- (NSString *)gateway;
- (NSString *)internet;
- (bool)managed;
- (NSString *)motion;
- (bool)multiAP;
- (NSDate *)networkQualityDate;
- (double)networkQualityResponsiveness;
- (NSString *)probeFooter;
- (NSString *)recvFrames;
- (id /* block */)refreshHandler:(void *)arg1; // needs 1 arg types, found 4: id /* block */, void*, id, SEL
- (NSString *)rssi;
- (NSString *)rssiPerformance;
- (NSString *)scan;
- (NSString *)security;
- (NSString *)securityAdvice;
- (void)setNetworkQualityDate:(NSDate *)arg1;
- (void)setNetworkQualityResponsiveness:(double)arg1;
- (void)setRefreshHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (NSString *)transmitPER;

@end
