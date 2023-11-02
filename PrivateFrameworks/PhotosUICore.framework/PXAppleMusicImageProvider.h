
@interface PXAppleMusicImageProvider : PXAudioAssetImageProvider

- (id)createImageLoaderForRequest:(id)arg1;
- (id)imageCacheKeyForRequest:(id)arg1;
- (id)imageLoaderCoalescingKeyForRequest:(id)arg1;
- (id)resultForCompletedImageLoader:(id)arg1 request:(id)arg2 error:(id*)arg3;

@end
