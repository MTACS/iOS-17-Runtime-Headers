
@interface _UIImageViewExtendedStorage : _UIImageViewSimpleStorage {
    _UIImageViewAnimationProperties * _animationProperties;
    _UIImageViewImageProperties * _highlightedImageProperties;
    _UIImageViewImageLoadingProperties * _imageLoadingProperties;
    _UIImageViewUncommonProperties * _uncommonProperties;
    bool  adjustsImageSizeForAccessibilityContentSizeCategory;
    bool  highlighted;
    UILayoutGuide * imageContentGuide;
    bool  masksTemplateImages;
    UIImageSymbolConfiguration * preferredSymbolConfiguration;
}

+ (id)storageFromSimpleStorage:(id)arg1;

- (void).cxx_destruct;
- (id)CIRenderer;
- (bool)adjustsImageSizeForAccessibilityContentSizeCategory;
- (double)animationDuration;
- (id)animationImages;
- (id)animationProperties;
- (long long)animationRepeatCount;
- (long long)defaultRenderingMode;
- (unsigned int)drawMode;
- (id)highlightedAnimationImages;
- (id)highlightedImage;
- (id)highlightedImageProperties;
- (id)imageBeingSetByLoader;
- (id)imageContentGuide;
- (id)imageLoader;
- (id)imageLoadingProperties;
- (bool)isEnqueueingLoad;
- (bool)isHighlighted;
- (bool)isStartingLoad;
- (bool)isStoppingLoad;
- (id)loadingDelegate;
- (bool)masksTemplateImages;
- (id)overridingSymbolConfiguration;
- (id)placeholderView;
- (id)preferredSymbolConfiguration;
- (id)resolvedHighlightedImage;
- (void)setAdjustsImageSizeForAccessibilityContentSizeCategory:(bool)arg1;
- (void)setAnimationDuration:(double)arg1;
- (void)setAnimationImages:(id)arg1;
- (void)setAnimationRepeatCount:(long long)arg1;
- (void)setCIRenderer:(id)arg1;
- (void)setDefaultRenderingMode:(long long)arg1;
- (void)setDrawMode:(unsigned int)arg1;
- (void)setEnqueueingLoad:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setHighlightedAnimationImages:(id)arg1;
- (void)setHighlightedImage:(id)arg1;
- (void)setImageBeingSetByLoader:(id)arg1;
- (void)setImageContentGuide:(id)arg1;
- (void)setImageLoader:(id)arg1;
- (void)setLoadingDelegate:(id)arg1;
- (void)setMasksTemplateImages:(bool)arg1;
- (void)setOverridingSymbolConfiguration:(id)arg1;
- (void)setPlaceholderView:(id)arg1;
- (void)setPreferredSymbolConfiguration:(id)arg1;
- (void)setResolvedHighlightedImage:(id)arg1;
- (void)setStartingLoad:(bool)arg1;
- (void)setStoppingLoad:(bool)arg1;
- (void)setTemplateImageRenderingEffects:(unsigned long long)arg1;
- (unsigned long long)templateImageRenderingEffects;
- (id)uncommonProperties;

@end
