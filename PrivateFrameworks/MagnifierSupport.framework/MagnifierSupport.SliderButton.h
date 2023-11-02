
@interface MagnifierSupport.SliderButton : UIView <UIGestureRecognizerDelegate, _UIClickPresentationInteractionDelegate> {
    void $__lazy_storage_$_internalButton;
    void $__lazy_storage_$_slider;
    void clickInteraction;
    void config;
    void control;
    void delegate;
    void freezeFrameReviewSubscription;
    void glowSubscription;
    void isDimmed;
    void isExpanded;
    void isGlowing;
}

@property (nonatomic, copy) NSString *accessibilityIdentifier;
@property (nonatomic) bool isAccessibilityElement;

- (void).cxx_destruct;
- (id)accessibilityIdentifier;
- (id)clickPresentationInteraction:(id)arg1 presentationForPresentingViewController:(id)arg2;
- (id)clickPresentationInteraction:(id)arg1 previewForHighlightingAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)clickPresentationInteractionEnded:(id)arg1 wasCancelled:(bool)arg2;
- (bool)clickPresentationInteractionShouldBegin:(id)arg1;
- (bool)clickPresentationInteractionShouldPresent:(id)arg1;
- (void)didTap:(id)arg1;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAccessibilityElement;
- (void)layoutSubviews;
- (void)removeFromSuperview;
- (void)setAccessibilityIdentifier:(id)arg1;
- (void)setIsAccessibilityElement:(bool)arg1;

@end
