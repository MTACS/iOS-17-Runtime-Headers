
@interface NewsArticles.SliderView : UIView {
    void $__lazy_storage_$_elapsedTrackWidthConstraint;
    void $__lazy_storage_$_panRecognizer;
    void $__lazy_storage_$_trackHeightConstraint;
    void elapsedTrack;
    void elapsedTrackColor;
    void feedbackGenerator;
    void isEnabled;
    void isTracking;
    void lastSeenBounds;
    void remainingTrack;
    void remainingTrackColor;
    void stackView;
    void startingWidth;
    void trackLayoutGuide;
    void trackingColor;
    void value;
    void valueChangedHandler;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } accessibilityActivationPoint;
@property (nonatomic, copy) NSString *accessibilityValue;
@property (nonatomic) long long semanticContentAttribute;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })accessibilityActivationPoint;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (id)accessibilityValue;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)panGestureRecognized:(id)arg1;
- (long long)semanticContentAttribute;
- (void)setAccessibilityActivationPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setAccessibilityValue:(id)arg1;
- (void)setSemanticContentAttribute:(long long)arg1;

@end
