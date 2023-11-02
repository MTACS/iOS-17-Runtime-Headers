
@protocol WiFiAwarePublisherDelegate <NSObject>

@required

- (void)publisher:(WiFiAwarePublisher *)arg1 failedToStartWithError:(long long)arg2;
- (void)publisher:(WiFiAwarePublisher *)arg1 terminatedWithReason:(long long)arg2;
- (void)publisherStarted:(WiFiAwarePublisher *)arg1;

@optional

- (void)publisher:(WiFiAwarePublisher *)arg1 dataConfirmedForHandle:(WiFiAwarePublisherDataSessionHandle *)arg2 localInterfaceIndex:(unsigned int)arg3 serviceSpecificInfo:(WiFiAwarePublishDatapathServiceSpecificInfo *)arg4;
- (void)publisher:(WiFiAwarePublisher *)arg1 dataTerminatedForHandle:(WiFiAwarePublisherDataSessionHandle *)arg2 reason:(long long)arg3;
- (void)publisher:(WiFiAwarePublisher *)arg1 receivedMessage:(NSData *)arg2 fromSubscriberID:(unsigned char)arg3 subscriberAddress:(WiFiMACAddress *)arg4;

@end
