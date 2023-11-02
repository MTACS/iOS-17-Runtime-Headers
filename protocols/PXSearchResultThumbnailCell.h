
@protocol PXSearchResultThumbnailCell <NSObject>

@required

+ (NSString *)reuseIdentifier;

- (void)setThumbnailImage:(UIImage *)arg1;
- (struct CGSize { double x1; double x2; })thumbnailImageViewPixelSize;

@optional

- (void)setAssetThumbnailBadgeTypes:(unsigned long long)arg1 forAsset:(PHAsset *)arg2;

@end
