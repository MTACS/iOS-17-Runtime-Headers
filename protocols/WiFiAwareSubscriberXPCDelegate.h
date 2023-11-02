
@protocol WiFiAwareSubscriberXPCDelegate <NSObject>

@required

- (void)subscribeFailedToStartWithError:(long long)arg1;
- (void)subscribeLostDiscoveryResultForPublishID:(unsigned char)arg1 address:(WiFiMACAddress *)arg2;
- (void)subscribeReceivedDiscoveryResult:(WiFiAwareDiscoveryResult *)arg1;
- (void)subscribeReceivedMessage:(NSData *)arg1 fromPublishID:(unsigned char)arg2 address:(WiFiMACAddress *)arg3;
- (void)subscribeStartedWithInstanceID:(unsigned char)arg1;
- (void)subscribeTerminatedWithReason:(long long)arg1;

@end
