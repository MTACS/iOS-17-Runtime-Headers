
@interface PUCurationKeyAssetComparisonViewCell : UICollectionViewCell {
    UIImageView * _imageView;
    NSString * _representedAssetIdentifier;
    UIImage * _thumbnailImage;
}

@property (nonatomic, retain) NSString *representedAssetIdentifier;
@property (nonatomic, retain) UIImage *thumbnailImage;

+ (double)cellHeightWithCellWidth:(double)arg1;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)representedAssetIdentifier;
- (void)setRepresentedAssetIdentifier:(id)arg1;
- (void)setThumbnailImage:(id)arg1;
- (id)thumbnailImage;

@end
