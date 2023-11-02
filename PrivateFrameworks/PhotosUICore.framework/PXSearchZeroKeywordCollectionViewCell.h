
@interface PXSearchZeroKeywordCollectionViewCell : UICollectionViewCell {
    PXRoundedCornerOverlayView * _imageCornerOverlayView;
    UIImageView * _imageView;
    UILabel * _textLabel;
}

@property (nonatomic, readonly) PXRoundedCornerOverlayView *imageCornerOverlayView;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, retain) UILabel *textLabel;

+ (double)_calculateHeightNeededForTextLabelWithNumberOfLines:(unsigned long long)arg1;
+ (struct CGSize { double x1; double x2; })_thumbnailSizeWithMetric:(double)arg1;
+ (id)attributedStringForCellLabelWithString:(id)arg1;
+ (bool)cellLabelTextNeedsMultipleLines:(id)arg1 cellWidth:(double)arg2;
+ (struct CGSize { double x1; double x2; })cellSizeForAccessibilityTextWithTextLabelNumberOfLines:(unsigned long long)arg1 collectionInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 collectionCellSpacing:(double)arg3 screenWidth:(double)arg4;
+ (struct CGSize { double x1; double x2; })cellSizeForAccessibilityTextWithoutTextLabelUsingCollectionInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 collectionCellSpacing:(double)arg2 screenWidth:(double)arg3;
+ (struct CGSize { double x1; double x2; })cellSizeWithTextLabelNumberOfLines:(unsigned long long)arg1;
+ (struct CGSize { double x1; double x2; })cellSizeWithoutTextLabel;
+ (double)expectedNumberOfCellsVisibleWithAccessibilityText:(bool)arg1 withInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 cellSpacing:(double)arg3 screenWidth:(double)arg4;
+ (id)reuseIdentifier;
+ (struct CGSize { double x1; double x2; })thumbnailSize;
+ (struct CGSize { double x1; double x2; })thumbnailSizeForAccessibilityTextUsingCollectionInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 cellSpacing:(double)arg2 screenWidth:(double)arg3;
+ (id)thumbnailWidthInterpolator;
+ (double)verticalSpacing;

- (void).cxx_destruct;
- (id)focusEffect;
- (id)imageCornerOverlayView;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)prepareForReuse;
- (void)setImageView:(id)arg1;
- (void)setTextLabel:(id)arg1;
- (id)textLabel;

@end
