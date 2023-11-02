
@interface PXSearchResultAssetCell : UICollectionViewCell <PXSearchResultThumbnailCell> {
    UIImageView * _leadingBackgroundGradientView;
    UIImageView * _leadingBadgeImageView;
    UIImageView * _thumbnailImageView;
    UIImageView * _trailingBackgroundGradientView;
    UIImageView * _trailingBadgeImageView;
    UILabel * _trailingVideoDurationLabel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImageView *leadingBackgroundGradientView;
@property (nonatomic, retain) UIImageView *leadingBadgeImageView;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIImageView *thumbnailImageView;
@property (nonatomic, retain) UIImageView *trailingBackgroundGradientView;
@property (nonatomic, retain) UIImageView *trailingBadgeImageView;
@property (nonatomic, retain) UILabel *trailingVideoDurationLabel;

+ (id)_videoDurationFormatter;
+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)focusEffect;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)leadingBackgroundGradientView;
- (id)leadingBadgeImageView;
- (void)prepareForReuse;
- (void)setAssetThumbnailBadgeTypes:(unsigned long long)arg1 forAsset:(id)arg2;
- (void)setLeadingBackgroundGradientView:(id)arg1;
- (void)setLeadingBadgeImageView:(id)arg1;
- (void)setThumbnailImage:(id)arg1;
- (void)setTrailingBackgroundGradientView:(id)arg1;
- (void)setTrailingBadgeImageView:(id)arg1;
- (void)setTrailingVideoDurationLabel:(id)arg1;
- (id)thumbnailImageView;
- (struct CGSize { double x1; double x2; })thumbnailImageViewPixelSize;
- (id)trailingBackgroundGradientView;
- (id)trailingBadgeImageView;
- (id)trailingVideoDurationLabel;

@end
