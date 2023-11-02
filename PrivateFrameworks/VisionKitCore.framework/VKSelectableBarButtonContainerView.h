
@interface VKSelectableBarButtonContainerView : UIView {
    UIButton * _button;
    double  _compactPadding;
    double  _cornerRadiusRatio;
    double  _padding;
    bool  _selected;
    double  _width;
}

@property (nonatomic, retain) UIButton *button;
@property (nonatomic) double compactPadding;
@property (nonatomic) double cornerRadiusRatio;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic) double padding;
@property (nonatomic) bool selected;
@property (nonatomic) double width;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_buttonSize;
- (id)button;
- (double)compactPadding;
- (double)cornerRadiusRatio;
- (void)didMoveToWindow;
- (id)image;
- (id)init;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (double)padding;
- (bool)selected;
- (void)setButton:(id)arg1;
- (void)setCompactPadding:(double)arg1;
- (void)setCornerRadiusRatio:(double)arg1;
- (void)setImage:(id)arg1;
- (void)setPadding:(double)arg1;
- (void)setSelected:(bool)arg1;
- (void)setWidth:(double)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)updateForMiniBarState:(bool)arg1;
- (double)width;

@end
