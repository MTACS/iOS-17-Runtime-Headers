
@protocol RCPEventDeliveryService

@required

- (bool)isRunning;
- (void)postHIDEvent:(struct __IOHIDEvent { }*)arg1;
- (RCPEventSenderProperties *)properties;
- (void)setProperties:(RCPEventSenderProperties *)arg1;
- (bool)startWithError:(id*)arg1;
- (void)stop;

@end
