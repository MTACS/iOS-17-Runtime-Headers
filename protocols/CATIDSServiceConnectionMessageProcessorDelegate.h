
@protocol CATIDSServiceConnectionMessageProcessorDelegate

@required

- (void)messageProcessor:(CATIDSServiceConnectionMessageProcessor *)arg1 receivedExpectedSequence:(unsigned long long)arg2;
- (void)messageProcessor:(CATIDSServiceConnectionMessageProcessor *)arg1 wantsAggregation:(CATActiveIDSServiceConnectionContentSendData *)arg2;
- (void)messageProcessor:(CATIDSServiceConnectionMessageProcessor *)arg1 wantsRetransmission:(NSArray *)arg2;
- (void)messageProcessor:(CATIDSServiceConnectionMessageProcessor *)arg1 wantsToAckUpTo:(unsigned long long)arg2;
- (void)messageProcessor:(CATIDSServiceConnectionMessageProcessor *)arg1 wantsToCloseWithError:(NSError *)arg2;
- (void)messageProcessorWantsToAcknowledgeRemote:(CATIDSServiceConnectionMessageProcessor *)arg1;
- (void)messageProcessorWantsToExtendKeepAlive:(CATIDSServiceConnectionMessageProcessor *)arg1;

@end
