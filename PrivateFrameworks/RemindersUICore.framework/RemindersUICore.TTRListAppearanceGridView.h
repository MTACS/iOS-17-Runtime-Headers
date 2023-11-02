
@interface RemindersUICore.TTRListAppearanceGridView : UIView {
    void arrangedSubviews;
    void badgeSize;
    void horizontalMargins;
    void minimumGap;
    void preferredMaxLayoutWidth;
    void topMargin;
    void verticalGap;
}

@property (nonatomic, copy) NSArray *accessibilityElements;
@property (nonatomic) struct CGSize { double x1; double x2; } badgeSize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } intrinsicContentSize;
@property (nonatomic) double minimumGap;

- (void).cxx_destruct;
- (id)accessibilityElements;
- (struct CGSize { double x1; double x2; })badgeSize;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (double)minimumGap;
- (void)setAccessibilityElements:(id)arg1;
- (void)setBadgeSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setMinimumGap:(double)arg1;

@end
