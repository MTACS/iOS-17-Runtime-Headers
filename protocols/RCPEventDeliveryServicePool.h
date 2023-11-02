
@protocol RCPEventDeliveryServicePool

@required

- (<RCPEventDeliveryService> *)deliveryServiceForSenderProperties:(RCPEventSenderProperties *)arg1;
- (id)init;
- (bool)prewarmForSenderProperties:(RCPEventSenderProperties *)arg1 withError:(id*)arg2;
- (void)setShouldIgnoreSenderProperties:(bool)arg1;
- (bool)shouldIgnoreSenderProperties;
- (void)tearDown;

@end
