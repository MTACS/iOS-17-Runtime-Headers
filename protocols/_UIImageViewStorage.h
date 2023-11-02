
@protocol _UIImageViewStorage <NSObject>

@required

- (_UIImageCIImageRenderer *)CIRenderer;
- (bool)adjustsImageSizeForAccessibilityContentSizeCategory;
- (double)animationDuration;
- (NSArray *)animationImages;
- (long long)animationRepeatCount;
- (long long)defaultRenderingMode;
- (unsigned int)drawMode;
- (NSArray *)highlightedAnimationImages;
- (UIImage *)highlightedImage;
- (UIImage *)image;
- (UIImage *)imageBeingSetByLoader;
- (UILayoutGuide *)imageContentGuide;
- (_UIImageLoader *)imageLoader;
- (bool)isEnqueueingLoad;
- (bool)isHighlighted;
- (bool)isStartingLoad;
- (bool)isStoppingLoad;
- (NSMapTable *)layouts;
- (<_UIImageViewLoadingDelegate> *)loadingDelegate;
- (bool)masksTemplateImages;
- (UIImageSymbolConfiguration *)overridingSymbolConfiguration;
- (UIView *)placeholderView;
- (UIImageSymbolConfiguration *)preferredSymbolConfiguration;
- (UIImage *)resolvedHighlightedImage;
- (UIImage *)resolvedImage;
- (void)setAdjustsImageSizeForAccessibilityContentSizeCategory:(bool)arg1;
- (void)setAnimationDuration:(double)arg1;
- (void)setAnimationImages:(NSArray *)arg1;
- (void)setAnimationRepeatCount:(long long)arg1;
- (void)setCIRenderer:(_UIImageCIImageRenderer *)arg1;
- (void)setDefaultRenderingMode:(long long)arg1;
- (void)setDrawMode:(unsigned int)arg1;
- (void)setEnqueueingLoad:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setHighlightedAnimationImages:(NSArray *)arg1;
- (void)setHighlightedImage:(UIImage *)arg1;
- (void)setImage:(UIImage *)arg1;
- (void)setImageBeingSetByLoader:(UIImage *)arg1;
- (void)setImageContentGuide:(UILayoutGuide *)arg1;
- (void)setImageLoader:(_UIImageLoader *)arg1;
- (void)setLayouts:(NSMapTable *)arg1;
- (void)setLoadingDelegate:(id <_UIImageViewLoadingDelegate>)arg1;
- (void)setMasksTemplateImages:(bool)arg1;
- (void)setOverridingSymbolConfiguration:(UIImageSymbolConfiguration *)arg1;
- (void)setPlaceholderView:(UIView *)arg1;
- (void)setPreferredSymbolConfiguration:(UIImageSymbolConfiguration *)arg1;
- (void)setResolvedHighlightedImage:(UIImage *)arg1;
- (void)setResolvedImage:(UIImage *)arg1;
- (void)setStartingLoad:(bool)arg1;
- (void)setStoppingLoad:(bool)arg1;
- (void)setTemplateImageRenderingEffects:(unsigned long long)arg1;
- (unsigned long long)templateImageRenderingEffects;

@end
