
@protocol HVUserActivityConsumer <HVConsumer>

@required

- (HVConsumerReply *)consumeSearchableUserActivityWithContext:(HVConsumptionContext *)arg1;
- (HVConsumerReply *)consumeUserActivityMetadataWithContext:(HVConsumptionContext *)arg1;

@end
