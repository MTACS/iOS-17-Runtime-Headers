
@protocol HVNotesConsumer <HVConsumer>

@required

- (HVConsumerReply *)consumeNotesContentWithContext:(HVConsumptionContext *)arg1;

@end
