
@interface CKSendMenuPresentationPopoverView : UIView {
    UIView * _appView;
    CKSendMenuPresentationPopoverBackdropView * _backdropView;
    UIVisualEffectView * _blurBackgroundView;
    CKSendMenuPopoverBlurContentsView * _blurContentsView;
    bool  _layoutSubviewsEnabled;
    UIImageView * _plusImageView;
    UIView * _sendMenuView;
}

@property (nonatomic, retain) UIView *appView;
@property (nonatomic, retain) CKSendMenuPresentationPopoverBackdropView *backdropView;
@property (nonatomic, retain) UIVisualEffectView *blurBackgroundView;
@property (nonatomic, retain) CKSendMenuPopoverBlurContentsView *blurContentsView;
@property (getter=isLayoutSubviewsEnabled, nonatomic) bool layoutSubviewsEnabled;
@property (nonatomic, retain) UIImageView *plusImageView;
@property (nonatomic, retain) UIView *sendMenuView;

+ (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })affineTransformToDownScaleSize:(struct CGSize { double x1; double x2; })arg1 toSize:(struct CGSize { double x1; double x2; })arg2;

- (void).cxx_destruct;
- (id)_animationForDismissingContentView:(id)arg1 finalBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 finalCenter:(struct CGPoint { double x1; double x2; })arg3 finalAlpha:(double)arg4;
- (id)animationForDismissingWithFinalBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 finalCenter:(struct CGPoint { double x1; double x2; })arg2 finalAlpha:(double)arg3;
- (id)animationForPresentingSendMenuViewWithFinalBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 finalCenter:(struct CGPoint { double x1; double x2; })arg2;
- (id)animationForTransitioningToAppViewWithFinalBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 finalCenter:(struct CGPoint { double x1; double x2; })arg2;
- (id)animationForTransitioningToNewSize:(struct CGSize { double x1; double x2; })arg1 center:(struct CGPoint { double x1; double x2; })arg2;
- (id)appView;
- (id)backdropView;
- (id)blurBackgroundView;
- (id)blurContentsView;
- (id)contentContainerView;
- (id)init;
- (bool)isLayoutSubviewsEnabled;
- (void)layoutSubviews;
- (id)plusImageView;
- (void)prepareForPresentation;
- (id)sendMenuView;
- (void)setAppView:(id)arg1;
- (void)setBackdropView:(id)arg1;
- (void)setBlurBackgroundView:(id)arg1;
- (void)setBlurContentsView:(id)arg1;
- (void)setLayoutSubviewsEnabled:(bool)arg1;
- (void)setPlusImageView:(id)arg1;
- (void)setSendMenuView:(id)arg1;

@end
