
@interface SBHIconImageVariantCache : NSObject <BSDescriptionProviding> {
    NSMutableDictionary * _cachingRequests;
    NSMutableSet * _canceledCacheRequestIdentifiers;
    NSHashTable * _failedIcons;
    SBHIconImageCache * _iconImageCache;
    struct SBIconImageInfo { 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
        double scale; 
        double continuousCornerRadius; 
    }  _iconImageInfo;
    NSMutableDictionary * _images;
    long long  _variant;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) SBHIconImageCache *iconImageCache;
@property (nonatomic, readonly) struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; } iconImageInfo;
@property (nonatomic, readonly) unsigned long long numberOfCacheHits;
@property (nonatomic, readonly) unsigned long long numberOfCacheMisses;
@property (nonatomic, readonly) unsigned long long numberOfCachedImages;
@property (nonatomic, readonly) unsigned long long numberOfFailedIcons;
@property (nonatomic, readonly) unsigned long long numberOfMainThreadImageLoads;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long variant;

- (void).cxx_destruct;
- (id)_cacheKeyForIcon:(id)arg1;
- (bool)_canPoolImage;
- (id)_iconImageOfSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 failGracefully:(bool)arg3 drawing:(id /* block */)arg4;
- (id)_pooledIconImageForIconImage:(id)arg1 allowingOptOut:(bool)arg2;
- (id)_variantDescription;
- (id)_variantImageForIcon:(id)arg1;
- (void)cacheImage:(id)arg1 forIcon:(id)arg2;
- (void)cacheImageForIcon:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (id)cachedImageForIcon:(id)arg1;
- (bool)cancelCachingRequestsForIcon:(id)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)iconImageCache;
- (struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })iconImageInfo;
- (id)iconImagesMemoryPool;
- (id)initWithVariant:(long long)arg1 iconImageInfo:(struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg2;
- (bool)isCachingImageForIcon:(id)arg1;
- (id)memoryMappedIconImageForIconImage:(id)arg1;
- (id)memoryMappedIconImageOfSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 withDrawing:(id /* block */)arg3;
- (unsigned long long)numberOfCacheHits;
- (unsigned long long)numberOfCacheMisses;
- (unsigned long long)numberOfCachedImages;
- (unsigned long long)numberOfFailedIcons;
- (unsigned long long)numberOfMainThreadImageLoads;
- (id)pooledIconImageForMappedIconImage:(id)arg1;
- (void)purgeAllCachedImages;
- (void)purgeCachedImagesForIcons:(id)arg1;
- (id)realImageForIcon:(id)arg1 options:(unsigned long long)arg2;
- (void)setIconImageCache:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (long long)variant;

@end
