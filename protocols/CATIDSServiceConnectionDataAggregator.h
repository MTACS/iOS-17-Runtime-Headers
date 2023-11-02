
@protocol CATIDSServiceConnectionDataAggregator

@required

- (<CATIDSServiceConnectionDataAggregatorDelegate> *)delegate;
- (void)receiveDataContent:(CATActiveIDSServiceConnectionContentSendData *)arg1;
- (void)receiveExpectedSequenceNumber:(unsigned long long)arg1;
- (unsigned long long)receivedSequenceNumber;
- (void)setDelegate:(id <CATIDSServiceConnectionDataAggregatorDelegate>)arg1;

@end
