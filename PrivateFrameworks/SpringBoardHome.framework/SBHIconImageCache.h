
@interface SBHIconImageCache : NSObject <BSDescriptionProviding, SBIconObserver> {
    UIImage * _genericImage;
    struct SBIconImageInfo { 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
        double scale; 
        double continuousCornerRadius; 
    }  _iconImageInfo;
    CPMemoryPool * _iconImagesMemoryPool;
    SBHIconImageVariantCache * _maskedCache;
    NSString * _name;
    NSHashTable * _observedIcons;
    NSHashTable * _observers;
    UIImage * _overlayImage;
    unsigned long long  _poolingBypassCount;
    SBHIconImageVariantCache * _unmaskedCache;
    UIImage * _unmaskedOverlayImage;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIImage *genericImage;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; } iconImageInfo;
@property (nonatomic, readonly) CPMemoryPool *iconImagesMemoryPool;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) unsigned long long numberOfCacheHits;
@property (nonatomic, readonly) unsigned long long numberOfCacheMisses;
@property (nonatomic, readonly) unsigned long long numberOfCachedImages;
@property (nonatomic, readonly) unsigned long long numberOfMainThreadImageLoads;
@property (nonatomic, readonly) unsigned long long numberOfUnmaskedCacheHits;
@property (nonatomic, readonly) unsigned long long numberOfUnmaskedCacheMisses;
@property (nonatomic, readonly) unsigned long long numberOfUnmaskedCachedImages;
@property (nonatomic, readonly) UIImage *overlayImage;
@property (nonatomic) unsigned long long poolingBypassCount;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIImage *unmaskedOverlayImage;

+ (id)_backgroundQueue;
+ (id)genericImageWithInfo:(struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg1;
+ (bool)hasUniqueCachingPlaceholderImage;
+ (id)overlayImageWithInfo:(struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg1;
+ (bool)supportsMemoryPooling;
+ (id)unmaskedOverlayImageWithInfo:(struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg1;

- (void).cxx_destruct;
- (id)_cacheKeyForIcon:(id)arg1;
- (bool)_canPoolImage;
- (id)_iconImageOfSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 failGracefully:(bool)arg3 drawing:(id /* block */)arg4;
- (id)_pooledIconImageForIconImage:(id)arg1 allowingOptOut:(bool)arg2;
- (void)addObserver:(id)arg1;
- (void)beginObservingIconIfNecessary:(id)arg1;
- (void)cacheImage:(id)arg1 forIcon:(id)arg2;
- (void)cacheImageForIcon:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)cacheImagesForIcons:(id)arg1;
- (void)cacheImagesForIcons:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)cacheUnmaskedImagesForIcons:(id)arg1;
- (id)cachedImageForIcon:(id)arg1;
- (id)cachedUnmaskedImageForIcon:(id)arg1;
- (id)cachingPlaceholderImage;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)endObservingAllIcons;
- (void)endObservingIcon:(id)arg1;
- (void)enumerateVariantCachesUsingBlock:(id /* block */)arg1;
- (id)genericImage;
- (void)iconImageDidUpdate:(id)arg1;
- (struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })iconImageInfo;
- (void)iconImageVariantCache:(id)arg1 finishedAsynchronousLoadOfIcon:(id)arg2;
- (id)iconImagesMemoryPool;
- (id)imageForIcon:(id)arg1;
- (id)imageForIcon:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithName:(id)arg1 iconImageInfo:(struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg2;
- (bool)isCachingImageForIcon:(id)arg1;
- (id)memoryMappedIconImageForIconImage:(id)arg1;
- (id)memoryMappedIconImageOfSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 withDrawing:(id /* block */)arg3;
- (id)name;
- (void)notifyObserversOfUnmaskedUpdateForIcon:(id)arg1;
- (void)notifyObserversOfUpdateForIcon:(id)arg1;
- (unsigned long long)numberOfCacheHits;
- (unsigned long long)numberOfCacheMisses;
- (unsigned long long)numberOfCachedImages;
- (unsigned long long)numberOfMainThreadImageLoads;
- (unsigned long long)numberOfUnmaskedCacheHits;
- (unsigned long long)numberOfUnmaskedCacheMisses;
- (unsigned long long)numberOfUnmaskedCachedImages;
- (id)overlayImage;
- (void)performBackgroundCachingActivityUsingBlock:(id /* block */)arg1;
- (void)performWhenCachingActivityCompletesUsingBlock:(id /* block */)arg1;
- (id)pooledIconImageForMappedIconImage:(id)arg1;
- (unsigned long long)poolingBypassCount;
- (void)purgeAllCachedImages;
- (void)purgeCachedImagesForIcons:(id)arg1;
- (id)realImageForIcon:(id)arg1 options:(unsigned long long)arg2;
- (void)removeObserver:(id)arg1;
- (void)setPoolingBypassCount:(unsigned long long)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)unmaskedCachingPlaceholderImage;
- (id)unmaskedImageForIcon:(id)arg1;
- (id)unmaskedImageForIcon:(id)arg1 options:(unsigned long long)arg2;
- (id)unmaskedOverlayImage;

@end
