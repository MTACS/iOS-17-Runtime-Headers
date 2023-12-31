
@interface FMDistanceBadge : UILabel {
    UIColor * _badgeColor;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _insets;
}

@property (nonatomic, retain) UIColor *badgeColor;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } insets;

- (void).cxx_destruct;
- (void)_commonSetup;
- (void)awakeFromNib;
- (id)badgeColor;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })insets;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)prepareForInterfaceBuilder;
- (void)setBackgroundColor:(id)arg1;
- (void)setBadgeColor:(id)arg1;
- (void)setInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;

@end
