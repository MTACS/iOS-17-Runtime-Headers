
@protocol HVMailConsumer <HVConsumer>

@required

- (HVConsumerReply *)consumeMailContentWithContext:(HVConsumptionContext *)arg1;

@end
