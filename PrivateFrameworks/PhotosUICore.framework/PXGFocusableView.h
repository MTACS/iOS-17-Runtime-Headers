
@interface PXGFocusableView : UIView <PXGReusableView> {
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
    struct { 
        unsigned int didUpdateUserData : 1; 
        unsigned int didUpdateFocusInContext : 1; 
        unsigned int didHintFocusMovement : 1; 
    }  _delegateFlags;
    PXGFocusableViewConfiguration * _userData;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } clippingRect;
@property (nonatomic, readonly) bool shouldReuseWhenInvisible;
@property (nonatomic, copy) PXGFocusableViewConfiguration *userData;

- (void).cxx_destruct;
- (bool)_isEligibleForFocusInteraction;
- (void)addHostedLayer:(id)arg1;
- (void)addHostedView:(id)arg1;
- (void)becomeReusable;
- (bool)canBecomeFocused;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })clippingRect;
- (struct CGPoint { double x1; double x2; })convertHostedChildCenter:(struct CGPoint { double x1; double x2; })arg1 fromGlobalLayer:(id)arg2;
- (id)description;
- (void)didHintFocusMovement:(id)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)prepareForReuse;
- (void)setClippingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setUserData:(id)arg1;
- (id)userData;

@end
