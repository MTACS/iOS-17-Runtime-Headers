
@interface CKPaddleOverlayView : UIView {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _anchorRect;
    UIView * _contentView;
    UIView * _darkOuterGlowView;
    <CKPaddleOverlayViewDelegate> * _delegate;
    UIView * _innerGlowView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _overlayRect;
    UIView * _paddleView;
    UIImageView * _shadowView;
    UIView * _viewToShow;
    UIVisualEffectView * _visualEffectView;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } anchorRect;
@property (nonatomic, retain) UIView *contentView;
@property (nonatomic, retain) UIView *darkOuterGlowView;
@property (nonatomic) <CKPaddleOverlayViewDelegate> *delegate;
@property (nonatomic, retain) UIView *innerGlowView;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } overlayRect;
@property (nonatomic, retain) UIView *paddleView;
@property (nonatomic, retain) UIImageView *shadowView;
@property (nonatomic, retain) UIView *viewToShow;
@property (nonatomic, retain) UIVisualEffectView *visualEffectView;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })anchorRect;
- (id)contentView;
- (id)darkOuterGlowView;
- (id)delegate;
- (void)dismiss;
- (void)drawMacPaddle;
- (id)initWithOverlayView:(id)arg1 atAnchorRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 inView:(id)arg3 delegate:(id)arg4;
- (id)innerGlowView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })overlayRect;
- (id)paddleView;
- (void)setAnchorRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentView:(id)arg1;
- (void)setDarkOuterGlowView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInnerGlowView:(id)arg1;
- (void)setOverlayRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPaddleView:(id)arg1;
- (void)setShadowView:(id)arg1;
- (void)setViewToShow:(id)arg1;
- (void)setVisualEffectView:(id)arg1;
- (id)shadowView;
- (void)showPaddleAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateShadowVisualStyling;
- (id)viewToShow;
- (id)visualEffectView;

@end
