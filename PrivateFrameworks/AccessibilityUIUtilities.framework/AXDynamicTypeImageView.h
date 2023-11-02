
@interface AXDynamicTypeImageView : UIImageView {
    UIFontMetrics * _fontMetrics;
    NSString * _maximumContentSizeCategory;
    NSString * _minimumContentSizeCategory;
}

@property (nonatomic, retain) UIFontMetrics *fontMetrics;
@property (nonatomic, copy) NSString *maximumContentSizeCategory;
@property (nonatomic, copy) NSString *minimumContentSizeCategory;

- (void).cxx_destruct;
- (void)_commonInit;
- (struct CGSize { double x1; double x2; })_scaledSizeForSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_traitCollectionDidChange:(id)arg1;
- (id)fontMetrics;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithImage:(id)arg1;
- (id)initWithImage:(id)arg1 highlightedImage:(id)arg2;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)maximumContentSizeCategory;
- (id)minimumContentSizeCategory;
- (void)setFontMetrics:(id)arg1;
- (void)setMaximumContentSizeCategory:(id)arg1;
- (void)setMinimumContentSizeCategory:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
