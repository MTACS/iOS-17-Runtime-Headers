
@protocol PXAssetsSharingHelper <NSObject>

@required

+ (void)copyAssets:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
+ (void)prepareAssets:(void *)arg1 forActivityType:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSArray *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*

- (void)copyAssets:(NSArray *)arg1;
- (<PXAssetsSharingHelperDelegate> *)delegate;
- (void)ensureLocalAssetsForCloudPhotoSharing:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)ensureLocalAssetsForRendering:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)ensureLocalAssetsForSyndicationSave:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)ensureRenderingForAssetsWithDeferredProcessingInCollection:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: <PXDisplayAssetCollection> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)setDelegate:(id <PXAssetsSharingHelperDelegate>)arg1;

@end
