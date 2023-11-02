
@interface PXDisplayAssetImageContentView : PXDisplayAssetContentView {
    UIImageView * _imageView;
}

- (void).cxx_destruct;
- (void)_updateImageViewContentMode;
- (void)_updateImageViewFilters;
- (void)contentModeDidChange;
- (id)contentView;
- (void)contentsRectDidChange;
- (void)imageDidChange;
- (void)imageProgressDidChange;
- (void)imageRequesterDidChange:(unsigned long long)arg1;
- (bool)isDisplayingFullQualityContent;
- (void)isDisplayingFullQualityContentDidChange;
- (double)loadingProgress;
- (void)placeholderImageFiltersDidChange;
- (long long)playbackStyle;

@end
