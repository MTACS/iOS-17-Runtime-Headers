
@protocol HVRemindersConsumer <HVConsumer>

@required

- (HVConsumerReply *)consumeRemindersContentWithContext:(HVConsumptionContext *)arg1;

@end
