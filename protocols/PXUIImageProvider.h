
@protocol PXUIImageProvider <NSObject>

@required

- (void)cancelImageRequest:(long long)arg1;
- (id)init;
- (long long)requestImageForAsset:(void *)arg1 targetSize:(void *)arg2 contentMode:(void *)arg3 options:(void *)arg4 resultHandler:(void *)arg5; // needs 5 arg types, found 11: <PXDisplayAsset> *, struct CGSize { double x1; double x2; }, long long, PXImageRequestOptions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIImage *, NSDictionary *, void*

@optional

- (void)startCachingImagesForAssets:(NSArray *)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(PXImageRequestOptions *)arg4;
- (void)stopCachingImagesForAllAssets;
- (void)stopCachingImagesForAssets:(NSArray *)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(PXImageRequestOptions *)arg4;

@end
