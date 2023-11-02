
@protocol RCPBaseEventStreamComposer <NSObject>

@required

- (void)advanceTime:(double)arg1;
- (RCPEventSenderProperties *)senderProperties;
- (void)setSenderProperties:(RCPEventSenderProperties *)arg1;

@end
