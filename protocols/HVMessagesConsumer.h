
@protocol HVMessagesConsumer <HVConsumer>

@required

- (HVConsumerReply *)consumeMessagesContentWithContext:(HVConsumptionContext *)arg1;

@end
