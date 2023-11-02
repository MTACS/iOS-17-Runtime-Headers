
@protocol CATIDSServiceConnectionDataAggregatorDelegate

@required

- (void)connectionDataAggregator:(id <CATIDSServiceConnectionDataAggregator>)arg1 aggregatedData:(NSData *)arg2 withNumber:(unsigned long long)arg3;
- (void)connectionDataAggregator:(id <CATIDSServiceConnectionDataAggregator>)arg1 isMissingSequenceNumbers:(NSArray *)arg2;
- (void)connectionDataAggregatorWantsToReportSequenceNumber:(id <CATIDSServiceConnectionDataAggregator>)arg1;

@end
