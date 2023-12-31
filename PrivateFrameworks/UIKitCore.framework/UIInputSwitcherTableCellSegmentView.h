
@interface UIInputSwitcherTableCellSegmentView : UIView {
    UIInputSwitcherTableCellBackgroundView * _backgroundView;
    UIImageView * _imageView;
    UILabel * _label;
    bool  _selected;
    bool  _usesDarkTheme;
}

@property (nonatomic, readonly) UIInputSwitcherTableCellBackgroundView *backgroundView;
@property (nonatomic, readonly) UIImageView *imageView;
@property (nonatomic, readonly) UILabel *label;
@property (getter=isSelected, nonatomic) bool selected;
@property (nonatomic) bool usesDarkTheme;

+ (id)_fontForBiasLabel;

- (void).cxx_destruct;
- (id)backgroundView;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isSelected;
- (id)label;
- (void)layoutSubviews;
- (void)setSelected:(bool)arg1;
- (void)setUsesDarkTheme:(bool)arg1;
- (bool)usesDarkTheme;

@end
