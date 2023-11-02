
@protocol WiFiAwareDataSessionDelegate <NSObject>

@required

- (void)dataSession:(WiFiAwareDataSession *)arg1 confirmedForPeerDataAddress:(WiFiMACAddress *)arg2 serviceSpecificInfo:(WiFiAwarePublishDatapathServiceSpecificInfo *)arg3;
- (void)dataSession:(WiFiAwareDataSession *)arg1 failedToStartWithError:(long long)arg2;
- (void)dataSession:(WiFiAwareDataSession *)arg1 terminatedWithReason:(long long)arg2;
- (void)dataSessionRequestStarted:(WiFiAwareDataSession *)arg1;

@optional

- (void)dataSession:(WiFiAwareDataSession *)arg1 receivedControlDataAddress:(WiFiMACAddress *)arg2 serviceSpecificInfo:(WiFiAwarePublishDatapathServiceSpecificInfo *)arg3 onInterfaceIndex:(unsigned int)arg4;
- (void)dataSession:(WiFiAwareDataSession *)arg1 updatedPeerRSSI:(int)arg2;

@end
