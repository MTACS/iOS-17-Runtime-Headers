
@interface HUCircleView : UIView {
    bool  _backgroundColorFollowsTintColor;
    bool  _borderColorFollowsTintColor;
    UIView * _controlCenterMaterialView;
}

@property (nonatomic) bool backgroundColorFollowsTintColor;
@property (nonatomic) bool borderColorFollowsTintColor;
@property (nonatomic, retain) UIView *controlCenterMaterialView;

+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (bool)backgroundColorFollowsTintColor;
- (bool)borderColorFollowsTintColor;
- (id)controlCenterMaterialView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setBackgroundColorFollowsTintColor:(bool)arg1;
- (void)setBorderColorFollowsTintColor:(bool)arg1;
- (void)setControlCenterMaterialView:(id)arg1;
- (void)tintColorDidChange;

@end
