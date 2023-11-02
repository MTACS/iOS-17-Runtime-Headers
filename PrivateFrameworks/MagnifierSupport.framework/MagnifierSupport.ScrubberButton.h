
@interface MagnifierSupport.ScrubberButton : UIView <UIGestureRecognizerDelegate> {
    void $__lazy_storage_$_internalButton;
    void $__lazy_storage_$_scrubber;
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
