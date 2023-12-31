
@protocol HKAnchoredObjectQueryClientInterface <HKQueryClientInterface>

@required

- (void)client_deliverSampleObjects:(NSArray *)arg1 deletedObjects:(NSArray *)arg2 anchor:(HKQueryAnchor *)arg3 clearPendingSamples:(bool)arg4 deliverResults:(bool)arg5 query:(NSUUID *)arg6;

@end
