
@interface SearchUIImageCache : NSObject {
    NSCache * _imageCache;
}

@property (retain) NSCache *imageCache;

+ (void)cacheTLKImage:(id)arg1 forSFImage:(id)arg2;
+ (id)cachedTlkImageForSFImage:(id)arg1;
+ (id)sharedCache;

- (void).cxx_destruct;
- (void)appIconImageDidChange:(id)arg1;
- (void)clearCacheAndPostNotificationForChangedIconForBundleIdentifier:(id)arg1;
- (void)clearImagesWithNotification:(id)arg1;
- (void)dateDidChange;
- (id)imageCache;
- (id)init;
- (void)setImageCache:(id)arg1;

@end
