
@protocol MFAssetLoading

@required

- (void)cancelLoading;
- (void)loadAssetFor:(void *)arg1 token:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 10: <MFQueuePlayerItem> *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <MFQueuePlayerItem> *, long long, NSError *, void*
- (void)loadAssetValuesFor:(void *)arg1 keys:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: <MFQueuePlayerItem> *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (double)unloadingPlaybackAssetsOnIdleDuration;

@end
