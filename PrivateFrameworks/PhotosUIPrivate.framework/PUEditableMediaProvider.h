
@interface PUEditableMediaProvider : PUMediaProvider

- (int)requestAVAssetForVideo:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (int)requestAsynchronousVideoURLForAsset:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;

@end
