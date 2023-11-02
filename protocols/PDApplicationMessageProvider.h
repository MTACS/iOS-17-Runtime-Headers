
@protocol PDApplicationMessageProvider <NSObject>

@required

- (PKApplicationMessageContent *)applicationMessageSink:(id <PKApplicationMessageSink>)arg1 createContentForMessageWithRegistration:(PKApplicationMessageRegistration *)arg2;
- (void)applicationMessageSink:(id <PKApplicationMessageSink>)arg1 removedMessageWithRegistration:(PKApplicationMessageRegistration *)arg2;
- (void)applicationMessageSink:(id <PKApplicationMessageSink>)arg1 tappedMessageWithRegistration:(PKApplicationMessageRegistration *)arg2;
- (void)connectApplicationMessageSink:(id <PKApplicationMessageSink>)arg1;

@end
