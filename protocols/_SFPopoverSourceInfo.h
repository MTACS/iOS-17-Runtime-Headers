
@protocol _SFPopoverSourceInfo <NSObject>

@optional

- (UIBarButtonItem *)barButtonItem;
- (unsigned long long)permittedArrowDirections;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })popoverSourceRect;
- (UIView *)popoverSourceView;
- (long long)provenance;
- (void)setPermittedArrowDirections:(unsigned long long)arg1;
- (void)setProvenance:(long long)arg1;
- (void)setShouldHideArrow:(bool)arg1;
- (void)setShouldPassthroughSuperview:(bool)arg1;
- (bool)shouldDismissIfSourceRemovedAfterRepositioning;
- (bool)shouldHideArrow;
- (bool)shouldPassthroughSuperview;

@end
