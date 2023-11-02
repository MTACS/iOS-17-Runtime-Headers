
@interface PXGFocusEffectView : PXGFocusableView {
    int  _activeSelectPressesCount;
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
    _UIFloatingContentView * _floatingContentView;
    UIView * _hostedContentView;
}

@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic, readonly) UIView *hostedContentView;
@property (nonatomic, copy) PXGFocusEffectViewConfiguration *userData;

- (void).cxx_destruct;
- (void)_handleSelectTap:(id)arg1;
- (void)_updatePressedAppearance;
- (void)addHostedLayer:(id)arg1;
- (void)addHostedView:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })clippingRect;
- (id)contentView;
- (struct CGPoint { double x1; double x2; })convertHostedChildCenter:(struct CGPoint { double x1; double x2; })arg1 fromGlobalLayer:(id)arg2;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)hostedContentView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)setClippingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
