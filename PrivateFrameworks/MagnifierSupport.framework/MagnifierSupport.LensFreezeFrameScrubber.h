
@interface MagnifierSupport.LensFreezeFrameScrubber : UIControl <UIScrollViewDelegate> {
    void $__lazy_storage_$_activeItemIndicator;
    void $__lazy_storage_$_addButton;
    void $__lazy_storage_$_overlayBox;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  activeItemIndexPath;
    void buttons;
    void config;
    void feedbackGenerator;
    void maskedView;
    void overlayBoxLeadingAnchorConstraint;
    void rotationSubscription;
    void scrollView;
    void shouldCenterButtonsVerticallyInParent;
    void shouldHighlight;
    void subscribers;
}

@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic) unsigned long long accessibilityTraits;
@property (nonatomic) bool isAccessibilityElement;

- (void).cxx_destruct;
- (id)_accessibilitySupplementaryFooterViews;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (void)didTapAddButton:(id)arg1;
- (void)didTapScrollView:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAccessibilityElement;
- (void)layoutSubviews;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(struct CGPoint { double x1; double x2; }*)arg3;
- (void)setAccessibilityLabel:(id)arg1;
- (void)setAccessibilityTraits:(unsigned long long)arg1;
- (void)setIsAccessibilityElement:(bool)arg1;

@end
