
@protocol JFXEffectAssetProviderProtocol <NSObject>

@required

- (NSArray *)availableAssetsWithFilteringOptions:(JFXEffectAssetFilteringOptions *)arg1;
- (NSArray *)availableAssetsWithFilteringOptionsArray:(NSArray *)arg1;
- (void)cancelAssetRequest:(NSString *)arg1;
- (NSString *)describeRequest:(NSString *)arg1;
- (NSArray *)localAssetsWithFilteringOptions:(JFXEffectAssetFilteringOptions *)arg1;
- (NSString *)requestAllAssetsWithOptions:(void *)arg1 progressHandler:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 15: JFXEffectAssetRequestOptions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, double, void*, id /* block */, void*, void, id /* block */, NSArray *, bool, NSError *, void*
- (NSString *)requestAssetWithOptions:(void *)arg1 progressHandler:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 15: JFXEffectAssetRequestOptions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, double, void*, id /* block */, void*, void, id /* block */, JFXEffectAsset *, bool, NSError *, void*
- (void)updatePriorityForAssetRequest:(NSString *)arg1 newPriority:(long long)arg2;

@end
