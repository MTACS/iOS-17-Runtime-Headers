
@protocol SBHSearchAffordance <NSObject, SBHLegibility>

@required

- (bool)appliesSearchAffordanceCornerRadius;
- (UIView *)searchAffordanceBackgroundView;
- (long long)searchAffordanceContentAlignment;
- (UIView *)searchAffordanceContentView;
- (double)searchAffordanceCornerRadius;
- (UIView *)searchAffordanceReferenceContainerView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })searchAffordanceReferenceFrame;
- (UIView *)searchAffordanceReferenceView;
- (void)setAppliesSearchAffordanceCornerRadius:(bool)arg1;
- (void)setSearchAffordanceContentAlignment:(long long)arg1;
- (void)setSearchAffordanceCornerRadius:(double)arg1;

@optional

- (UIView *)makeSearchAffordanceBackgroundCapturingView;

@end
