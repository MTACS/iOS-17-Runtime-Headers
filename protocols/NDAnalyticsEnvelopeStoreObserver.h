
@protocol NDAnalyticsEnvelopeStoreObserver <NSObject>

@required

- (void)envelopeStore:(NDAnalyticsEnvelopeStore *)arg1 didFlushEnvelopesForEntries:(NSArray *)arg2;

@end
