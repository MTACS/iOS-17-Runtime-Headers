
@interface PXGBlurEffectView : UIView <PXGReusableView> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _clippingRect;
    UIVisualEffectView * _effectView;
    PXGBlurEffectViewConfiguration * _userData;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } clippingRect;
@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic, readonly) bool shouldReuseWhenInvisible;
@property (nonatomic, copy) PXGBlurEffectViewConfiguration *userData;

- (void).cxx_destruct;
- (void)addHostedLayer:(id)arg1;
- (void)addHostedView:(id)arg1;
- (void)becomeReusable;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })clippingRect;
- (id)contentView;
- (struct CGPoint { double x1; double x2; })convertHostedChildCenter:(struct CGPoint { double x1; double x2; })arg1 fromGlobalLayer:(id)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setClippingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setUserData:(id)arg1;
- (id)userData;

@end
