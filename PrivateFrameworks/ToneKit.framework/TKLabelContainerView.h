
@interface TKLabelContainerView : UIView {
    UILabel * _label;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _labelPaddingInsets;
}

@property (nonatomic, retain) UIFont *labelFont;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } labelPaddingInsets;
@property (nonatomic, retain) UIColor *labelShadowColor;
@property (nonatomic) struct UIOffset { double x1; double x2; } labelShadowOffset;
@property (nonatomic, copy) NSString *labelText;
@property (nonatomic, retain) UIColor *labelTextColor;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)labelFont;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })labelPaddingInsets;
- (id)labelShadowColor;
- (struct UIOffset { double x1; double x2; })labelShadowOffset;
- (id)labelText;
- (id)labelTextColor;
- (void)layoutSubviews;
- (void)setLabelFont:(id)arg1;
- (void)setLabelPaddingInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setLabelShadowColor:(id)arg1;
- (void)setLabelShadowOffset:(struct UIOffset { double x1; double x2; })arg1;
- (void)setLabelText:(id)arg1;
- (void)setLabelTextColor:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
