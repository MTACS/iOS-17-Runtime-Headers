
@interface SeymourUI.SliderView : UIView {
    void $__lazy_storage_$_panGestureRecognizer;
    void currentState;
    void currentTrackWidth;
    void elapsedTrack;
    void elapsedTrackWidthConstraint;
    void feedbackGenerator;
    void isEnabled;
    void oldBounds;
    void onValueChanged;
    void remainingTrack;
    void stackView;
    void styleProvider;
    void trackHeightConstraint;
    void trackLayoutGuide;
    void value;
    void valueRange;
}

@property (nonatomic) long long semanticContentAttribute;

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)panGestureRecognized:(id)arg1;
- (long long)semanticContentAttribute;
- (void)setSemanticContentAttribute:(long long)arg1;

@end
