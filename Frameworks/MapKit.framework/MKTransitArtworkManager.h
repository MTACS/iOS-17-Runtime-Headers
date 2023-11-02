
@interface MKTransitArtworkManager : NSObject {
    VKIconManager * _iconManager;
}

@property (nonatomic, readonly) VKIconManager *iconManager;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_createImageWithBlockInAutoreleasePoolIfNeeded:(id /* block */)arg1;
- (id)_imageFroMVKImage:(id)arg1;
- (id)_imageWithDataSource:(id)arg1 size:(long long)arg2 featureType:(unsigned long long)arg3 scale:(double)arg4 nightMode:(bool)arg5 withWidthPaddingMultiple:(double)arg6 fullBleedColor:(id*)arg7;
- (bool)_isMemoryConstrained;
- (id)_vkImageWithShieldDataSource:(id)arg1 size:(long long)arg2 featureType:(unsigned long long)arg3 scale:(double)arg4 nightMode:(bool)arg5 widthPaddingMultiple:(double)arg6;
- (id)iconManager;
- (id)initWithIconManager:(id)arg1;
- (void)purge;
- (id)transitArtworkImageWithDataSource:(id)arg1 size:(long long)arg2 featureType:(unsigned long long)arg3 scale:(double)arg4 nightMode:(bool)arg5;
- (id)transitArtworkImageWithDataSource:(id)arg1 size:(long long)arg2 featureType:(unsigned long long)arg3 scale:(double)arg4 nightMode:(bool)arg5 withWidthPaddingMultiple:(double)arg6;
- (id)transitArtworkImageWithDataSource:(id)arg1 size:(long long)arg2 featureType:(unsigned long long)arg3 scale:(double)arg4 nightMode:(bool)arg5 withWidthPaddingMultiple:(double)arg6 fullBleedColor:(id*)arg7;
- (id)transitArtworkImageWithShieldDataSource:(id)arg1 size:(long long)arg2 featureType:(unsigned long long)arg3 scale:(double)arg4 nightMode:(bool)arg5;

@end
