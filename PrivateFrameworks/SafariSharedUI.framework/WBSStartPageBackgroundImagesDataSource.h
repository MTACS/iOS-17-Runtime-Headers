
@interface WBSStartPageBackgroundImagesDataSource : NSObject {
    NSArray * _defaultImageURLs;
    struct Vector<WTF::RetainPtr<CGImage *>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { 
        void *m_buffer; 
        unsigned int m_capacity; 
        unsigned int m_size; 
    }  _imageCache;
    NSObject<OS_dispatch_queue> * _imageLoadingQueue;
    NSObject<OS_dispatch_queue> * _imageSavingQueue;
    NSArray * _imageURLsWithLuminance;
    NSMutableDictionary * _pendingImageThumbnailRequests;
    NSURL * _thumbnailsPath;
}

@property (nonatomic, readonly) long long itemCount;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct RetainPtr<CGImage *> { void *x1; })_createThumbnail:(id)arg1 imageSource:(struct RetainPtr<CGImageSource *> { void *x1; })arg2;
- (id)_thumbnailURLWithItemIndex:(long long)arg1;
- (void)imageThumbnailWithItemIndex:(long long)arg1 completion:(id /* block */)arg2;
- (id)imageURLAndLuminanceWithItemIndex:(long long)arg1;
- (long long)indexOfBackgroundImageWithName:(id)arg1;
- (id)initWithBuiltInImageURLs:(id)arg1 localCachesDirectory:(id)arg2;
- (id)initWithBundle:(id)arg1 localCachesDirectory:(id)arg2;
- (long long)itemCount;

@end
