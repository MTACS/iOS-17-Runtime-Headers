
@protocol WiFiAwarePublisherXPCDelegate <NSObject>

@required

- (void)publishDataConfirmedForHandle:(WiFiAwarePublisherDataSessionHandle *)arg1 localInterfaceIndex:(unsigned int)arg2 serviceSpecificInfo:(WiFiAwarePublishDatapathServiceSpecificInfo *)arg3;
- (void)publishDataTerminatedForHandle:(WiFiAwarePublisherDataSessionHandle *)arg1 reason:(long long)arg2;
- (void)publishFailedToStartWithError:(long long)arg1;
- (void)publishReceivedMessage:(NSData *)arg1 fromSubscriberID:(unsigned char)arg2 subscriberAddress:(WiFiMACAddress *)arg3;
- (void)publishStartedWithInstanceID:(unsigned char)arg1;
- (void)publishTerminatedWithReason:(long long)arg1;

@end
