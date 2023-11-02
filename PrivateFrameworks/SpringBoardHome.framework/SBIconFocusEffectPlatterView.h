
@interface SBIconFocusEffectPlatterView : UIView {
    MTMaterialView * _materialView;
    UIView * _vibrantFillView;
}

@property (nonatomic, readonly) MTMaterialView *materialView;
@property (nonatomic, readonly) UIView *vibrantFillView;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)materialView;
- (id)vibrantFillView;

@end
