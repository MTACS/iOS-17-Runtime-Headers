
@protocol NSFileProviderChangeObserver <NSObject>

@required

- (void)didDeleteItemsWithIdentifiers:(NSArray *)arg1;
- (void)didUpdateItems:(NSArray *)arg1;
- (void)finishEnumeratingChangesUpToSyncAnchor:(NSData *)arg1 moreComing:(bool)arg2;
- (void)finishEnumeratingWithError:(NSError *)arg1;

@optional

- (long long)suggestedBatchSize;

@end
