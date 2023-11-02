
@protocol PKPGSVSectionHeaderView <NSObject>

@required

- (UIView *)leadingView;
- (bool)needsRemoval;
- (void)setHeaderDelegate:(id <PKPGSVSectionHeaderDelegate>)arg1;
- (void)setSectionsState:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned int x_1_1_3 : 1; unsigned int x_1_1_4 : 1; unsigned int x_1_1_5 : 1; } x1; unsigned int x2 : 1; unsigned int x3 : 1; })arg1;
- (UIView *)trailingView;

@end
