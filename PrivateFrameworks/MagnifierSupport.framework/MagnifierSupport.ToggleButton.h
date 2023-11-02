
@interface MagnifierSupport.ToggleButton : UIControl <_UIClickPresentationInteractionDelegate> {
    void $__lazy_storage_$_internalButton;
    void $__lazy_storage_$_label;
    void clickInteraction;
    void config;
    void control;
    void delegate;
    void detectionModeGlowSubscription;
    void doorDetectionGlowSubscription;
    void focusLockGlowSubscription;
    void freezeFrameReviewSubscription;
    void imageCaptionGlowSubscription;
    void isDimmed;
    void isExpanded;
    void isGlowing;
    void isOn;
    void peopleDetectionGlowSubscription;
    void pointSpeakGlowSubscription;
    void textDetectionGlowSubscription;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } accessibilityActivationPoint;
@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic, copy) NSString *accessibilityValue;
@property (nonatomic) bool isAccessibilityElement;
@property (nonatomic, retain) UIImage *largeContentImage;
@property (nonatomic, copy) NSString *largeContentTitle;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })accessibilityActivationPoint;
- (id)accessibilityLabel;
- (id)accessibilityValue;
- (id)clickPresentationInteraction:(id)arg1 presentationForPresentingViewController:(id)arg2;
- (id)clickPresentationInteraction:(id)arg1 previewForHighlightingAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)clickPresentationInteractionEnded:(id)arg1 wasCancelled:(bool)arg2;
- (bool)clickPresentationInteractionShouldBegin:(id)arg1;
- (bool)clickPresentationInteractionShouldPresent:(id)arg1;
- (void)didTap:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAccessibilityElement;
- (void)labelTapped:(id)arg1;
- (id)largeContentImage;
- (id)largeContentTitle;
- (void)layoutSubviews;
- (void)removeFromSuperview;
- (void)setAccessibilityActivationPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setAccessibilityLabel:(id)arg1;
- (void)setAccessibilityValue:(id)arg1;
- (void)setIsAccessibilityElement:(bool)arg1;
- (void)setLargeContentImage:(id)arg1;
- (void)setLargeContentTitle:(id)arg1;

@end
