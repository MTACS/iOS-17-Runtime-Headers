
@protocol UISplittableInputView <NSObject>

@required

- (void)didEndSplitTransition;
- (void)layoutMergedSubviews;
- (void)layoutSplitSubviewsWithLeftContentSize:(struct CGSize { double x1; double x2; })arg1 rightContentSize:(struct CGSize { double x1; double x2; })arg2;
- (void)updateMergedSubviewConstraints;
- (void)updateSplitSubviewContraintsWithLeftContentSize:(struct CGSize { double x1; double x2; })arg1 rightContentSize:(struct CGSize { double x1; double x2; })arg2;
- (void)willBeginSplitTransition;

@end
