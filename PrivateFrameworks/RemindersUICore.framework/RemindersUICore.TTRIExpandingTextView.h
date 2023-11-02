
@interface RemindersUICore.TTRIExpandingTextView : UITextView {
    void isForUseInNUIContainerView;
    void lineIndexWhereClippingBegins;
    void textStorageObserver;
}

@property (nonatomic, readonly) bool _shouldScrollEnclosingScrollView;
@property (nonatomic) unsigned long long accessibilityTraits;
@property (nonatomic) struct CGPoint { double x1; double x2; } contentOffset;
@property (nonatomic) struct CGSize { double x1; double x2; } contentSize;
@property (nonatomic) bool scrollEnabled;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_layoutSizeThatFits:(struct CGSize { double x1; double x2; })arg1 fixedAxes:(unsigned long long)arg2;
- (bool)_shouldScrollEnclosingScrollView;
- (bool)accessibilityActivate;
- (unsigned long long)accessibilityTraits;
- (struct CGPoint { double x1; double x2; })contentOffset;
- (struct CGSize { double x1; double x2; })contentSize;
- (double)effectiveBaselineOffsetFromBottom;
- (double)effectiveFirstBaselineOffsetFromTop;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textContainer:(id)arg2;
- (bool)isScrollEnabled;
- (void)setAccessibilityTraits:(unsigned long long)arg1;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setScrollEnabled:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
