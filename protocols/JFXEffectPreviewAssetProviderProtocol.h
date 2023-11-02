
@protocol JFXEffectPreviewAssetProviderProtocol <JFXEffectAssetProviderProtocol>

@required

- (bool)arePreviewingAssetsLocal;
- (JFXEffectStaticPreviewOptions *)effectWillRenderPreviewWithOptions:(JFXEffectStaticPreviewOptions *)arg1;
- (NSString *)requestPreviewingAssetsWithPriority:(void *)arg1 onlyThumbnailAssetWhenAvailable:(void *)arg2 progressHandler:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 17: long long, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, double, bool*, void*, id /* block */, void*, void, id /* block */, NSArray *, bool, NSError *, void*

@end
