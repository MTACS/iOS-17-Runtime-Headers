
@interface PBUIReplicaDebugView : UIView {
    UIView * _borderView;
    UIColor * _color;
    UILabel * _labelView;
    bool  _labelViewNeedsLayout;
}

@property (nonatomic, retain) UIColor *color;
@property (nonatomic, retain) NSString *title;

+ (id)debugFont;
+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (id)color;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setColor:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
