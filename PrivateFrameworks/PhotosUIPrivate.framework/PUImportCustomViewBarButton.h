
@interface PUImportCustomViewBarButton : UIButton {
    NSString * _customAccessibilityLabel;
    UIView * _customView;
}

@property (nonatomic, copy) NSString *customAccessibilityLabel;
@property (nonatomic, readonly) UIView *customView;

- (void).cxx_destruct;
- (id)accessibilityLabel;
- (id)customAccessibilityLabel;
- (id)customView;
- (id)initWithCustomView:(id)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)invalidateIntrinsicContentSize;
- (void)setCustomAccessibilityLabel:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)sizeToFit;
- (void)updateConstraints;

@end
