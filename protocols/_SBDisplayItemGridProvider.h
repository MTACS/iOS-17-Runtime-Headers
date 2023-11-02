
@protocol _SBDisplayItemGridProvider <NSObject>

@required

- (NSArray *)allHeights;
- (NSArray *)allWidths;
- (struct CGSize { double x1; double x2; })maxSize;
- (struct CGSize { double x1; double x2; })minSize;
- (struct CGSize { double x1; double x2; })nearestGridSizeForSize:(struct CGSize { double x1; double x2; })arg1 countOnStage:(unsigned long long)arg2;
- (struct CGSize { double x1; double x2; })sizeAtIndexFromFullWidthForBounds:(unsigned long long)arg1;

@end
