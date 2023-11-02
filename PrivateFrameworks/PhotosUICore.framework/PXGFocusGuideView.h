
@interface PXGFocusGuideView : UIView <PXGReusableView> {
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
    NSArray * _constraints;
    UIFocusGuide * _focusGuide;
    PXGFocusGuideViewConfiguration * _userData;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } clippingRect;
@property (nonatomic, readonly) bool shouldReuseWhenInvisible;
@property (nonatomic, copy) PXGFocusGuideViewConfiguration *userData;

- (void).cxx_destruct;
- (bool)_isEligibleForFocusInteraction;
- (void)becomeReusable;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })clippingRect;
- (void)didMoveToSuperview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setClippingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setUserData:(id)arg1;
- (id)userData;
- (void)willMoveToSuperview:(id)arg1;

@end
