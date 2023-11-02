
@protocol DDSMAAutoAssetProvider <NSObject>

@required

- (MAAutoAsset *)autoAssetForAssetSelector:(DDSMAAutoAssetSelector *)arg1 clientID:(NSString *)arg2;
- (void)fetchLockReasonCountForAutoAsset:(void *)arg1 callback:(void *)arg2; // needs 2 arg types, found 8: MAAutoAsset *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*
- (void)lockAutoAsset:(void *)arg1 callback:(void *)arg2; // needs 2 arg types, found 9: MAAutoAsset *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MAAutoAssetSelector *, bool, NSError *, void*

@end
