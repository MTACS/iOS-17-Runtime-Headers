
@protocol JFXEffectRenderingAssetProviderProtocol <JFXEffectAssetProviderProtocol>

@required

- (bool)areRenderingAssetsLocal;
- (NSString *)requestRenderingAssetsWithPriority:(void *)arg1 progressHandler:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 16: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, double, bool*, void*, id /* block */, void*, void, id /* block */, NSArray *, bool, NSError *, void*

@end
