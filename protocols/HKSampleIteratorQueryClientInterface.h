
@protocol HKSampleIteratorQueryClientInterface <HKQueryClientInterface>

@required

- (void)client_deliverSampleObjects:(NSArray *)arg1 queryCursor:(HKSampleIteratorQueryCursor *)arg2 deliverResults:(bool)arg3 query:(NSUUID *)arg4;

@end
