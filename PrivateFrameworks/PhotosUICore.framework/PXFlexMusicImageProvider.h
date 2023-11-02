
@interface PXFlexMusicImageProvider : PXAudioAssetImageProvider {
    NSObject<OS_dispatch_queue> * _imageLoadingQueue;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *imageLoadingQueue;

- (void).cxx_destruct;
- (id)createImageLoaderForRequest:(id)arg1;
- (id)imageCacheKeyForRequest:(id)arg1;
- (id)imageLoaderCoalescingKeyForRequest:(id)arg1;
- (id)imageLoadingQueue;
- (id)init;
- (id)resultForCompletedImageLoader:(id)arg1 request:(id)arg2 error:(id*)arg3;

@end
