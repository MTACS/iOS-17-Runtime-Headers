
@protocol WiFiAwareSubscriberDelegate <NSObject>

@required

- (void)subscriber:(WiFiAwareSubscriber *)arg1 failedToStartWithError:(long long)arg2;
- (void)subscriber:(WiFiAwareSubscriber *)arg1 lostDiscoveryResultForPublishID:(unsigned char)arg2 address:(WiFiMACAddress *)arg3;
- (void)subscriber:(WiFiAwareSubscriber *)arg1 terminatedWithReason:(long long)arg2;
- (void)subscriberStarted:(WiFiAwareSubscriber *)arg1;

@optional

- (void)subscriber:(WiFiAwareSubscriber *)arg1 receivedDiscoveryResult:(WiFiAwareDiscoveryResult *)arg2;
- (void)subscriber:(WiFiAwareSubscriber *)arg1 receivedDiscoveyResult:(WiFiAwareDiscoveryResult *)arg2;
- (void)subscriber:(WiFiAwareSubscriber *)arg1 receivedMessage:(NSData *)arg2 fromPublishID:(unsigned char)arg3 address:(WiFiMACAddress *)arg4;

@end
