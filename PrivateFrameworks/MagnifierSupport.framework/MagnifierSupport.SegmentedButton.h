
@interface MagnifierSupport.SegmentedButton : UIView <_UIClickPresentationInteractionDelegate> {
    void $__lazy_storage_$_internalButton;
    void $__lazy_storage_$_segmentedControl;
    void clickInteraction;
    void config;
    void control;
    void delegate;
    void expandsWithClickInteractionOnly;
    void glowSubscription;
    void isDimmed;
    void isExpanded;
    void isGlowing;
}

- (void).cxx_destruct;
- (id)clickPresentationInteraction:(id)arg1 presentationForPresentingViewController:(id)arg2;
- (id)clickPresentationInteraction:(id)arg1 previewForHighlightingAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)clickPresentationInteractionEnded:(id)arg1 wasCancelled:(bool)arg2;
- (bool)clickPresentationInteractionShouldBegin:(id)arg1;
- (bool)clickPresentationInteractionShouldPresent:(id)arg1;
- (void)didSelectSegment:(id)arg1;
- (void)didTap:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)removeFromSuperview;

@end
