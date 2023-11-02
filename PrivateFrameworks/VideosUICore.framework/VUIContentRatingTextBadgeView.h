
@interface VUIContentRatingTextBadgeView : UIView {
    UILayoutGuide * _contentGuide;
    NSAttributedString * _contentRatingAttributedText;
}

@property (nonatomic, retain) UILayoutGuide *contentGuide;
@property (nonatomic, copy) NSAttributedString *contentRatingAttributedText;
@property (nonatomic, copy) NSString *contentRatingText;

+ (id)_attributedRatingTextForText:(id)arg1 color:(id)arg2;
+ (id)_badgeImageWithAttributedRatingText:(id)arg1 andColor:(id)arg2;
+ (struct CGSize { double x1; double x2; })_badgeSizeForAttributedRatingText:(id)arg1;
+ (void)_drawBadgeWithAttributedRatingText:(id)arg1 inContext:(struct CGContext { }*)arg2 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 color:(id)arg4;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_paddingEdgeInsets;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_intrinsicContentSize;
- (void)_updateContentRatingAttributedText:(id)arg1;
- (id)contentGuide;
- (id)contentRatingAttributedText;
- (id)contentRatingText;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)firstBaselineAnchor;
- (id)initWithBaselineOffsetFromBottom:(double)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)lastBaselineAnchor;
- (void)setContentGuide:(id)arg1;
- (void)setContentRatingAttributedText:(id)arg1;
- (void)setContentRatingText:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)tintColorDidChange;

@end
