
@interface CKTextMetricsProvider : NSObject

- (id)_metricsForAttributedString:(id)arg1 lineFragmentPadding:(double)arg2 maximumNumberOfLines:(unsigned long long)arg3 lineBreakMode:(long long)arg4 targetSize:(struct CGSize { double x1; double x2; })arg5;
- (id)_metricsForRequest:(id)arg1 containerInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (id)_metricsForRequest:(id)arg1 containerInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 minimumViewHeight:(double)arg3;
- (id)metricsForRequest:(id)arg1;

@end
