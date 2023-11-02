
@protocol RMAssetResolverProtocol

@required

+ (void)unassignAssets:(void *)arg1 scope:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: RMStoreDeclarationKey *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

- (void)resolveAsset:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: RMStoreUnresolvedAsset *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, RMStoreResolvedAsset *, NSError *, void*

@end
