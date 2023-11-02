
@interface PUReviewScreenControlBarButton : UIButton {
    bool  _useCompactSize;
}

@property (nonatomic) bool useCompactSize;

- (double)_padding;
- (double)_selectedIndicatorAlpha;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)setUseCompactSize:(bool)arg1;
- (bool)useCompactSize;

@end
