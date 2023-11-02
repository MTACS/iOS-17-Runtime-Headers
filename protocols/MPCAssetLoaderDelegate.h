
@protocol MPCAssetLoaderDelegate

@required

- (void)assetLoadingDidCompleteForItem:(id <MFQueuePlayerItem>)arg1 error:(NSError *)arg2;
- (void)assetLoadingDidStartForItem:(id <MFQueuePlayerItem>)arg1;

@end
