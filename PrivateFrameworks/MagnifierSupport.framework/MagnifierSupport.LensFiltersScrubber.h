
@interface MagnifierSupport.LensFiltersScrubber : UIControl <UIScrollViewDelegate> {
    void $__lazy_storage_$_activeItemIndicator;
    void $__lazy_storage_$_overlayBox;
    void buttons;
    void config;
    void feedbackGenerator;
    void maskedView;
    void overlayBoxLeadingAnchorConstraint;
    void scrollView;
    void shouldHighlight;
    void subscribers;
}

@property (nonatomic, copy) NSString *accessibilityHint;
@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic) unsigned long long accessibilityTraits;

- (void).cxx_destruct;
- (void)accessibilityDecrement;
- (id)accessibilityHint;
- (void)accessibilityIncrement;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (void)didTapScrollView:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(struct CGPoint { double x1; double x2; }*)arg3;
- (void)setAccessibilityHint:(id)arg1;
- (void)setAccessibilityLabel:(id)arg1;
- (void)setAccessibilityTraits:(unsigned long long)arg1;

@end
