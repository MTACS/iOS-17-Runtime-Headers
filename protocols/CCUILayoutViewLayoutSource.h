
@protocol CCUILayoutViewLayoutSource <NSObject>

@required

- (NSArray *)horizontalDoubleMarginIndicesForLayoutView:(CCUILayoutView *)arg1;
- (struct CCUILayoutSize { unsigned long long x1; unsigned long long x2; })layoutSizeForLayoutView:(CCUILayoutView *)arg1;
- (struct CCUILayoutRect { struct CCUILayoutPoint { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct CCUILayoutSize { unsigned long long x_2_1_1; unsigned long long x_2_1_2; } x2; })layoutView:(CCUILayoutView *)arg1 layoutRectForSubview:(UIView *)arg2;
- (NSArray *)verticalDoubleMarginIndicesForLayoutView:(CCUILayoutView *)arg1;

@end
