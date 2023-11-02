
@protocol WiFiAwareDatapathXPCDelegate <NSObject>

@required

- (void)datapathConfirmedForPeerDataAddress:(WiFiMACAddress *)arg1 serviceSpecificInfo:(WiFiAwarePublishDatapathServiceSpecificInfo *)arg2;
- (void)datapathFailedToStartWithError:(long long)arg1;
- (void)datapathReceivedControlDataAddress:(WiFiMACAddress *)arg1 serviceSpecificInfo:(WiFiAwarePublishDatapathServiceSpecificInfo *)arg2 onInterfaceIndex:(unsigned int)arg3;
- (void)datapathStartedWithInstanceID:(unsigned char)arg1 initiatorDataAddress:(WiFiMACAddress *)arg2 localInterfaceIndex:(unsigned int)arg3;
- (void)datapathTerminatedWithReason:(long long)arg1;
- (void)datapathUpdatedInternetSharingPolicy:(long long)arg1;
- (void)datapathUpdatedPeerRSSI:(int)arg1;
- (void)datapathUpdatedServiceSpecificInfo:(WiFiAwarePublishDatapathServiceSpecificInfo *)arg1;

@end
