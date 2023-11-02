
@interface HUCheckmarkAccessoryView : UIView {
    bool  _checked;
    UIImageView * _checkmarkImageView;
    bool  _disabled;
}

@property (nonatomic) bool checked;
@property (nonatomic, retain) UIImageView *checkmarkImageView;
@property (nonatomic) bool disabled;

+ (double)borderWidth;
+ (id)grayBorderColor;

- (void).cxx_destruct;
- (void)_updateColors;
- (bool)checked;
- (id)checkmarkImageView;
- (bool)disabled;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)setChecked:(bool)arg1;
- (void)setCheckmarkImageView:(id)arg1;
- (void)setDisabled:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)tintColorDidChange;

@end
