
@protocol TVRowHosting_Collection <TVRowHosting>

@required

- (NSArray *)rowMetricsForExpectedWidth:(double)arg1 withContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 firstItemRowIndex:(long long*)arg3;

@optional

- (NSArray *)showcaseRowMetricsForExpectedWidth:(double)arg1 withContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;

@end
