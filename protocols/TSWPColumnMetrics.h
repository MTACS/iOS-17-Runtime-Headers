
@protocol TSWPColumnMetrics

@required

- (struct CGSize { double x1; double x2; })adjustedInsets;
- (bool)alwaysStartsNewTarget;
- (unsigned long long)columnCount;
- (bool)columnsAreLeftToRight;
- (double)gapForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;
- (TSWPPadding *)layoutMargins;
- (double)positionForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 outWidth:(double*)arg3 outGap:(double*)arg4;
- (bool)shrinkTextToFit;
- (double)widthForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;

@optional

- (double)textScaleFactor;

@end
