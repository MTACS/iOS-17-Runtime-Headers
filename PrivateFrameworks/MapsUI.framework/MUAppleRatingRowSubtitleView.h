
@interface MUAppleRatingRowSubtitleView : UIStackView {
    void $__lazy_storage_$_lineTwoStackView;
    void $__lazy_storage_$_percentLabel;
    void $__lazy_storage_$_ratingsLabel;
    void $__lazy_storage_$_rollingLabelsView;
    void isContentUpdateInProgress;
    void usingTwoLineLayout;
}

- (void).cxx_destruct;
- (void)contentSizeDidChange;
- (id)initWithArrangedSubviews:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setPercentageString:(id)arg1 ratingsValueString:(id)arg2 ratingsValueAnimation:(long long)arg3 ratingsString:(id)arg4;
- (void)updateForSizeClassChange;

@end
