
@protocol HVConsumer <NSObject>

@required

- (NSString *)consumerName;
- (HVConsumerReply *)deleteDataDerivedFromContentMatchingRequest:(HVSpotlightDeletionRequest *)arg1;

@end
