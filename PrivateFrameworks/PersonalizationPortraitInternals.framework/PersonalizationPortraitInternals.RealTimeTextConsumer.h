
@interface PersonalizationPortraitInternals.RealTimeTextConsumer : PersonalizationPortraitInternals.Consumer <HVInteractionConsumer, HVMessagesConsumer, HVRemindersConsumer, HVSafariConsumer>

- (void).cxx_destruct;
- (id)consumeInteractionWithContext:(id)arg1;
- (id)consumeMessagesContentWithContext:(id)arg1;
- (id)consumeRemindersContentWithContext:(id)arg1;
- (id)consumeSafariContentWithContext:(id)arg1;
- (id)consumerName;
- (id)deleteDataDerivedFromContentMatchingRequest:(id)arg1;

@end
